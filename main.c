Try AI directly in your favorite apps … Use Gemini to generate drafts and refine content, plus get Gemini Pro with access to Google's next-gen AI for £18.99 £9.49 for 2 months
/*
Program to predict the preterm birth (PTB) of a patient ID from all the EIS spectra of the ID.
User Inputs: a patient id
			 lr or rf where lr is a logistic regression model; rf is a random forest model
   			 cut-off value e.g. 0.5
Outputs: probability of PTB of the ID
         class label (preterm or onterm) using the cut-off value
Given an ID from command line, the program predicts the PTB of the ID using random forest or logistic regression
from the EIS spectra of the ID in 438_V1_all_eis_readings_real_imag_with_dummy_ids.csv.

Written by David Tian
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include "header.h"

float spectra_of_id [1][28];

int read_spectra_of_id_into_array(float id, char * spectra_of_all_ids_csv, float spectra_of_id [][28]);

void transform_real_and_imaginary_features_to_amplitude_and_phase_features(float spectra_of_id [][28], int no_of_spectra_of_id);

void predictPTB(char * id, float spectra_of_id [][28], int no_of_spectra_of_id, char * alg, float cutoff);

int main( int argc, char *argv[]) {
   char * id;
   float id_f;
   char * alg;
   float cutoff;
   FILE *fstream;
   char *line;
   char buffer[1024];
   int no_of_spectra_of_id;
   char * eis_data_file; /* csv file containing the EIS data of 438 patients*/
   char * classifier;

   if(argc == 4)
   {
      /*printf("The argument supplied are %s, %s, %s\n", argv[1], argv[2], argv[3]);*/
      /*check validity of input arguments: id, rf (or lr), cut-off value between 0 and 1.*/
   	  id=argv[1];
      alg=argv[2];
      cutoff=atof(argv[3]);
      id_f=atof(id);
      eis_data_file="438_V1_all_eis_readings_real_imag_with_dummy_ids.csv";

   	  if(cutoff <= 0 || cutoff >= 1){
	  	    printf("Error: Invalid cut-off value: %f\n",cutoff);
	  	    printf("Cut-off value must be a number > 0 and < 1.\n");
	  	    return -1;
	  }
   	  if(strcmp(alg,"lr")==0)
  	  		classifier="logistic regression";
  	  else if(strcmp(alg,"rf")==0)
 	  	    classifier="random forest";
  	  else
  	  {
	   	printf("Error: Invalid algorithm specificed: %s\n",alg);
	   	printf("Valid algorithm: rf or lr\n");
	   	return -1;
	  }
   }
   else {
      printf("Error: Please provide 3 input arguments.\nRunning command: <name of main program> <a patient ID> <rf (or lr)> <cut-off value e.g. 0.5>.\n");
   	  return -1;
   }
   no_of_spectra_of_id=read_spectra_of_id_into_array(id_f, eis_data_file, spectra_of_id);
   if (no_of_spectra_of_id==0)
   {
   	 printf("Error: ID %s is not in %s.\nPlease input a different ID.\n",id,eis_data_file);
   	 return -1;
   }
   else if (no_of_spectra_of_id==-1)
   {
	 printf("Error: %s does not exist.\n",eis_data_file);
   	 return -1;
   }
   else if (no_of_spectra_of_id==-2)
   {
     printf("Error: file format of %s is invalid.\nThe first line of the file should be :\nhospital_id,real3_76,real3_153,real3_305,real3_610,real3_1221,real3_2441,real3_4883,real3_9766,real3_19531,real3_39063,real3_78125,real3_156250,real3_312500,real3_625000,img3_76,img3_153,img3_305,img3_610,img3_1221,img3_2441,img3_4883,img3_9766,img3_19531,img3_39063,img3_78125,img3_156250,img3_312500,img3_625000,before37weeks\n",eis_data_file);
     return -1;
   }
   else {
	 printf("###Predict PTB of ID %s using a %s based PTB predictor.###\n",id,classifier);
     predictPTB(id, spectra_of_id, no_of_spectra_of_id, alg, cutoff);
     return 0;
   }
}

int read_spectra_of_id_into_array(float id, char * spectra_of_all_ids_csv, float spectra_of_id [][28])
{
	  FILE *fstream;
	  int no_of_spectra_of_id;
	  char buffer[1024] ;
	  char *line;
	  char *token;
	  int i=0;
	  int k=0;
	  int j;
	  int n;
	  int n2;
	  int m2;
	  float num;
      float id2;
      int line_indices_of_spectra [10];
      int number_of_spectra=0;
	  int found_id=0;

      /* check existence of csv file and its feature names*/
	  fstream = fopen(spectra_of_all_ids_csv,"r");
	  if(fstream == NULL)
         return -1; /*file does not exist*/
      line=fgets(buffer,sizeof(buffer),fstream);
      if(strcmp(line,"hospital_id,real3_76,real3_153,real3_305,real3_610,real3_1221,real3_2441,real3_4883,real3_9766,real3_19531,real3_39063,real3_78125,real3_156250,real3_312500,real3_625000,img3_76,img3_153,img3_305,img3_610,img3_1221,img3_2441,img3_4883,img3_9766,img3_19531,img3_39063,img3_78125,img3_156250,img3_312500,img3_625000,before37weeks\n"))
	     return -2; /*first line is invalid*/
	  fclose(fstream);
	  fstream = fopen(spectra_of_all_ids_csv,"r");
 	  /* get indices of the lines corresponding to the spectra of the ID in spectra_of_all_ids_csv */
      while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
      {
		if(i > 0) /*skip the first line of variable names*/
        {
 			 token = strtok(line, ",");
			 id2=atof(token);
			 if (id == id2)
			 {
					found_id=1;
					line_indices_of_spectra[k]=i;
					k++;
			 }
			 else
			 {
				if (found_id==1)/* all spectra of the ID have been found */
				 	break;
			 }
		 }/*end if*/
		 i++;
       }/*end while*/
       fclose(fstream);
       number_of_spectra=k;
	   if (number_of_spectra==0)
  	       return number_of_spectra;
       /* read the spectra of the ID into an array */
       fstream = fopen(spectra_of_all_ids_csv,"r");
       j=0; /* index of a line of spectra_of_all_ids_csv */
       m2=0; /* index of a spectrum */
       while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
       {
		  if (j > line_indices_of_spectra[number_of_spectra-1])/* all spectra of ID have been read into array */
 		  	   break;
		  for(int m=0; m < number_of_spectra; m++)
		  {
			  if(j == line_indices_of_spectra[m])
	          {
	              token = strtok(line, ",");
	              n=0;
	              n2=0;
	              while(token != NULL )
	              {
					  if(n > 0 && n < 29) /* skip the ID column and the class column */
					  {
						num=atof(token);
						num = roundf(num*10000)/10000;/* keep 4 digits after the decimal point*/
						spectra_of_id[m2][n2]=num;
						n2++;
					  }
  					  n++;
					  token = strtok(NULL, ",");
				  }
			   m2++;
			  }
			  else {;}
		  }/* end for */
		  j++;
       }/* end while */
       fclose(fstream);

       return number_of_spectra;
}

void  transform_real_and_imaginary_features_to_amplitude_and_phase_features(float spectra_of_id [][28], int no_of_spectra_of_id)
{
  float x; /*real part of electric impedance at a specific frequecy*/
  float y; /*imaginary part of electric imepdance at a specific frequency*/
  float phase;
  float amp;
  for (int i=0; i < no_of_spectra_of_id; i++)
  {
	  for (int j=0; j < 14; j++)
	  {
		x=spectra_of_id[i][j];
	  	y=spectra_of_id[i][j+14];
	  	amp=sqrt(x*x + y*y);
	  	phase=atan2(y,x); /* phase in radian */
    	phase=phase * 180/M_PI; /*phase in degree */
    	amp=roundf(amp*10000)/10000; /* keep 4 digits after the decimal point*/
		phase=roundf(phase*10000)/10000;
		spectra_of_id[i][j]=amp;
		spectra_of_id[i][j+14]=phase;
	  }
  }
  /*
  printf("amplitude features and phase features\n");
  for (int i=0; i < no_of_spectra_of_id; i++)
  {
  	  printf("%d: ",i);
  	  for (int j=0; j < 28; j++)
	  {
		 printf("%.4f,",spectra_of_id[i][j]);
	  }
	  printf("\n");
  }
  */
}

void predictPTB(char * id, float spectra_of_id [][28], int no_of_spectra_of_id, char * alg, float cutoff)
{/*
  1. Select the best EIS spectrum using a random forest based spectrum selection filter.
  2. Predict the PTB of the id using a predictor (random forest or logistic regression specified by the user)
     based on the selected spectrum.
 */
 int no_of_spectra;
 float * scores; /* scores of selection of EIS spectra*/
 float score;
 float max_score;
 int best_spectrum_indx;
 float best_spectrum[1][28];
 float * prob_ptb;
 float probPTB;

 transform_real_and_imaginary_features_to_amplitude_and_phase_features(spectra_of_id,no_of_spectra_of_id);
 /* Select the best EIS spectrum for the ID*/
 printf("###1. Select the best EIS spectrum of the ID %s###\n",id);
 scores=scores_of_selection_rf23(spectra_of_id,no_of_spectra_of_id);
 max_score=0;
 best_spectrum_indx=0;
 for(int i = 0; i < no_of_spectra_of_id; i++) {
	   score=*(scores + i);
       if (score > max_score){
		   best_spectrum_indx=i;
		   max_score=score;
   	   }
       printf( "score of spectrum %d: %.4f\n", i+1, *(scores + i));
 }
 printf("\nbest spectrum: %d",best_spectrum_indx+1);
 printf(", score: %.4f\n",*(scores + best_spectrum_indx));
 for(int j=0; j < 28; j++) {
   best_spectrum[0][j]=spectra_of_id[best_spectrum_indx][j];
 }
 if(strcmp(alg,"rf")==0) {
	printf("\n###2. Predict PTB of the ID %s using a random forest based PTB predictor and the best spectrum.###\n",id);
    prob_ptb=predict_PTB_rf92(best_spectrum,1);
 }
 else {
	printf("\n###2. Predict PTB of the ID %s using a logistic regression based PTB predictor and the best spectrum.###\n",id);
    prob_ptb=predict_PTB_log_reg(best_spectrum,1);
 }
 printf( "\nprobability of PTB: %.4f\n", *(prob_ptb + 0));
 probPTB = *(prob_ptb + 0);
 if (probPTB >= cutoff)
 	printf("class: preterm (cut-off value=%.2f)\n",cutoff);
 else
 	printf("class: onterm (cut-off value=%.2f)\n",cutoff);
}
