/* logistic regression-based PTB predictor
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include "header.h"

float log_reg_predict(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a spectrum consisting of 28 features (14 amplitude features and 14 phase features)
	output: probability of preterm birth
	*/
	float y;
	y=0.8354542007996884+x16*x24*x24*x25*8.391175908935438E-7+x3*x9*x11*x25*3.509335190632902E-5+x3*x9*x16*x23*5.551820307770428E-5+x3*x8*x12*x22*3.083502252993534E-4+x13*x13*x24*x24*4.5146235426897225E-4+x16*x23*x25*x25*-7.029682081565142E-6+x7*x13*x13*x13*-0.0160455121600093+x3*x9*x11*x24*-1.3728657742555331E-5+x0*x13*x17*x18*-1.454034217768197E-5+x3*x9*x12*x27*-2.516018502606899E-4+x3*x9*x10*-5.593538437078526E-4+x8*x13*x22*x26*1.1082771156131275E-4+x8*x10*x19*x27*-1.0208013553648439E-4+x3*x8*x13*x24*-1.6358490453498493E-4+x9*x9*x17*x20*-2.265535512804747E-5+x3*x8*x9*x20*-1.331599415292721E-5;
	return 1.0/(1.0+exp(y));
}

float * predict_PTB_log_reg(float spectra[][28], int no_of_spectra)
{	/*Inputs: all spectra of an ID (a spectrum has 28 features (14 amplitude features and 14 phase features))
			  no. of spectra of the ID
  	  Outputs: probabilities of preterm birth of the spectra
	*/
	int i;
	static float prob_ptb [1];

	for(i=0;i<no_of_spectra;i++){
		prob_ptb[i]=log_reg_predict(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
	}
	return prob_ptb;
}

/*
int main()
{
   int no_of_spectra;
   int i,j;
   float * prob_ptb;
   char * spectra_of_id_csv;

   spectra_of_id_csv="./spectra/onterm_XC0856.csv";
   no_of_spectra = get_number_of_spectra(spectra_of_id_csv);
   printf("no. of spectra: %d\n",no_of_spectra);
   spectra[no_of_spectra][28];
   load_spectra_into_array(spectra,spectra_of_id_csv);
   for(i=0;i<no_of_spectra;i++)
   {   printf("%d\n",i);
       for(j=0;j<28;j++)
       {
        printf( "%.4f,", spectra[i][j]);
       }
       printf("\n");
   }

   prob_ptb=predict_PTB_log_reg(spectra,no_of_spectra);
   for( i = 0; i < no_of_spectra; i++ ) {
      printf( "%d : %f\n", i, *(prob_ptb + i));
   }

   return 0 ;
 }
*/
