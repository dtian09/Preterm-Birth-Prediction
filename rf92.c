Try AI directly in your favorite apps … Use Gemini to generate drafts and refine content, plus get Gemini Pro with access to Google's next-gen AI for £18.99 £9.49 for 2 months
/*random forest-based PTB predictor
  Written by David Tian
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include "header.h"
/*
float spectra[1][28];

float rf92_tree0(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree1(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree2(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree3(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree4(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree5(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree6(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree7(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree8(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree9(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree10(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree11(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree12(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree13(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree14(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree15(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree16(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree17(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree18(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);
float rf92_tree19(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27);

float * predict_PTB_rf92(float spectra[][28], int no_of_spectra);
*/

float rf92_tree0(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/* input: a spectrum consisting of 28 features (14 amplitude features and 14 phase features)
	   output: the label (0 or 1) of the spectrum */
	float label;

	if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80961.23 && x0*x14*x22*x24 >= -909988.15 && x10*x13*x22*x22 < 5480.98 && x2*x16*x22*x26 < -274371.09 && x2*x16*x22*x26 < -380455.27 && x10*x13*x22*x22 >= 2173.23)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80961.23 && x0*x14*x22*x24 >= -909988.15 && x10*x13*x22*x22 < 5480.98 && x2*x16*x22*x26 >= -274371.09)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80961.23 && x0*x14*x22*x24 >= -909988.15 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x22*x22 >= 6946.62 && x2*x14*x16*x16 < -3611.24 && x2*x16*x22*x26 < -1242340.22)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80961.23 && x0*x14*x22*x24 >= -909988.15 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x22*x22 >= 6946.62 && x2*x14*x16*x16 < -3611.24 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x13*x27 < -413.28 && x10*x13*x15*x27 >= 1986.21 && x2*x16*x22*x26 >= -674437.55 && x10*x13*x15*x27 < 2617.85)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80961.23 && x0*x14*x22*x24 >= -909988.15 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x22*x22 >= 6946.62 && x2*x14*x16*x16 < -3611.24 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x13*x27 >= -413.28 && x2*x13*x19*x21 < 107762.15 && x10*x13*x21*x21 < 8718.6 && x10*x13*x22*x22 < 7605.72)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80961.23 && x0*x14*x22*x24 >= -909988.15 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x22*x22 >= 6946.62 && x2*x14*x16*x16 < -3611.24 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x13*x27 >= -413.28 && x2*x13*x19*x21 < 107762.15 && x10*x13*x21*x21 >= 8718.6 && x10*x13*x15*x27 < 953.56)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80961.23 && x0*x14*x22*x24 >= -909988.15 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x22*x22 >= 6946.62 && x2*x14*x16*x16 < -3611.24 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x13*x27 >= -413.28 && x2*x13*x19*x21 < 107762.15 && x10*x13*x21*x21 >= 8718.6 && x10*x13*x15*x27 >= 953.56 && x10*x13*x15*x27 >= 1283.1 && x2*x13*x13*x23 >= -5823.88)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 >= 22459.51 && x2*x16*x16*x27 < -74454.26 && x2*x14*x16*x16 < -77031.01 && x10*x13*x22*x22 < 25124.36)
		label=1;
	else if (x2*x14*x19*x27 < -38214.22 && x0*x17*x18*x21 < -61596.29 && x6*x6*x7 >= 22459.51 && x2*x16*x16*x27 < -74454.26 && x2*x14*x16*x16 >= -77031.01)
		label=1;
	else if (x2*x14*x19*x27 >= -38214.22 && x2*x13*x13*x23 < -10583.85 && x10*x13*x13*x27 < -1186.88)
		label=1;
	else if (x2*x14*x19*x27 >= -38214.22 && x2*x13*x13*x23 >= -10583.85 && x0*x16*x16*x22 < -209.71 && x0*x14*x22*x24 < -79279.48 && x2*x16*x22*x26 < -203168.77)
		label=1;
	else if (x2*x14*x19*x27 >= -38214.22 && x2*x13*x13*x23 >= -10583.85 && x0*x16*x16*x22 < -209.71 && x0*x14*x22*x24 >= -79279.48 && x2*x13*x19*x21 < 2763.36 && x0*x12*x27*x27 >= 14138.59 && x2*x16*x22*x26 >= -14770.28 && x2*x13*x19*x21 >= 2036.41)
		label=1;
	else if (x2*x14*x19*x27 >= -38214.22 && x2*x13*x13*x23 >= -10583.85 && x0*x16*x16*x22 >= -209.71 && x2*x14*x16*x16 < -4.74 && x6*x6*x7 < 12.05 && x10*x13*x15*x27 < 10.24 && x5*x14*x15 < 2.34)
		label=1;
	else if (x2*x14*x19*x27 >= -38214.22 && x2*x13*x13*x23 >= -10583.85 && x0*x16*x16*x22 >= -209.71 && x2*x14*x16*x16 < -4.74 && x6*x6*x7 >= 12.05 && x2*x16*x22*x26 < -467.62)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree1(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading */
	float label;

	if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 < 24892.73 && x10*x13*x13*x27 >= -848.09 && x0*x16*x16*x22 < -30541.41 && x0*x14*x22*x24 < -110207.61 && x0*x14*x22*x24 < -124889.34 && x0*x14*x22*x24 < -159733.39 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x21*x21 < 15371.29 && x10*x13*x13*x27 < -282.59 && x10*x13*x15*x27 >= 1283.1 && x0*x17*x18*x21 < -364685.84)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 < 24892.73 && x10*x13*x13*x27 >= -848.09 && x0*x16*x16*x22 < -30541.41 && x0*x14*x22*x24 < -110207.61 && x0*x14*x22*x24 < -124889.34 && x0*x14*x22*x24 < -159733.39 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x21*x21 < 15371.29 && x10*x13*x13*x27 < -282.59 && x10*x13*x15*x27 >= 1283.1 && x0*x17*x18*x21 >= -364685.84 && x2*x16*x22*x26 >= -631709.3)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 < 24892.73 && x10*x13*x13*x27 >= -848.09 && x0*x16*x16*x22 < -30541.41 && x0*x14*x22*x24 < -110207.61 && x0*x14*x22*x24 < -124889.34 && x0*x14*x22*x24 < -159733.39 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x21*x21 < 15371.29 && x10*x13*x13*x27 >= -282.59 && x10*x13*x13*x27 >= -195.09 && x5*x14*x15 < 2569.8 && x10*x13*x21*x21 >= 8555.03)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 < 24892.73 && x10*x13*x13*x27 >= -848.09 && x0*x16*x16*x22 < -30541.41 && x0*x14*x22*x24 < -110207.61 && x0*x14*x22*x24 < -124889.34 && x0*x14*x22*x24 < -159733.39 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x21*x21 >= 15371.29 && x10*x13*x13*x27 >= -233.46)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 < 24892.73 && x10*x13*x13*x27 >= -848.09 && x0*x16*x16*x22 < -30541.41 && x0*x14*x22*x24 < -110207.61 && x0*x14*x22*x24 < -124889.34 && x0*x14*x22*x24 >= -159733.39)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 < 24892.73 && x10*x13*x13*x27 >= -848.09 && x0*x16*x16*x22 < -30541.41 && x0*x14*x22*x24 >= -110207.61 && x2*x16*x16*x27 < -23499.87 && x5*x14*x15 < 311.34 && x2*x16*x16*x27 < -31953.59)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 < 24892.73 && x10*x13*x13*x27 >= -848.09 && x0*x16*x16*x22 < -30541.41 && x0*x14*x22*x24 >= -110207.61 && x2*x16*x16*x27 < -23499.87 && x5*x14*x15 >= 311.34)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x6*x6*x7 >= 24892.73 && x2*x13*x20*x27 >= 118709.86)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x22*x22 < 28249.6 && x5*x14*x15 >= 1.42 && x2*x14*x16*x16 < -20.77 && x10*x13*x15*x27 >= 762.05 && x2*x16*x22*x26 >= -57040.23)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x22*x22 < 28249.6 && x5*x14*x15 >= 1.42 && x2*x14*x16*x16 >= -20.77 && x10*x13*x21*x21 >= 6.95 && x0*x12*x27*x27 < 3899.7 && x10*x13*x15*x27 < 59.08 && x10*x13*x21*x21 < 16.14)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x22*x22 < 28249.6 && x5*x14*x15 >= 1.42 && x2*x14*x16*x16 >= -20.77 && x10*x13*x21*x21 >= 6.95 && x0*x12*x27*x27 < 3899.7 && x10*x13*x15*x27 >= 59.08)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x22*x22 >= 28249.6 && x10*x13*x15*x27 >= 850.02)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 >= 30.45 && x0*x14*x22*x24 >= -4584.72 && x2*x16*x22*x26 < -13700.34)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree2(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading */
	float label;

	if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 < 483.29 && x2*x16*x16*x27 < -103293.4 && x2*x16*x16*x27 < -153230.52 && x0*x12*x27*x27 < 59579.6)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 < 483.29 && x2*x16*x16*x27 >= -103293.4)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 < 22459.51 && x2*x13*x13*x23 < -5065.98 && x2*x16*x16*x27 < -116829.56 && x0*x14*x22*x24 >= -909988.15 && x0*x17*x18*x21 < -2898091.35)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 < 22459.51 && x2*x13*x13*x23 < -5065.98 && x2*x16*x16*x27 < -116829.56 && x0*x14*x22*x24 >= -909988.15 && x0*x17*x18*x21 >= -2898091.35 && x2*x13*x13*x23 >= -6846.95 && x0*x14*x22*x24 >= -794111.59 && x10*x13*x15*x27 >= 2200.65)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 < 22459.51 && x2*x13*x13*x23 >= -5065.98 && x10*x13*x13*x27 < -462.5 && x10*x13*x22*x22 < 10212.73)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 < 22459.51 && x2*x13*x13*x23 >= -5065.98 && x10*x13*x13*x27 >= -462.5 && x10*x13*x22*x22 < 11336.92 && x10*x13*x21*x21 < 8728.31 && x0*x14*x22*x24 >= -107120.86 && x10*x13*x21*x21 >= 5408.44)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 < 22459.51 && x2*x13*x13*x23 >= -5065.98 && x10*x13*x13*x27 >= -462.5 && x10*x13*x22*x22 < 11336.92 && x10*x13*x21*x21 >= 8728.31 && x2*x16*x22*x26 >= -595052.27)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 < 22459.51 && x2*x13*x13*x23 >= -5065.98 && x10*x13*x13*x27 >= -462.5 && x10*x13*x22*x22 >= 11336.92 && x10*x13*x15*x27 < 1283.5 && x5*x14*x15 < 512.47 && x10*x13*x22*x22 < 15141.53)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 < 22459.51 && x2*x13*x13*x23 >= -5065.98 && x10*x13*x13*x27 >= -462.5 && x10*x13*x22*x22 >= 11336.92 && x10*x13*x15*x27 >= 1283.5)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 >= 22459.51 && x2*x16*x16*x27 < -74454.26 && x10*x13*x13*x27 < -402.33)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x0*x17*x18*x21 < -59989.76 && x6*x6*x7 >= 483.29 && x6*x6*x7 >= 22459.51 && x2*x16*x16*x27 < -74454.26 && x10*x13*x13*x27 >= -402.33 && x10*x13*x22*x22 < 25124.36)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 < 28249.6 && x2*x13*x19*x21 < 2763.36 && x2*x13*x20*x27 < 5338.89 && x5*x14*x15 < 5.36 && x2*x14*x19*x27 < 38.28 && x2*x16*x16*x27 < -191.56 && x10*x13*x22*x22 >= 78.99 && x10*x13*x15*x27 >= 70.18)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 < 28249.6 && x2*x13*x19*x21 < 2763.36 && x2*x13*x20*x27 < 5338.89 && x5*x14*x15 < 5.36 && x2*x14*x19*x27 < 38.28 && x2*x16*x16*x27 >= -191.56 && x10*x13*x22*x22 < 7.4 && x10*x13*x21*x21 >= 6.67)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 < 28249.6 && x2*x13*x19*x21 < 2763.36 && x2*x13*x20*x27 >= 5338.89 && x0*x12*x27*x27 < 27189.2)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 >= 28249.6 && x2*x14*x19*x27 < 28184.29)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree3(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading */
	float label;

	if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 < -161668.76 && x10*x13*x22*x22 < 26525.31 && x0*x14*x22*x24 < -206536.75 && x10*x13*x22*x22 < 15698.48 && x2*x13*x19*x21 < 229212.62 && x0*x12*x27*x27 >= 15134.96 && x6*x6*x7 < 5141.03 && x2*x16*x16*x27 < -98507.13 && x0*x14*x22*x24 >= -784497.36 && x0*x12*x27*x27 < 151278.06 && x10*x13*x13*x27 < -177.52)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 < -161668.76 && x10*x13*x22*x22 < 26525.31 && x0*x14*x22*x24 < -206536.75 && x10*x13*x22*x22 < 15698.48 && x2*x13*x19*x21 < 229212.62 && x0*x12*x27*x27 >= 15134.96 && x6*x6*x7 < 5141.03 && x2*x16*x16*x27 < -98507.13 && x0*x14*x22*x24 >= -784497.36 && x0*x12*x27*x27 < 151278.06 && x10*x13*x13*x27 >= -177.52 && x0*x12*x27*x27 < 27262.69)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 < -161668.76 && x10*x13*x22*x22 < 26525.31 && x0*x14*x22*x24 < -206536.75 && x10*x13*x22*x22 < 15698.48 && x2*x13*x19*x21 < 229212.62 && x0*x12*x27*x27 >= 15134.96 && x6*x6*x7 >= 5141.03)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 < -161668.76 && x10*x13*x22*x22 < 26525.31 && x0*x14*x22*x24 < -206536.75 && x10*x13*x22*x22 >= 15698.48 && x2*x16*x16*x27 < -117207.36 && x6*x6*x7 >= 8044.51 && x2*x13*x19*x21 < 104384.17)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 < -161668.76 && x10*x13*x22*x22 < 26525.31 && x0*x14*x22*x24 < -206536.75 && x10*x13*x22*x22 >= 15698.48 && x2*x16*x16*x27 < -117207.36 && x6*x6*x7 >= 8044.51 && x2*x13*x19*x21 >= 104384.17 && x10*x13*x21*x21 >= 20983.72)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 >= -161668.76 && x10*x13*x13*x27 < -465.18 && x10*x13*x15*x27 >= 1957.25 && x10*x13*x22*x22 >= 8783.45)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 >= -161668.76 && x10*x13*x13*x27 >= -465.18 && x6*x6*x7 < 474.3)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 >= -161668.76 && x10*x13*x13*x27 >= -465.18 && x6*x6*x7 >= 474.3 && x2*x13*x13*x23 < -2546.74)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -848.09 && x0*x14*x22*x24 >= -161668.76 && x10*x13*x13*x27 >= -465.18 && x6*x6*x7 >= 474.3 && x2*x13*x13*x23 >= -2546.74 && x2*x14*x19*x27 >= -42372.94)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 156.01 && x0*x14*x22*x24 >= -21303.89)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 >= 24892.73 && x2*x13*x20*x27 >= 118709.86 && x2*x16*x16*x27 < -59560.41)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x14*x16*x16 >= -161.45 && x0*x17*x18*x21 < -600.67 && x5*x14*x15 >= 29.45 && x10*x13*x15*x27 >= 148.97)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x14*x16*x16 >= -161.45 && x0*x17*x18*x21 >= -600.67 && x0*x14*x22*x24 < -6.15 && x10*x13*x22*x22 < 7.4)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x14*x16*x16 >= -161.45 && x0*x17*x18*x21 >= -600.67 && x0*x14*x22*x24 < -6.15 && x10*x13*x22*x22 >= 7.4 && x2*x16*x16*x27 < -172.13 && x10*x13*x13*x27 >= -216.29 && x6*x6*x7 >= 10.17)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree4(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 < 40063.73 && x2*x13*x20*x27 < 203682.46 && x0*x17*x18*x21 < -300230.79 && x2*x16*x22*x26 < -1207554.96 && x2*x14*x16*x16 < -62519.08 && x2*x14*x19*x27 < -503666.18 && x0*x12*x27*x27 < 150217.45)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 < 40063.73 && x2*x13*x20*x27 < 203682.46 && x0*x17*x18*x21 < -300230.79 && x2*x16*x22*x26 < -1207554.96 && x2*x14*x16*x16 >= -62519.08)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 < 40063.73 && x2*x13*x20*x27 < 203682.46 && x0*x17*x18*x21 < -300230.79 && x2*x16*x22*x26 >= -1207554.96 && x0*x14*x22*x24 < -438128.08 && x0*x14*x22*x24 < -712063.05 && x2*x16*x22*x26 >= -1058217.14)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 < 40063.73 && x2*x13*x20*x27 < 203682.46 && x0*x17*x18*x21 < -300230.79 && x2*x16*x22*x26 >= -1207554.96 && x0*x14*x22*x24 >= -438128.08 && x6*x6*x7 < 9193.51 && x0*x17*x18*x21 < -378469.21 && x0*x14*x22*x24 < -90765.12 && x10*x13*x15*x27 < 1564.77 && x2*x13*x19*x21 < 107613.58 && x10*x13*x13*x27 >= -197.55 && x2*x14*x16*x16 < -27686.2 && x0*x17*x18*x21 < -1572511.01)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 < 40063.73 && x2*x13*x20*x27 < 203682.46 && x0*x17*x18*x21 < -300230.79 && x2*x16*x22*x26 >= -1207554.96 && x0*x14*x22*x24 >= -438128.08 && x6*x6*x7 < 9193.51 && x0*x17*x18*x21 < -378469.21 && x0*x14*x22*x24 < -90765.12 && x10*x13*x15*x27 < 1564.77 && x2*x13*x19*x21 < 107613.58 && x10*x13*x13*x27 >= -197.55 && x2*x14*x16*x16 >= -27686.2)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 < 40063.73 && x2*x13*x20*x27 < 203682.46 && x0*x17*x18*x21 < -300230.79 && x2*x16*x22*x26 >= -1207554.96 && x0*x14*x22*x24 >= -438128.08 && x6*x6*x7 < 9193.51 && x0*x17*x18*x21 < -378469.21 && x0*x14*x22*x24 < -90765.12 && x10*x13*x15*x27 >= 1564.77)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 < 40063.73 && x2*x13*x20*x27 < 203682.46 && x0*x17*x18*x21 >= -300230.79)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 < -268156.26 && x10*x13*x22*x22 >= 40063.73)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x13*x27 < -433.66 && x10*x13*x21*x21 < 22048.2 && x2*x13*x20*x27 < 33282.77 && x10*x13*x21*x21 >= 7371.1)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x13*x27 < -433.66 && x10*x13*x21*x21 >= 22048.2)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x13*x27 >= -433.66 && x5*x14*x15 < 294.95 && x0*x16*x16*x22 >= -40449.21 && x2*x16*x22*x26 < -196051.52)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x13*x27 >= -433.66 && x5*x14*x15 >= 294.95 && x2*x16*x16*x27 < -45775.72 && x0*x17*x18*x21 >= -234610.83 && x2*x16*x16*x27 < -53719.02)
		label=1;
	else if (x0*x17*x18*x21 < -70742.37 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x13*x27 >= -433.66 && x5*x14*x15 >= 294.95 && x2*x16*x16*x27 >= -45775.72)
		label=1;
	else if (x0*x17*x18*x21 >= -70742.37 && x10*x13*x21*x21 < 1944.19 && x10*x13*x22*x22 < 2561.05 && x0*x17*x18*x21 < -109.52 && x2*x13*x20*x27 < 5367.56 && x5*x14*x15 < 1.85 && x5*x14*x15 >= 1.42)
		label=1;
	else if (x0*x17*x18*x21 >= -70742.37 && x10*x13*x21*x21 < 1944.19 && x10*x13*x22*x22 < 2561.05 && x0*x17*x18*x21 < -109.52 && x2*x13*x20*x27 >= 5367.56 && x10*x13*x22*x22 < 1303.96)
		label=1;
	else if (x0*x17*x18*x21 >= -70742.37 && x10*x13*x21*x21 < 1944.19 && x10*x13*x22*x22 < 2561.05 && x0*x17*x18*x21 >= -109.52 && x2*x13*x19*x21 < 62.22 && x2*x13*x19*x21 < 18.01 && x2*x13*x19*x21 >= 8.46)
		label=1;
	else if (x0*x17*x18*x21 >= -70742.37 && x10*x13*x21*x21 < 1944.19 && x10*x13*x22*x22 < 2561.05 && x0*x17*x18*x21 >= -109.52 && x2*x13*x19*x21 >= 62.22)
		label=1;
	else if (x0*x17*x18*x21 >= -70742.37 && x10*x13*x21*x21 < 1944.19 && x10*x13*x22*x22 >= 2561.05)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree5(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 < -916958.54 && x6*x6*x7 >= 22332.81 && x0*x12*x27*x27 < 152422.14)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 < -96751.12 && x0*x16*x16*x22 < -1072784.75 && x2*x16*x16*x27 < -676462.72)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 < -96751.12 && x0*x16*x16*x22 >= -1072784.75)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 >= -96751.12 && x2*x14*x19*x27 >= -322593.92 && x10*x13*x22*x22 >= 4262.28 && x0*x17*x18*x21 < -1179686 && x10*x13*x21*x21 >= 26474.36)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 >= -96751.12 && x2*x14*x19*x27 >= -322593.92 && x10*x13*x22*x22 >= 4262.28 && x0*x17*x18*x21 >= -1179686 && x0*x17*x18*x21 < -876471.26)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 >= -96751.12 && x2*x14*x19*x27 >= -322593.92 && x10*x13*x22*x22 >= 4262.28 && x0*x17*x18*x21 >= -1179686 && x0*x17*x18*x21 >= -876471.26 && x2*x16*x22*x26 < -249963.15 && x10*x13*x13*x27 < -246.54 && x6*x6*x7 < 10045.96 && x2*x16*x22*x26 < -440482.64 && x2*x13*x20*x27 >= 88089.91)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 >= -96751.12 && x2*x14*x19*x27 >= -322593.92 && x10*x13*x22*x22 >= 4262.28 && x0*x17*x18*x21 >= -1179686 && x0*x17*x18*x21 >= -876471.26 && x2*x16*x22*x26 < -249963.15 && x10*x13*x13*x27 < -246.54 && x6*x6*x7 < 10045.96 && x2*x16*x22*x26 >= -440482.64 && x0*x17*x18*x21 >= -419013.28)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 >= -96751.12 && x2*x14*x19*x27 >= -322593.92 && x10*x13*x22*x22 >= 4262.28 && x0*x17*x18*x21 >= -1179686 && x0*x17*x18*x21 >= -876471.26 && x2*x16*x22*x26 < -249963.15 && x10*x13*x13*x27 < -246.54 && x6*x6*x7 >= 10045.96 && x10*x13*x13*x27 >= -798.8)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 < 252057.25 && x0*x14*x22*x24 >= -916958.54 && x6*x6*x7 >= 60.34 && x2*x14*x16*x16 >= -96751.12 && x2*x14*x19*x27 >= -322593.92 && x10*x13*x22*x22 >= 4262.28 && x0*x17*x18*x21 >= -1179686 && x0*x17*x18*x21 >= -876471.26 && x2*x16*x22*x26 >= -249963.15)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 < -268156.26 && x0*x12*x27*x27 >= 252057.25)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x15*x27 < 1327.91 && x2*x16*x22*x26 >= -406306.83 && x6*x6*x7 >= 238.18 && x2*x14*x16*x16 < -4724.9 && x10*x13*x15*x27 >= 894.52)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x15*x27 < 1327.91 && x2*x16*x22*x26 >= -406306.83 && x6*x6*x7 >= 238.18 && x2*x14*x16*x16 >= -4724.9 && x10*x13*x13*x27 < -426.85)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x17*x18*x21 >= -268156.26 && x10*x13*x15*x27 >= 1327.91 && x2*x13*x20*x27 < 33282.77 && x0*x16*x16*x22 >= -36626.66)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x2*x16*x22*x26 >= -14517.06 && x10*x13*x21*x21 < 10.27 && x0*x17*x18*x21 < -24.46)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x2*x16*x22*x26 >= -14517.06 && x10*x13*x21*x21 >= 10.27 && x2*x13*x20*x27 < 5315.73 && x0*x14*x22*x24 >= -102.69 && x0*x14*x22*x24 < -92.55)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x2*x16*x22*x26 >= -14517.06 && x10*x13*x21*x21 >= 10.27 && x2*x13*x20*x27 >= 5315.73 && x0*x12*x27*x27 < 37894.07 && x10*x13*x21*x21 < 2008.95)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree6(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 < -460198.05 && x10*x13*x13*x27 < -166.48 && x2*x16*x16*x27 < -397377.71)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 < -460198.05 && x10*x13*x13*x27 < -166.48 && x2*x16*x16*x27 >= -397377.71 && x2*x16*x16*x27 >= -343937.16)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -460198.05 && x2*x16*x16*x27 < -43085.21 && x2*x13*x19*x21 >= 31792.67 && x0*x17*x18*x21 < -226759.97 && x2*x14*x19*x27 >= -158748.43 && x10*x13*x15*x27 < 1308.28 && x0*x12*x27*x27 < 58903.08 && x0*x14*x22*x24 < -166989.03 && x0*x12*x27*x27 >= 57303.93)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -460198.05 && x2*x16*x16*x27 < -43085.21 && x2*x13*x19*x21 >= 31792.67 && x0*x17*x18*x21 < -226759.97 && x2*x14*x19*x27 >= -158748.43 && x10*x13*x15*x27 < 1308.28 && x0*x12*x27*x27 < 58903.08 && x0*x14*x22*x24 >= -166989.03)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -460198.05 && x2*x16*x16*x27 < -43085.21 && x2*x13*x19*x21 >= 31792.67 && x0*x17*x18*x21 < -226759.97 && x2*x14*x19*x27 >= -158748.43 && x10*x13*x15*x27 >= 1308.28 && x0*x14*x22*x24 >= -457494.12 && x10*x13*x21*x21 < 13376.24)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -460198.05 && x2*x16*x16*x27 < -43085.21 && x2*x13*x19*x21 >= 31792.67 && x0*x17*x18*x21 < -226759.97 && x2*x14*x19*x27 >= -158748.43 && x10*x13*x15*x27 >= 1308.28 && x0*x14*x22*x24 >= -457494.12 && x10*x13*x21*x21 >= 13376.24 && x2*x16*x16*x27 < -84772.58 && x10*x13*x15*x27 >= 1554.47 && x0*x14*x22*x24 >= -297471.04)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -460198.05 && x2*x16*x16*x27 >= -43085.21 && x0*x16*x16*x22 < -30541.41 && x10*x13*x15*x27 >= 684.46 && x2*x14*x19*x27 < -37231.92)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 < 35449.27 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -460198.05 && x2*x16*x16*x27 >= -43085.21 && x0*x16*x16*x22 < -30541.41 && x10*x13*x15*x27 >= 684.46 && x2*x14*x19*x27 >= -37231.92 && x10*x13*x22*x22 >= 10902.66)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 < -143.01 && x10*x13*x22*x22 >= 35449.27)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 >= -143.01 && x0*x12*x27*x27 >= 11282.64 && x10*x13*x13*x27 < -80.87 && x2*x16*x22*x26 < -595052.27 && x10*x13*x15*x27 < 788.23)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x13*x27 >= -143.01 && x0*x12*x27*x27 >= 11282.64 && x10*x13*x13*x27 < -80.87 && x2*x16*x22*x26 >= -595052.27)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x13*x27 < -1216.25 && x2*x16*x22*x26 < -203241.06)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x13*x27 >= -1216.25 && x2*x16*x22*x26 >= -13908.57 && x5*x14*x15 >= 1.42 && x5*x14*x15 < 2.07)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x13*x27 >= -1216.25 && x2*x16*x22*x26 >= -13908.57 && x5*x14*x15 >= 1.42 && x5*x14*x15 >= 2.07 && x2*x14*x19*x27 < -3394.63)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 < 30.45 && x10*x13*x13*x27 >= -1216.25 && x2*x16*x22*x26 >= -13908.57 && x5*x14*x15 >= 1.42 && x5*x14*x15 >= 2.07 && x2*x14*x19*x27 >= -3394.63 && x0*x16*x16*x22 >= -105.34 && x10*x13*x22*x22 >= 78.99)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x5*x14*x15 >= 30.45 && x2*x14*x16*x16 < -3985.43 && x5*x14*x15 < 172.53)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree7(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x2*x13*x19*x21 < 24965.57 && x2*x14*x16*x16 < -3985.43 && x10*x13*x15*x27 < 1488.56 && x0*x17*x18*x21 < -15636.02 && x10*x13*x21*x21 < 6144.06 && x10*x13*x15*x27 >= 894.52 && x0*x12*x27*x27 < 30147.8 && x10*x13*x22*x22 >= 450.52 && x2*x16*x22*x26 < -81154.51)
		label=1;
	else if (x2*x13*x19*x21 < 24965.57 && x2*x14*x16*x16 < -3985.43 && x10*x13*x15*x27 < 1488.56 && x0*x17*x18*x21 < -15636.02 && x10*x13*x21*x21 < 6144.06 && x10*x13*x15*x27 >= 894.52 && x0*x12*x27*x27 < 30147.8 && x10*x13*x22*x22 >= 450.52 && x2*x16*x22*x26 >= -81154.51 && x0*x12*x27*x27 < 17273.81)
		label=1;
	else if (x2*x13*x19*x21 < 24965.57 && x2*x14*x16*x16 >= -3985.43 && x0*x16*x16*x22 < -1780.61 && x2*x16*x16*x27 < -36730.31 && x2*x16*x16*x27 >= -40740.48)
		label=1;
	else if (x2*x13*x19*x21 < 24965.57 && x2*x14*x16*x16 >= -3985.43 && x0*x16*x16*x22 >= -1780.61 && x5*x14*x15 < 30.45 && x5*x14*x15 >= 1.42 && x5*x14*x15 < 2.07)
		label=1;
	else if (x2*x13*x19*x21 < 24965.57 && x2*x14*x16*x16 >= -3985.43 && x0*x16*x16*x22 >= -1780.61 && x5*x14*x15 < 30.45 && x5*x14*x15 >= 1.42 && x5*x14*x15 >= 2.07 && x2*x14*x19*x27 < -3394.63)
		label=1;
	else if (x2*x13*x19*x21 < 24965.57 && x2*x14*x16*x16 >= -3985.43 && x0*x16*x16*x22 >= -1780.61 && x5*x14*x15 < 30.45 && x5*x14*x15 >= 1.42 && x5*x14*x15 >= 2.07 && x2*x14*x19*x27 >= -3394.63 && x10*x13*x21*x21 < 70.85 && x2*x14*x16*x16 < -15.91 && x10*x13*x22*x22 >= 66.92)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 < 22459.51 && x6*x6*x7 < 13617.71 && x10*x13*x13*x27 < -448.97 && x10*x13*x13*x27 < -684.21 && x2*x13*x19*x21 < 68699.23 && x10*x13*x15*x27 >= 6403.1)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 < 22459.51 && x6*x6*x7 < 13617.71 && x10*x13*x13*x27 < -448.97 && x10*x13*x13*x27 < -684.21 && x2*x13*x19*x21 >= 68699.23 && x2*x16*x22*x26 >= -914438.37)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 < 22459.51 && x6*x6*x7 < 13617.71 && x10*x13*x13*x27 >= -448.97 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 < -299156.43 && x10*x13*x15*x27 >= 556.29 && x6*x6*x7 >= 59.92 && x10*x13*x15*x27 < 2158.35 && x0*x14*x22*x24 < -305526.3 && x6*x6*x7 >= 7275.03)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 < 22459.51 && x6*x6*x7 < 13617.71 && x10*x13*x13*x27 >= -448.97 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 < -299156.43 && x10*x13*x15*x27 >= 556.29 && x6*x6*x7 >= 59.92 && x10*x13*x15*x27 < 2158.35 && x0*x14*x22*x24 >= -305526.3)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 < 22459.51 && x6*x6*x7 < 13617.71 && x10*x13*x13*x27 >= -448.97 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 < -299156.43 && x10*x13*x15*x27 >= 556.29 && x6*x6*x7 >= 59.92 && x10*x13*x15*x27 >= 2158.35)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 < 22459.51 && x6*x6*x7 < 13617.71 && x10*x13*x13*x27 >= -448.97 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -299156.43 && x2*x14*x19*x27 < -67905.12 && x0*x17*x18*x21 >= -419013.28 && x2*x16*x16*x27 < -75706.51 && x10*x13*x22*x22 < 15842.79 && x2*x13*x19*x21 >= 31792.67)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 < 22459.51 && x6*x6*x7 < 13617.71 && x10*x13*x13*x27 >= -448.97 && x0*x14*x22*x24 >= -909988.15 && x0*x16*x16*x22 >= -299156.43 && x2*x14*x19*x27 >= -67905.12 && x10*x13*x22*x22 < 15147.69 && x2*x16*x22*x26 < -208647.66 && x2*x14*x19*x27 < -23736.11)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 >= 22459.51 && x2*x16*x22*x26 < -683960.56 && x2*x14*x16*x16 < -77031.01 && x2*x16*x22*x26 < -3401063.57)
		label=1;
	else if (x2*x13*x19*x21 >= 24965.57 && x6*x6*x7 >= 22459.51 && x2*x16*x22*x26 < -683960.56 && x2*x14*x16*x16 >= -77031.01)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree8(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 < 423.92 && x10*x13*x21*x21 < 17863.77 && x10*x13*x15*x27 < 1489.68 && x2*x13*x19*x21 < 41596.15 && x2*x16*x16*x27 < -51716.14)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 < 423.92 && x10*x13*x21*x21 < 17863.77 && x10*x13*x15*x27 < 1489.68 && x2*x13*x19*x21 < 41596.15 && x2*x16*x16*x27 >= -51716.14 && x2*x16*x22*x26 < -33414.54 && x10*x13*x15*x27 < 1050.12 && x10*x13*x21*x21 >= 5496.31 && x10*x13*x21*x21 < 9071.74)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 < 423.92 && x10*x13*x21*x21 < 17863.77 && x10*x13*x15*x27 < 1489.68 && x2*x13*x19*x21 < 41596.15 && x2*x16*x16*x27 >= -51716.14 && x2*x16*x22*x26 >= -33414.54)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 < 423.92 && x10*x13*x21*x21 < 17863.77 && x10*x13*x15*x27 >= 1489.68 && x2*x13*x20*x27 < 33364.83 && x0*x12*x27*x27 >= 76611.54 && x6*x6*x7 < 2688.16)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 < 423.92 && x10*x13*x21*x21 >= 17863.77 && x2*x14*x16*x16 < 583.65 && x2*x16*x16*x27 < -74454.26)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 < 423.92 && x10*x13*x21*x21 >= 17863.77 && x2*x14*x16*x16 < 583.65 && x2*x16*x16*x27 >= -74454.26 && x2*x14*x19*x27 >= -32950.18)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 < -159733.39 && x0*x14*x22*x24 < -206536.75 && x6*x6*x7 < 26573.54 && x10*x13*x22*x22 < 26525.31 && x2*x16*x16*x27 < -75706.51 && x0*x12*x27*x27 < 191909.83 && x0*x14*x22*x24 < -319551.11 && x2*x16*x16*x27 < -107633.78 && x10*x13*x15*x27 < 788.23)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 < -159733.39 && x0*x14*x22*x24 < -206536.75 && x6*x6*x7 < 26573.54 && x10*x13*x22*x22 < 26525.31 && x2*x16*x16*x27 < -75706.51 && x0*x12*x27*x27 < 191909.83 && x0*x14*x22*x24 < -319551.11 && x2*x16*x16*x27 < -107633.78 && x10*x13*x15*x27 >= 788.23 && x2*x16*x16*x27 < -270044.65 && x10*x13*x13*x27 < -211.69 && x0*x14*x22*x24 >= -916958.54 && x10*x13*x13*x27 < -279.06)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 < -159733.39 && x0*x14*x22*x24 < -206536.75 && x6*x6*x7 < 26573.54 && x10*x13*x22*x22 < 26525.31 && x2*x16*x16*x27 < -75706.51 && x0*x12*x27*x27 < 191909.83 && x0*x14*x22*x24 < -319551.11 && x2*x16*x16*x27 < -107633.78 && x10*x13*x15*x27 >= 788.23 && x2*x16*x16*x27 < -270044.65 && x10*x13*x13*x27 < -211.69 && x0*x14*x22*x24 >= -916958.54 && x10*x13*x13*x27 >= -279.06 && x2*x13*x13*x23 < -8644.06)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 < -159733.39 && x0*x14*x22*x24 < -206536.75 && x6*x6*x7 < 26573.54 && x10*x13*x22*x22 < 26525.31 && x2*x16*x16*x27 < -75706.51 && x0*x12*x27*x27 < 191909.83 && x0*x14*x22*x24 < -319551.11 && x2*x16*x16*x27 >= -107633.78 && x10*x13*x22*x22 >= 13985.28)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 < -159733.39 && x0*x14*x22*x24 < -206536.75 && x6*x6*x7 < 26573.54 && x10*x13*x22*x22 < 26525.31 && x2*x16*x16*x27 < -75706.51 && x0*x12*x27*x27 < 191909.83 && x0*x14*x22*x24 >= -319551.11)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 < -159733.39 && x0*x14*x22*x24 < -206536.75 && x6*x6*x7 >= 26573.54)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 >= -159733.39 && x0*x14*x22*x24 < -79878.97 && x6*x6*x7 < 474.3)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x12*x27*x27 >= 11403.33 && x5*x14*x15 >= 423.92 && x0*x14*x22*x24 >= -159733.39 && x0*x14*x22*x24 < -79878.97 && x6*x6*x7 >= 474.3 && x2*x16*x22*x26 < -192480.48)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x16*x27 >= -3127.37 && x10*x13*x21*x21 < 65.75 && x0*x17*x18*x21 < -30.2 && x10*x13*x22*x22 < 10.46)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x16*x27 >= -3127.37 && x10*x13*x21*x21 < 65.75 && x0*x17*x18*x21 < -30.2 && x10*x13*x22*x22 >= 10.46 && x10*x13*x21*x21 >= 59.03)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x16*x27 >= -3127.37 && x10*x13*x21*x21 >= 65.75 && x10*x13*x15*x27 < 768.73 && x2*x14*x19*x27 >= -187.03 && x2*x14*x19*x27 < -148.57)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x16*x27 >= -3127.37 && x10*x13*x21*x21 >= 65.75 && x10*x13*x15*x27 >= 768.73 && x2*x16*x22*x26 < -11042.41)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree9(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x2*x13*x19*x21 < 18847.03 && x0*x12*x27*x27 < 25040.05 && x2*x16*x16*x27 < -23698.6 && x2*x14*x16*x16 < -3982.79 && x0*x12*x27*x27 >= 13326.83 && x10*x13*x15*x27 >= 867.15)
		label=1;
	else if (x2*x13*x19*x21 < 18847.03 && x0*x12*x27*x27 < 25040.05 && x2*x16*x16*x27 >= -23698.6 && x2*x14*x16*x16 >= -161.45 && x5*x14*x15 >= 1.42 && x2*x13*x19*x21 < 85.71 && x0*x12*x27*x27 >= 8.11 && x10*x13*x15*x27 < 82.29 && x0*x12*x27*x27 < 23.91)
		label=1;
	else if (x2*x13*x19*x21 < 18847.03 && x0*x12*x27*x27 < 25040.05 && x2*x16*x16*x27 >= -23698.6 && x2*x14*x16*x16 >= -161.45 && x5*x14*x15 >= 1.42 && x2*x13*x19*x21 < 85.71 && x0*x12*x27*x27 >= 8.11 && x10*x13*x15*x27 < 82.29 && x0*x12*x27*x27 >= 23.91 && x10*x13*x21*x21 >= 48.03)
		label=1;
	else if (x2*x13*x19*x21 < 18847.03 && x0*x12*x27*x27 < 25040.05 && x2*x16*x16*x27 >= -23698.6 && x2*x14*x16*x16 >= -161.45 && x5*x14*x15 >= 1.42 && x2*x13*x19*x21 >= 85.71 && x10*x13*x13*x27 < -564.73)
		label=1;
	else if (x2*x13*x19*x21 < 18847.03 && x0*x12*x27*x27 < 25040.05 && x2*x16*x16*x27 >= -23698.6 && x2*x14*x16*x16 >= -161.45 && x5*x14*x15 >= 1.42 && x2*x13*x19*x21 >= 85.71 && x10*x13*x13*x27 >= -564.73 && x0*x16*x16*x22 >= -209.71 && x10*x13*x21*x21 >= 244.45 && x2*x16*x16*x27 < -285.87)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 < 312.28 && x2*x16*x22*x26 < -220906.7 && x2*x16*x22*x26 < -947516.73)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 < 312.28 && x2*x16*x22*x26 < -220906.7 && x2*x16*x22*x26 >= -947516.73 && x0*x16*x16*x22 < -44992.71 && x10*x13*x13*x27 >= -250.67)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 < 312.28 && x2*x16*x22*x26 < -220906.7 && x2*x16*x22*x26 >= -947516.73 && x0*x16*x16*x22 >= -44992.71)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 >= 312.28 && x2*x13*x13*x23 < -5065.98 && x2*x13*x20*x27 >= 81454.53 && x10*x13*x22*x22 < 26525.31 && x10*x13*x15*x27 < 1077.63)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 >= 312.28 && x2*x13*x13*x23 < -5065.98 && x2*x13*x20*x27 >= 81454.53 && x10*x13*x22*x22 < 26525.31 && x10*x13*x15*x27 >= 1077.63 && x0*x14*x22*x24 >= -794111.59 && x10*x13*x21*x21 < 13760.01)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 >= 312.28 && x2*x13*x13*x23 < -5065.98 && x2*x13*x20*x27 >= 81454.53 && x10*x13*x22*x22 < 26525.31 && x10*x13*x15*x27 >= 1077.63 && x0*x14*x22*x24 >= -794111.59 && x10*x13*x21*x21 >= 13760.01 && x2*x13*x13*x23 >= -6846.95)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 >= 312.28 && x2*x13*x13*x23 >= -5065.98 && x2*x13*x20*x27 < 109030.18 && x2*x16*x16*x27 < -45775.72 && x0*x16*x16*x22 < -84543.9 && x2*x14*x16*x16 < -17099.51 && x0*x17*x18*x21 < -378469.21 && x10*x13*x15*x27 < 1638.72 && x10*x13*x15*x27 < 1119.19 && x10*x13*x13*x27 < -80.87)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 >= 312.28 && x2*x13*x13*x23 >= -5065.98 && x2*x13*x20*x27 < 109030.18 && x2*x16*x16*x27 < -45775.72 && x0*x16*x16*x22 < -84543.9 && x2*x14*x16*x16 < -17099.51 && x0*x17*x18*x21 < -378469.21 && x10*x13*x15*x27 >= 1638.72)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 >= 312.28 && x2*x13*x13*x23 >= -5065.98 && x2*x13*x20*x27 < 109030.18 && x2*x16*x16*x27 < -45775.72 && x0*x16*x16*x22 < -84543.9 && x2*x14*x16*x16 >= -17099.51 && x10*x13*x22*x22 >= 14760.96 && x2*x14*x19*x27 >= -145074.79)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 < 252057.25 && x5*x14*x15 >= 312.28 && x2*x13*x13*x23 >= -5065.98 && x2*x13*x20*x27 < 109030.18 && x2*x16*x16*x27 >= -45775.72)
		label=1;
	else if (x2*x13*x19*x21 >= 18847.03 && x0*x12*x27*x27 >= 252057.25 && x10*x13*x22*x22 >= 25358.26)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree10(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 < -299156.43 && x0*x14*x22*x24 < -821689.32 && x2*x13*x19*x21 >= 404700.64 && x2*x16*x22*x26 >= -4616043.22)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 < -299156.43 && x0*x14*x22*x24 >= -821689.32 && x2*x16*x22*x26 < -1259702.06)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 < -299156.43 && x0*x14*x22*x24 >= -821689.32 && x2*x16*x22*x26 >= -1259702.06 && x10*x13*x21*x21 < 14763.69 && x0*x17*x18*x21 < -2483096.19 && x2*x16*x22*x26 >= -577126.3)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 < -299156.43 && x0*x14*x22*x24 >= -821689.32 && x2*x16*x22*x26 >= -1259702.06 && x10*x13*x21*x21 < 14763.69 && x0*x17*x18*x21 >= -2483096.19 && x2*x13*x19*x21 < 70434.05 && x2*x14*x19*x27 < -208716.17)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 < -299156.43 && x0*x14*x22*x24 >= -821689.32 && x2*x16*x22*x26 >= -1259702.06 && x10*x13*x21*x21 < 14763.69 && x0*x17*x18*x21 >= -2483096.19 && x2*x13*x19*x21 >= 70434.05)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 >= -299156.43 && x0*x16*x16*x22 >= -227576.05 && x0*x12*x27*x27 < 20980.87)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 >= -299156.43 && x0*x16*x16*x22 >= -227576.05 && x0*x12*x27*x27 >= 20980.87 && x0*x14*x22*x24 < -226155.55 && x2*x14*x19*x27 >= -145074.79 && x2*x13*x20*x27 >= 56492.8 && x10*x13*x22*x22 < 20979.1)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 < -64588.86 && x0*x16*x16*x22 >= -299156.43 && x0*x16*x16*x22 >= -227576.05 && x0*x12*x27*x27 >= 20980.87 && x0*x14*x22*x24 < -226155.55 && x2*x14*x19*x27 >= -145074.79 && x2*x13*x20*x27 >= 56492.8 && x10*x13*x22*x22 >= 20979.1 && x0*x12*x27*x27 >= 227540.82)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 >= -64588.86 && x10*x13*x13*x27 < -686.63 && x0*x12*x27*x27 >= 352050.31)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 < -78992.83 && x2*x14*x19*x27 >= -64588.86 && x10*x13*x13*x27 >= -686.63)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 >= -78992.83 && x0*x12*x27*x27 < 25791.07 && x10*x13*x15*x27 >= 831.04)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 >= -78992.83 && x0*x12*x27*x27 >= 25791.07 && x2*x13*x20*x27 < 76933.79 && x0*x17*x18*x21 >= -115765.97 && x2*x16*x22*x26 < -178258 && x2*x16*x16*x27 >= -37727.87)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x0*x12*x27*x27 >= 11403.33 && x0*x16*x16*x22 >= -78992.83 && x0*x12*x27*x27 >= 25791.07 && x2*x13*x20*x27 >= 76933.79 && x5*x14*x15 < 230.77 && x10*x13*x22*x22 < 35601.43)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x6*x6*x7 < 87.92 && x2*x14*x16*x16 < -4.74 && x0*x14*x22*x24 < -132.16 && x10*x13*x15*x27 >= 1363.23)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x6*x6*x7 < 87.92 && x2*x14*x16*x16 < -4.74 && x0*x14*x22*x24 >= -132.16 && x0*x12*x27*x27 < 587.38 && x5*x14*x15 < 2.07)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x6*x6*x7 < 87.92 && x2*x14*x16*x16 < -4.74 && x0*x14*x22*x24 >= -132.16 && x0*x12*x27*x27 >= 587.38 && x2*x16*x22*x26 < -467.62)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x6*x6*x7 >= 87.92 && x0*x14*x22*x24 >= -5281.64 && x0*x12*x27*x27 >= 22295.22 && x2*x14*x19*x27 < -2931.64)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree11(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 < 535.89 && x2*x13*x20*x27 < 79455.16 && x10*x13*x15*x27 < 1489.68 && x10*x13*x22*x22 < 11336.92 && x10*x13*x21*x21 < 5654.21 && x10*x13*x13*x27 < -235.04)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 < 535.89 && x2*x13*x20*x27 < 79455.16 && x10*x13*x15*x27 < 1489.68 && x10*x13*x22*x22 >= 11336.92 && x10*x13*x21*x21 >= 7754.68 && x10*x13*x15*x27 < 955.27)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 < 535.89 && x2*x13*x20*x27 < 79455.16 && x10*x13*x15*x27 < 1489.68 && x10*x13*x22*x22 >= 11336.92 && x10*x13*x21*x21 >= 7754.68 && x10*x13*x15*x27 >= 955.27 && x10*x13*x13*x27 < -403.79 && x10*x13*x15*x27 < 1179.19 && x0*x14*x22*x24 >= -98538.68)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 < 535.89 && x2*x13*x20*x27 < 79455.16 && x10*x13*x15*x27 < 1489.68 && x10*x13*x22*x22 >= 11336.92 && x10*x13*x21*x21 >= 7754.68 && x10*x13*x15*x27 >= 955.27 && x10*x13*x13*x27 < -403.79 && x10*x13*x15*x27 >= 1179.19)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 < 535.89 && x2*x13*x20*x27 < 79455.16 && x10*x13*x15*x27 >= 1489.68 && x2*x13*x20*x27 < 33282.77 && x10*x13*x22*x22 >= 8783.45 && x2*x16*x22*x26 < -156232.35)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 >= 535.89 && x0*x12*x27*x27 < 187483.78 && x10*x13*x13*x27 < -80.87 && x0*x14*x22*x24 < -909988.15 && x10*x13*x15*x27 < 932.05)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 >= 535.89 && x0*x12*x27*x27 < 187483.78 && x10*x13*x13*x27 < -80.87 && x0*x14*x22*x24 >= -909988.15 && x6*x6*x7 >= 60.34 && x2*x13*x13*x23 < -1403.53 && x2*x14*x19*x27 < -103234.06 && x2*x16*x16*x27 < -75706.51 && x2*x16*x22*x26 < -1230456.77)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 >= 535.89 && x0*x12*x27*x27 < 187483.78 && x10*x13*x13*x27 < -80.87 && x0*x14*x22*x24 >= -909988.15 && x6*x6*x7 >= 60.34 && x2*x13*x13*x23 < -1403.53 && x2*x14*x19*x27 < -103234.06 && x2*x16*x16*x27 < -75706.51 && x2*x16*x22*x26 >= -1230456.77 && x2*x16*x22*x26 < -631693.18 && x10*x13*x15*x27 >= 2200.65 && x10*x13*x22*x22 >= 14812.19)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 >= 535.89 && x0*x12*x27*x27 < 187483.78 && x10*x13*x13*x27 < -80.87 && x0*x14*x22*x24 >= -909988.15 && x6*x6*x7 >= 60.34 && x2*x13*x13*x23 < -1403.53 && x2*x14*x19*x27 < -103234.06 && x2*x16*x16*x27 < -75706.51 && x2*x16*x22*x26 >= -1230456.77 && x2*x16*x22*x26 >= -631693.18 && x0*x17*x18*x21 < -907257.28)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 >= 535.89 && x0*x12*x27*x27 < 187483.78 && x10*x13*x13*x27 < -80.87 && x0*x14*x22*x24 >= -909988.15 && x6*x6*x7 >= 60.34 && x2*x13*x13*x23 < -1403.53 && x2*x14*x19*x27 < -103234.06 && x2*x16*x16*x27 < -75706.51 && x2*x16*x22*x26 >= -1230456.77 && x2*x16*x22*x26 >= -631693.18 && x0*x17*x18*x21 >= -907257.28 && x2*x16*x16*x27 >= -122867.71 && x10*x13*x22*x22 >= 13985.28)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x5*x14*x15 >= 535.89 && x0*x12*x27*x27 < 187483.78 && x10*x13*x13*x27 < -80.87 && x0*x14*x22*x24 >= -909988.15 && x6*x6*x7 >= 60.34 && x2*x13*x13*x23 >= -1403.53)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 >= 24892.73 && x0*x14*x22*x24 < 66238.08)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x22*x26 >= -12800.51 && x2*x13*x20*x27 < 192.13 && x0*x17*x18*x21 < -30.2 && x2*x16*x16*x27 < -36.39 && x0*x12*x27*x27 >= 434.08)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x22*x26 >= -12800.51 && x2*x13*x20*x27 < 192.13 && x0*x17*x18*x21 < -30.2 && x2*x16*x16*x27 >= -36.39)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x22*x26 >= -12800.51 && x2*x13*x20*x27 >= 192.13 && x10*x13*x22*x22 < 2715.85 && x2*x14*x16*x16 >= -10.72 && x0*x16*x16*x22 < -201.16 && x2*x14*x19*x27 < 209.28)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x16*x22*x26 >= -12800.51 && x2*x13*x20*x27 >= 192.13 && x10*x13*x22*x22 >= 2715.85)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree12(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 < 5111.3 && x2*x16*x22*x26 < -78806.59 && x2*x16*x22*x26 < -274371.09 && x2*x16*x22*x26 < -380455.27 && x10*x13*x15*x27 < 2306.88)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 < 5111.3 && x2*x16*x22*x26 < -78806.59 && x2*x16*x22*x26 >= -274371.09)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 < -1251993.43)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 < 77587.27 && x2*x14*x16*x16 < -17328.41 && x2*x14*x16*x16 < -43100.93 && x2*x13*x13*x23 >= -2288.86)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 < 77587.27 && x2*x14*x16*x16 < -17328.41 && x2*x14*x16*x16 >= -43100.93)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 < 77587.27 && x2*x14*x16*x16 >= -17328.41 && x2*x14*x16*x16 >= -12248.3 && x0*x12*x27*x27 < 32690.83)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 < 77587.27 && x2*x14*x16*x16 >= -17328.41 && x2*x14*x16*x16 >= -12248.3 && x0*x12*x27*x27 >= 32690.83 && x10*x13*x22*x22 >= 11378.05 && x2*x16*x16*x27 < -67027.62 && x2*x16*x22*x26 < -786671.84)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 < 77587.27 && x2*x14*x16*x16 >= -17328.41 && x2*x14*x16*x16 >= -12248.3 && x0*x12*x27*x27 >= 32690.83 && x10*x13*x22*x22 >= 11378.05 && x2*x16*x16*x27 >= -67027.62)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 >= 77587.27 && x2*x16*x16*x27 < -42068.47 && x6*x6*x7 >= 5325.77 && x2*x14*x19*x27 < -104399.34 && x10*x13*x22*x22 < 16192.95)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 >= 77587.27 && x2*x16*x16*x27 < -42068.47 && x6*x6*x7 >= 5325.77 && x2*x14*x19*x27 < -104399.34 && x10*x13*x22*x22 >= 16192.95 && x10*x13*x21*x21 >= 13112.09)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 < 22459.51 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1251993.43 && x2*x13*x20*x27 < 97400.17 && x10*x13*x21*x21 >= 5496.31 && x0*x12*x27*x27 >= 77587.27 && x2*x16*x16*x27 >= -42068.47)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 < 247646.99 && x2*x13*x20*x27 < 203682.46 && x6*x6*x7 >= 22459.51)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x13*x27 >= -1214.11 && x10*x13*x22*x22 >= 5111.3 && x0*x12*x27*x27 >= 247646.99)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x14*x19*x27 >= -13951.29 && x10*x13*x22*x22 < 28249.6 && x2*x16*x22*x26 >= -14517.06 && x2*x13*x20*x27 < 5315.73 && x2*x14*x16*x16 >= -20.77 && x0*x14*x22*x24 < -6.15 && x5*x14*x15 >= 1.42 && x10*x13*x22*x22 < 78.99 && x10*x13*x21*x21 < 16.14 && x6*x6*x7 < 1.74)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x14*x19*x27 >= -13951.29 && x10*x13*x22*x22 < 28249.6 && x2*x16*x22*x26 >= -14517.06 && x2*x13*x20*x27 < 5315.73 && x2*x14*x16*x16 >= -20.77 && x0*x14*x22*x24 < -6.15 && x5*x14*x15 >= 1.42 && x10*x13*x22*x22 >= 78.99)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x14*x19*x27 >= -13951.29 && x10*x13*x22*x22 < 28249.6 && x2*x16*x22*x26 >= -14517.06 && x2*x13*x20*x27 >= 5315.73 && x10*x13*x21*x21 < 1944.19)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x14*x19*x27 >= -13951.29 && x10*x13*x22*x22 >= 28249.6 && x10*x13*x22*x22 < 42066.48 && x10*x13*x21*x21 < 24630.55)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x14*x19*x27 >= -13951.29 && x10*x13*x22*x22 >= 28249.6 && x10*x13*x22*x22 >= 42066.48)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree13(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 < 5480.98 && x2*x16*x22*x26 < -274371.09 && x10*x13*x13*x27 < -163.81)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 < 5480.98 && x2*x16*x22*x26 >= -274371.09)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x13*x27 >= -856.99 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 < -1242340.22)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x13*x27 >= -856.99 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x22*x22 >= 6946.62 && x10*x13*x21*x21 < 15371.29 && x2*x13*x19*x21 < 107762.15 && x10*x13*x15*x27 < 816.74)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x13*x27 >= -856.99 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x22*x22 >= 6946.62 && x10*x13*x21*x21 < 15371.29 && x2*x13*x19*x21 < 107762.15 && x10*x13*x15*x27 >= 816.74 && x10*x13*x13*x27 < -229.87 && x0*x17*x18*x21 < -890632.7)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x13*x27 >= -856.99 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x22*x22 >= 6946.62 && x10*x13*x21*x21 < 15371.29 && x2*x13*x19*x21 < 107762.15 && x10*x13*x15*x27 >= 816.74 && x10*x13*x13*x27 < -229.87 && x0*x17*x18*x21 >= -890632.7 && x2*x16*x16*x27 < -43085.21 && x10*x13*x21*x21 >= 10340.89 && x10*x13*x22*x22 >= 14749.33 && x10*x13*x21*x21 < 10874.48)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x13*x27 >= -856.99 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x22*x22 >= 6946.62 && x10*x13*x21*x21 < 15371.29 && x2*x13*x19*x21 < 107762.15 && x10*x13*x15*x27 >= 816.74 && x10*x13*x13*x27 < -229.87 && x0*x17*x18*x21 >= -890632.7 && x2*x16*x16*x27 < -43085.21 && x10*x13*x21*x21 >= 10340.89 && x10*x13*x22*x22 >= 14749.33 && x10*x13*x21*x21 >= 10874.48 && x0*x16*x16*x22 < -139239.39 && x0*x17*x18*x21 >= -507688.01)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x13*x27 >= -856.99 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x22*x22 >= 6946.62 && x10*x13*x21*x21 < 15371.29 && x2*x13*x19*x21 < 107762.15 && x10*x13*x15*x27 >= 816.74 && x10*x13*x13*x27 < -229.87 && x0*x17*x18*x21 >= -890632.7 && x2*x16*x16*x27 >= -43085.21 && x2*x13*x19*x21 >= 15268.03)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 < 22459.51 && x0*x12*x27*x27 < 186412.4 && x10*x13*x22*x22 >= 5480.98 && x10*x13*x13*x27 >= -856.99 && x0*x14*x22*x24 >= -909988.15 && x2*x16*x22*x26 >= -1242340.22 && x10*x13*x22*x22 >= 6946.62 && x10*x13*x21*x21 < 15371.29 && x2*x13*x19*x21 < 107762.15 && x10*x13*x15*x27 >= 816.74 && x10*x13*x13*x27 >= -229.87 && x2*x16*x16*x27 < -164204.47)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 >= 22459.51 && x10*x13*x13*x27 >= -1261.46 && x6*x6*x7 < 24892.73 && x10*x13*x22*x22 < 25124.36)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -23562.01 && x6*x6*x7 >= 22459.51 && x10*x13*x13*x27 >= -1261.46 && x6*x6*x7 >= 24892.73)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x13*x19*x21 < 56140.23 && x2*x16*x22*x26 >= -14517.06 && x2*x13*x20*x27 < 5315.73 && x2*x14*x19*x27 >= -186.95 && x10*x13*x22*x22 < 243.49 && x0*x16*x16*x22 < -15.69 && x10*x13*x22*x22 < 10.46)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x13*x19*x21 < 56140.23 && x2*x16*x22*x26 >= -14517.06 && x2*x13*x20*x27 < 5315.73 && x2*x14*x19*x27 >= -186.95 && x10*x13*x22*x22 < 243.49 && x0*x16*x16*x22 < -15.69 && x10*x13*x22*x22 >= 10.46 && x2*x16*x22*x26 < -467.62 && x10*x13*x22*x22 >= 70.23)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x13*x19*x21 < 56140.23 && x2*x16*x22*x26 >= -14517.06 && x2*x13*x20*x27 >= 5315.73 && x10*x13*x21*x21 < 1944.19)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x2*x13*x19*x21 >= 56140.23 && x0*x14*x22*x24 < 96554.8)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree14(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 < 241.21 && x2*x14*x16*x16 < -3830.05)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 < 241.21 && x2*x14*x16*x16 >= -3830.05 && x2*x14*x16*x16 >= -2282.23 && x10*x13*x15*x27 < 1085.71)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 < 241.21 && x2*x14*x16*x16 >= -3830.05 && x2*x14*x16*x16 >= -2282.23 && x10*x13*x15*x27 >= 1085.71 && x10*x13*x21*x21 >= 14227.24)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 < -299156.43 && x2*x16*x16*x27 < -840785.47 && x2*x13*x19*x21 < 220768.93)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 < -299156.43 && x2*x16*x16*x27 >= -840785.47 && x2*x13*x13*x23 < -14103.48)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 < -299156.43 && x2*x16*x16*x27 >= -840785.47 && x2*x13*x13*x23 >= -14103.48 && x2*x13*x13*x23 < -5485.72 && x2*x16*x22*x26 < -1876621.7 && x2*x16*x22*x26 >= -2419639.33)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 < -299156.43 && x2*x16*x16*x27 >= -840785.47 && x2*x13*x13*x23 >= -14103.48 && x2*x13*x13*x23 >= -5485.72 && x10*x13*x13*x27 < -279.06)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 < -299156.43 && x2*x16*x16*x27 >= -840785.47 && x2*x13*x13*x23 >= -14103.48 && x2*x13*x13*x23 >= -5485.72 && x10*x13*x13*x27 >= -279.06 && x10*x13*x15*x27 < 1060.35 && x0*x17*x18*x21 >= -2483096.19)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 < -299156.43 && x2*x16*x16*x27 >= -840785.47 && x2*x13*x13*x23 >= -14103.48 && x2*x13*x13*x23 >= -5485.72 && x10*x13*x13*x27 >= -279.06 && x10*x13*x15*x27 >= 1060.35 && x2*x16*x16*x27 < -661122.14)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 >= -299156.43 && x0*x14*x22*x24 < -112357.99 && x0*x17*x18*x21 < -202045.49 && x10*x13*x13*x27 < -282.46 && x2*x13*x13*x23 < -4105.29 && x0*x17*x18*x21 < -404614.29 && x2*x13*x19*x21 < 71019.89)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 >= -299156.43 && x0*x14*x22*x24 < -112357.99 && x0*x17*x18*x21 < -202045.49 && x10*x13*x13*x27 < -282.46 && x2*x13*x13*x23 >= -4105.29)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 < -1406.28 && x5*x14*x15 >= 241.21 && x5*x14*x15 >= 316.09 && x0*x16*x16*x22 >= -299156.43 && x0*x14*x22*x24 >= -112357.99)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 < -80178.45 && x2*x13*x13*x23 >= -1406.28 && x2*x16*x22*x26 >= -274371.09)
		label=1;
	else if (x0*x16*x16*x22 < -33917.15 && x10*x13*x15*x27 >= 570.65 && x0*x14*x22*x24 >= -80178.45 && x6*x6*x7 >= 10270.96)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x10*x13*x21*x21 < 1944.19 && x2*x13*x20*x27 < 5367.56 && x2*x14*x19*x27 >= -186.95 && x2*x14*x16*x16 < -4.74 && x10*x13*x22*x22 < 7.4 && x0*x14*x22*x24 < -5.11)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x10*x13*x21*x21 < 1944.19 && x2*x13*x20*x27 < 5367.56 && x2*x14*x19*x27 >= -186.95 && x2*x14*x16*x16 < -4.74 && x10*x13*x22*x22 >= 7.4 && x0*x16*x16*x22 < -91.31 && x0*x14*x22*x24 < -81.32)
		label=1;
	else if (x0*x16*x16*x22 >= -33917.15 && x10*x13*x21*x21 < 1944.19 && x2*x13*x20*x27 >= 5367.56 && x2*x14*x19*x27 >= -16111.16)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree15(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 < -76400 && x2*x13*x19*x21 < 110455.17 && x2*x16*x16*x27 < -61507.03 && x0*x12*x27*x27 >= 349014.62)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 < -76400 && x2*x13*x19*x21 < 110455.17 && x2*x16*x16*x27 >= -61507.03)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 < -76400 && x2*x13*x19*x21 >= 110455.17)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 >= -76400 && x10*x13*x21*x21 < 65.75 && x2*x13*x19*x21 >= 8.46 && x0*x16*x16*x22 >= -106.47 && x6*x6*x7 < 2.45)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 >= -76400 && x10*x13*x21*x21 < 65.75 && x2*x13*x19*x21 >= 8.46 && x0*x16*x16*x22 >= -106.47 && x6*x6*x7 >= 2.45 && x10*x13*x22*x22 >= 78.99)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 >= -76400 && x10*x13*x21*x21 >= 65.75 && x0*x17*x18*x21 < -110426.2 && x2*x16*x16*x27 >= -33144.72 && x10*x13*x15*x27 >= 769.45)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 >= -76400 && x10*x13*x21*x21 >= 65.75 && x0*x17*x18*x21 >= -110426.2 && x2*x14*x16*x16 < -3608.79 && x10*x13*x21*x21 < 1697.16)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 >= -76400 && x10*x13*x21*x21 >= 65.75 && x0*x17*x18*x21 >= -110426.2 && x2*x14*x16*x16 < -3608.79 && x10*x13*x21*x21 >= 1697.16 && x10*x13*x21*x21 >= 7371.1 && x10*x13*x21*x21 < 8111.69)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 >= -76400 && x10*x13*x21*x21 >= 65.75 && x0*x17*x18*x21 >= -110426.2 && x2*x14*x16*x16 >= -3608.79 && x2*x16*x22*x26 >= -12811.71 && x0*x12*x27*x27 < 24124.07 && x5*x14*x15 < 1.85 && x2*x14*x16*x16 < -6.57)
		label=1;
	else if (x5*x14*x15 < 419.36 && x0*x16*x16*x22 >= -76400 && x10*x13*x21*x21 >= 65.75 && x0*x17*x18*x21 >= -110426.2 && x2*x14*x16*x16 >= -3608.79 && x2*x16*x22*x26 >= -12811.71 && x0*x12*x27*x27 >= 24124.07 && x10*x13*x21*x21 < 1944.19)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 < -250925.25 && x2*x13*x20*x27 >= 38035.7 && x0*x17*x18*x21 < -256117.95 && x2*x13*x20*x27 < 64581.2 && x0*x16*x16*x22 < -168821.47)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 < -250925.25 && x2*x13*x20*x27 >= 38035.7 && x0*x17*x18*x21 < -256117.95 && x2*x13*x20*x27 < 64581.2 && x0*x16*x16*x22 >= -168821.47 && x2*x16*x22*x26 < -576000.74)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 < -250925.25 && x2*x13*x20*x27 >= 38035.7 && x0*x17*x18*x21 < -256117.95 && x2*x13*x20*x27 >= 64581.2 && x0*x17*x18*x21 < -394494.66 && x6*x6*x7 < 8223.62 && x2*x13*x20*x27 < 109126.68 && x10*x13*x15*x27 >= 1680.07 && x2*x16*x16*x27 < -179384.97 && x10*x13*x22*x22 < 12233.98)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 < -250925.25 && x2*x13*x20*x27 >= 38035.7 && x0*x17*x18*x21 < -256117.95 && x2*x13*x20*x27 >= 64581.2 && x0*x17*x18*x21 < -394494.66 && x6*x6*x7 < 8223.62 && x2*x13*x20*x27 < 109126.68 && x10*x13*x15*x27 >= 1680.07 && x2*x16*x16*x27 < -179384.97 && x10*x13*x22*x22 >= 12233.98 && x10*x13*x21*x21 >= 12474.69)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 < -250925.25 && x2*x13*x20*x27 >= 38035.7 && x0*x17*x18*x21 < -256117.95 && x2*x13*x20*x27 >= 64581.2 && x0*x17*x18*x21 < -394494.66 && x6*x6*x7 >= 8223.62 && x5*x14*x15 < 1354.89 && x10*x13*x15*x27 >= 1510.2)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 < -250925.25 && x2*x13*x20*x27 >= 38035.7 && x0*x17*x18*x21 < -256117.95 && x2*x13*x20*x27 >= 64581.2 && x0*x17*x18*x21 < -394494.66 && x6*x6*x7 >= 8223.62 && x5*x14*x15 >= 1354.89 && x10*x13*x15*x27 < 1077.63)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 >= -250925.25 && x0*x14*x22*x24 < -79878.97 && x2*x14*x19*x27 < -76987.8 && x10*x13*x21*x21 < 6159.05)
		label=1;
	else if (x5*x14*x15 >= 419.36 && x0*x17*x18*x21 < -61596.29 && x2*x16*x22*x26 >= -250925.25 && x0*x14*x22*x24 < -79878.97 && x2*x14*x19*x27 >= -76987.8)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree16(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 < -6846.95 && x10*x13*x21*x21 >= 26474.36)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 >= -6846.95 && x2*x14*x16*x16 < -96751.12 && x2*x16*x16*x27 >= -1957144.66 && x2*x14*x19*x27 < -538423.08 && x10*x13*x21*x21 < 9612.71)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 >= -6846.95 && x2*x14*x16*x16 < -96751.12 && x2*x16*x16*x27 >= -1957144.66 && x2*x14*x19*x27 >= -538423.08)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 >= -6846.95 && x2*x14*x16*x16 >= -96751.12 && x0*x14*x22*x24 < -159185.46 && x10*x13*x21*x21 >= 8728.31 && x2*x13*x19*x21 < 107762.15 && x2*x14*x16*x16 < -29524.99)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 >= -6846.95 && x2*x14*x16*x16 >= -96751.12 && x0*x14*x22*x24 < -159185.46 && x10*x13*x21*x21 >= 8728.31 && x2*x13*x19*x21 < 107762.15 && x2*x14*x16*x16 >= -29524.99 && x2*x13*x20*x27 < 64581.2 && x2*x14*x19*x27 < -88207.44 && x2*x16*x16*x27 < -75706.51 && x2*x16*x16*x27 < -98507.13)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 >= -6846.95 && x2*x14*x16*x16 >= -96751.12 && x0*x14*x22*x24 < -159185.46 && x10*x13*x21*x21 >= 8728.31 && x2*x13*x19*x21 < 107762.15 && x2*x14*x16*x16 >= -29524.99 && x2*x13*x20*x27 < 64581.2 && x2*x14*x19*x27 < -88207.44 && x2*x16*x16*x27 < -75706.51 && x2*x16*x16*x27 >= -98507.13 && x2*x16*x22*x26 < -593265.77)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 >= -6846.95 && x2*x14*x16*x16 >= -96751.12 && x0*x14*x22*x24 < -159185.46 && x10*x13*x21*x21 >= 8728.31 && x2*x13*x19*x21 < 107762.15 && x2*x14*x16*x16 >= -29524.99 && x2*x13*x20*x27 >= 64581.2 && x10*x13*x21*x21 >= 14796.47)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 < 22332.81 && x0*x14*x22*x24 >= -909988.15 && x2*x13*x13*x23 >= -6846.95 && x2*x14*x16*x16 >= -96751.12 && x0*x14*x22*x24 >= -159185.46)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 >= 22332.81 && x0*x16*x16*x22 < -62624.36 && x0*x14*x22*x24 < -1391515.52 && x10*x13*x22*x22 < 25124.36)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 < -268156.26 && x2*x13*x13*x23 < -680.53 && x6*x6*x7 >= 22332.81 && x0*x16*x16*x22 < -62624.36 && x0*x14*x22*x24 >= -1391515.52)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 >= -268156.26 && x0*x12*x27*x27 < 116202.89 && x2*x16*x16*x27 < -43085.21 && x0*x16*x16*x22 < -77144.34 && x10*x13*x22*x22 < 14767.12 && x2*x16*x16*x27 >= -57917.94)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 >= -268156.26 && x0*x12*x27*x27 < 116202.89 && x2*x16*x16*x27 < -43085.21 && x0*x16*x16*x22 < -77144.34 && x10*x13*x22*x22 >= 14767.12)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 >= -268156.26 && x0*x12*x27*x27 < 116202.89 && x2*x16*x16*x27 >= -43085.21 && x0*x16*x16*x22 < -35936.15 && x10*x13*x22*x22 >= 4266.6 && x0*x12*x27*x27 < 32891.32)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 >= -268156.26 && x0*x12*x27*x27 < 116202.89 && x2*x16*x16*x27 >= -43085.21 && x0*x16*x16*x22 < -35936.15 && x10*x13*x22*x22 >= 4266.6 && x0*x12*x27*x27 >= 32891.32 && x10*x13*x21*x21 >= 7754.68 && x10*x13*x15*x27 < 1478.59)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 >= -268156.26 && x0*x12*x27*x27 < 116202.89 && x2*x16*x16*x27 >= -43085.21 && x0*x16*x16*x22 >= -35936.15 && x10*x13*x13*x27 < -434.98 && x10*x13*x22*x22 < 3970.73)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x17*x18*x21 >= -268156.26 && x0*x12*x27*x27 < 116202.89 && x2*x16*x16*x27 >= -43085.21 && x0*x16*x16*x22 >= -35936.15 && x10*x13*x13*x27 < -434.98 && x10*x13*x22*x22 >= 3970.73 && x2*x14*x19*x27 < -49006.31)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x0*x16*x16*x22 >= -1780.61 && x5*x14*x15 < 5.36 && x5*x14*x15 >= 1.42 && x2*x16*x22*x26 < -467.62)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x0*x16*x16*x22 >= -1780.61 && x5*x14*x15 < 5.36 && x5*x14*x15 >= 1.42 && x2*x16*x22*x26 >= -467.62 && x10*x13*x21*x21 < 16.14)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x0*x16*x16*x22 >= -1780.61 && x5*x14*x15 >= 5.36 && x2*x16*x22*x26 < -11217.29 && x10*x13*x21*x21 < 2593.42)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree17(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 < -70801.79 && x2*x16*x16*x27 < -75706.51 && x10*x13*x13*x27 < -87.62 && x10*x13*x22*x22 < 12233.98 && x0*x17*x18*x21 < -378235.08 && x2*x13*x19*x21 < 153819.12)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 < -70801.79 && x2*x16*x16*x27 < -75706.51 && x10*x13*x13*x27 < -87.62 && x10*x13*x22*x22 < 12233.98 && x0*x17*x18*x21 < -378235.08 && x2*x13*x19*x21 >= 153819.12 && x2*x14*x19*x27 < -576950.26 && x10*x13*x22*x22 >= 2173.23)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 < -70801.79 && x2*x16*x16*x27 < -75706.51 && x10*x13*x13*x27 < -87.62 && x10*x13*x22*x22 >= 12233.98 && x6*x6*x7 < 22459.51 && x2*x14*x19*x27 >= -322593.92 && x6*x6*x7 < 13451.91 && x10*x13*x21*x21 < 12530.9 && x10*x13*x22*x22 >= 14760.96 && x10*x13*x22*x22 < 16655.02)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 < -70801.79 && x2*x16*x16*x27 < -75706.51 && x10*x13*x13*x27 < -87.62 && x10*x13*x22*x22 >= 12233.98 && x6*x6*x7 < 22459.51 && x2*x14*x19*x27 >= -322593.92 && x6*x6*x7 < 13451.91 && x10*x13*x21*x21 >= 12530.9 && x10*x13*x22*x22 >= 19193.31 && x2*x14*x19*x27 < -104399.34)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 < -70801.79 && x2*x16*x16*x27 < -75706.51 && x10*x13*x13*x27 < -87.62 && x10*x13*x22*x22 >= 12233.98 && x6*x6*x7 >= 22459.51 && x10*x13*x15*x27 < 2067.31)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 < -70801.79 && x2*x16*x16*x27 < -75706.51 && x10*x13*x13*x27 < -87.62 && x10*x13*x22*x22 >= 12233.98 && x6*x6*x7 >= 22459.51 && x10*x13*x15*x27 >= 2067.31 && x10*x13*x15*x27 >= 2501.89)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 >= -70801.79 && x10*x13*x13*x27 < -696.28 && x0*x12*x27*x27 >= 354049.05)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 < -78992.83 && x2*x13*x13*x23 < -680.53 && x2*x14*x19*x27 >= -70801.79 && x10*x13*x13*x27 >= -696.28)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 >= -78992.83 && x2*x13*x20*x27 < 20491.67 && x10*x13*x15*x27 >= 867.15 && x0*x12*x27*x27 < 25342.58)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 >= -78992.83 && x2*x13*x20*x27 >= 20491.67 && x5*x14*x15 < 126.87 && x10*x13*x15*x27 < 1304.56 && x0*x16*x16*x22 >= -44992.71)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 >= -78992.83 && x2*x13*x20*x27 >= 20491.67 && x5*x14*x15 >= 126.87 && x0*x12*x27*x27 < 350801.37 && x2*x16*x16*x27 >= -37727.87 && x2*x14*x19*x27 < -49006.31)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x0*x16*x16*x22 >= -78992.83 && x2*x13*x20*x27 >= 20491.67 && x5*x14*x15 >= 126.87 && x0*x12*x27*x27 >= 350801.37)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x0*x16*x16*x22 >= -1780.61 && x6*x6*x7 < 1.74 && x0*x14*x22*x24 < -3.13)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x0*x16*x16*x22 >= -1780.61 && x6*x6*x7 >= 1.74 && x0*x14*x22*x24 < -92.55 && x2*x14*x16*x16 < -24.17 && x0*x12*x27*x27 >= 24124.07 && x10*x13*x22*x22 < 3889.67)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x0*x16*x16*x22 >= -1780.61 && x6*x6*x7 >= 1.74 && x0*x14*x22*x24 < -92.55 && x2*x14*x16*x16 >= -24.17 && x2*x16*x16*x27 < -191.56)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree18(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 < 22459.51 && x10*x13*x22*x22 < 15698.48 && x2*x16*x22*x26 < -352110.55 && x2*x13*x19*x21 < 147012.1 && x10*x13*x13*x27 < -282.59)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 < 22459.51 && x10*x13*x22*x22 < 15698.48 && x2*x16*x22*x26 < -352110.55 && x2*x13*x19*x21 < 147012.1 && x10*x13*x13*x27 >= -282.59 && x10*x13*x13*x27 >= -252.51 && x2*x13*x20*x27 < 37616.81 && x10*x13*x21*x21 >= 8545.32)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 < 22459.51 && x10*x13*x22*x22 < 15698.48 && x2*x16*x22*x26 < -352110.55 && x2*x13*x19*x21 < 147012.1 && x10*x13*x13*x27 >= -282.59 && x10*x13*x13*x27 >= -252.51 && x2*x13*x20*x27 >= 37616.81)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 < 22459.51 && x10*x13*x22*x22 < 15698.48 && x2*x16*x22*x26 < -352110.55 && x2*x13*x19*x21 >= 147012.1 && x10*x13*x22*x22 < 4164.44)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 < 22459.51 && x10*x13*x22*x22 >= 15698.48 && x2*x14*x19*x27 < -129507.49 && x2*x14*x16*x16 >= -62519.08 && x2*x16*x22*x26 < -1270589.62)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 < 22459.51 && x10*x13*x22*x22 >= 15698.48 && x2*x14*x19*x27 < -129507.49 && x2*x14*x16*x16 >= -62519.08 && x2*x16*x22*x26 >= -1270589.62 && x2*x14*x19*x27 >= -137499.03)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 >= 22459.51 && x10*x13*x21*x21 < 21128.9)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 < 2581.19 && x6*x6*x7 >= 22459.51 && x10*x13*x21*x21 >= 21128.9 && x10*x13*x22*x22 < 25124.36)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 < -250925.25 && x0*x17*x18*x21 < -226759.97 && x2*x13*x19*x21 >= 39438.73 && x10*x13*x15*x27 >= 2581.19 && x10*x13*x15*x27 >= 4635.85)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 >= -250925.25 && x0*x16*x16*x22 < -30541.41 && x6*x6*x7 < 474.3)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 >= -250925.25 && x0*x16*x16*x22 < -30541.41 && x6*x6*x7 >= 474.3 && x10*x13*x21*x21 >= 5496.31 && x10*x13*x22*x22 < 11510.42 && x0*x17*x18*x21 >= -125225.3 && x10*x13*x13*x27 < -366.87 && x10*x13*x21*x21 >= 7371.1)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 >= -250925.25 && x0*x16*x16*x22 < -30541.41 && x6*x6*x7 >= 474.3 && x10*x13*x21*x21 >= 5496.31 && x10*x13*x22*x22 < 11510.42 && x0*x17*x18*x21 >= -125225.3 && x10*x13*x13*x27 >= -366.87)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 < 38151.16 && x10*x13*x13*x27 >= -1214.11 && x2*x16*x22*x26 >= -250925.25 && x0*x16*x16*x22 < -30541.41 && x6*x6*x7 >= 474.3 && x10*x13*x21*x21 >= 5496.31 && x10*x13*x22*x22 >= 11510.42)
		label=1;
	else if (x0*x14*x22*x24 < -80178.45 && x10*x13*x22*x22 >= 38151.16)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 < 7.4 && x10*x13*x21*x21 >= 6.12)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 >= 7.4 && x5*x14*x15 < 30.45 && x2*x16*x16*x27 < -23985.98 && x2*x14*x16*x16 < 583.65)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 >= 7.4 && x5*x14*x15 < 30.45 && x2*x16*x16*x27 >= -23985.98 && x0*x14*x22*x24 < -92.55 && x0*x14*x22*x24 < -102.69 && x2*x14*x19*x27 < -3394.63 && x10*x13*x22*x22 < 4520.84)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 >= 7.4 && x5*x14*x15 < 30.45 && x2*x16*x16*x27 >= -23985.98 && x0*x14*x22*x24 < -92.55 && x0*x14*x22*x24 >= -102.69)
		label=1;
	else if (x0*x14*x22*x24 >= -80178.45 && x10*x13*x22*x22 >= 7.4 && x5*x14*x15 >= 30.45 && x0*x14*x22*x24 >= -4584.72 && x10*x13*x15*x27 >= 1363.23)
		label=1;
	else
		label=0;
	return label;
}

float rf92_tree19(float x0,float x1,float x2,float x3,float x4,float x5,float x6,float x7,float x8,float x9,float x10,float x11,float x12,float x13,float x14,float x15,float x16,float x17,float x18,float x19,float x20,float x21,float x22,float x23,float x24,float x25,float x26,float x27)
{	/*input: a reading consisting of 28 features
	output: the label (0 or 1) of the reading
	*/
	float label;

	if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 < 488.1 && x2*x16*x22*x26 >= -699149.63 && x2*x16*x22*x26 < -274371.09 && x2*x13*x13*x23 < -1434.35)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 < 488.1 && x2*x16*x22*x26 >= -699149.63 && x2*x16*x22*x26 >= -274371.09)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 >= 488.1 && x10*x13*x21*x21 >= 7487.33 && x10*x13*x15*x27 < 864.57)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 >= 488.1 && x10*x13*x21*x21 >= 7487.33 && x10*x13*x15*x27 >= 864.57 && x10*x13*x13*x27 < -218.38 && x10*x13*x13*x27 < -413.28 && x6*x6*x7 < 2616.82 && x10*x13*x22*x22 < 10688.12)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 >= 488.1 && x10*x13*x21*x21 >= 7487.33 && x10*x13*x15*x27 >= 864.57 && x10*x13*x13*x27 < -218.38 && x10*x13*x13*x27 < -413.28 && x6*x6*x7 >= 2616.82 && x0*x12*x27*x27 >= 169940.29)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 >= 488.1 && x10*x13*x21*x21 >= 7487.33 && x10*x13*x15*x27 >= 864.57 && x10*x13*x13*x27 < -218.38 && x10*x13*x13*x27 >= -413.28 && x0*x14*x22*x24 >= -916958.54 && x10*x13*x15*x27 < 1283.5 && x10*x13*x15*x27 < 1081.68 && x10*x13*x15*x27 >= 924.78 && x2*x14*x19*x27 < -51207.68 && x0*x12*x27*x27 < 33118.16)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 >= 488.1 && x10*x13*x21*x21 >= 7487.33 && x10*x13*x15*x27 >= 864.57 && x10*x13*x13*x27 < -218.38 && x10*x13*x13*x27 >= -413.28 && x0*x14*x22*x24 >= -916958.54 && x10*x13*x15*x27 < 1283.5 && x10*x13*x15*x27 < 1081.68 && x10*x13*x15*x27 >= 924.78 && x2*x14*x19*x27 < -51207.68 && x0*x12*x27*x27 >= 33118.16 && x10*x13*x21*x21 >= 21626.66)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 >= 488.1 && x10*x13*x21*x21 >= 7487.33 && x10*x13*x15*x27 >= 864.57 && x10*x13*x13*x27 < -218.38 && x10*x13*x13*x27 >= -413.28 && x0*x14*x22*x24 >= -916958.54 && x10*x13*x15*x27 >= 1283.5 && x2*x16*x16*x27 < -330992.95 && x2*x16*x16*x27 < -397377.71)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 < -32585.1 && x6*x6*x7 >= 488.1 && x10*x13*x21*x21 >= 7487.33 && x10*x13*x15*x27 >= 864.57 && x10*x13*x13*x27 < -218.38 && x10*x13*x13*x27 >= -413.28 && x0*x14*x22*x24 >= -916958.54 && x10*x13*x15*x27 >= 1283.5 && x2*x16*x16*x27 >= -330992.95 && x2*x13*x13*x23 >= -5823.88)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 < -80178.45 && x2*x16*x16*x27 >= -32585.1)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 < 24892.73 && x0*x12*x27*x27 < 183376.04 && x0*x14*x22*x24 >= -80178.45 && x0*x14*x22*x24 >= -7481.96 && x2*x16*x22*x26 < 76619.98)
		label=1;
	else if (x2*x16*x16*x27 < -24206.95 && x6*x6*x7 >= 24892.73 && x2*x14*x19*x27 < 17527 && x2*x16*x16*x27 < -74454.26)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x14*x16*x16 >= -161.45 && x5*x14*x15 >= 1.42 && x2*x14*x19*x27 < -209.62 && x10*x13*x13*x27 < -666.93 && x10*x13*x22*x22 < 3889.67)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x14*x16*x16 >= -161.45 && x5*x14*x15 >= 1.42 && x2*x14*x19*x27 >= -209.62 && x5*x14*x15 < 2.07)
		label=1;
	else if (x2*x16*x16*x27 >= -24206.95 && x2*x14*x16*x16 >= -161.45 && x5*x14*x15 >= 1.42 && x2*x14*x19*x27 >= -209.62 && x5*x14*x15 >= 2.07 && x0*x14*x22*x24 < -92.23)
		label=1;
	else
		label=0;
	return label;
}

float * predict_PTB_rf92(float spectra[][28], int no_of_spectra)
{	/*Inputs: all spectra of an ID (a spectrum has 28 features)
			  no. of spectra of the ID
	  Outputs: probabilities of preterm birth (ptb) of the spectra
	*/
	int i;
	float y0,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,y13,y14,y15,y16,y17,y18,y19;
	static float prob_ptb [1];

	for(i=0;i<no_of_spectra;i++){
		y0=rf92_tree0(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y1=rf92_tree1(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y2=rf92_tree2(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y3=rf92_tree3(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y4=rf92_tree4(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
        y5=rf92_tree5(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y6=rf92_tree6(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y7=rf92_tree7(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y8=rf92_tree8(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y9=rf92_tree9(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y10=rf92_tree10(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
        y11=rf92_tree11(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y12=rf92_tree12(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y13=rf92_tree13(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y14=rf92_tree14(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y15=rf92_tree15(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y16=rf92_tree16(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
        y17=rf92_tree17(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y18=rf92_tree18(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		y19=rf92_tree19(spectra[i][0],spectra[i][1],spectra[i][2],spectra[i][3],spectra[i][4],spectra[i][5],spectra[i][6],spectra[i][7],spectra[i][8],spectra[i][9],spectra[i][10],spectra[i][11],spectra[i][12],spectra[i][13],spectra[i][14],spectra[i][15],spectra[i][16],spectra[i][17],spectra[i][18],spectra[i][19],spectra[i][20],spectra[i][21],spectra[i][22],spectra[i][23],spectra[i][24],spectra[i][25],spectra[i][26],spectra[i][27]);
		prob_ptb[i]=(y0+y1+y2+y3+y4+y5+y6+y7+y8+y9+y10+y11+y12+y13+y14+y15+y16+y17+y18+y19)/20.0;
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
   float a_spectrum[1][28];

   spectra_of_id_csv="./spectra/preterm_WX5804.csv";
   no_of_spectra = get_number_of_spectra(spectra_of_id_csv);
   printf("no. of spectra %d\n",no_of_spectra);
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
   //predict PTB of all spectra
   prob_ptb=predict_PTB_rf92(spectra,no_of_spectra);
   for( i = 0; i < no_of_spectra; i++ ) {
      printf( "%d  %f\n", i, *(prob_ptb + i));
   }
   //predict PTB of ith spectrum
   i=1;
   for(int j=0;j<28;j++)
	   a_spectrum[0][j]=spectra[i][j];
   prob_ptb=predict_PTB_rf92(a_spectrum,1);
   printf( "%d  %f\n", i, *(prob_ptb + 0));

   return 0 ;
 }
*/
