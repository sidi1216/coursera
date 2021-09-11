/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * Project name: statistic analysis of the given dataset 
 * 
 * Description:  A simple c programming function to analyze an array of unsigned
 * 		 char data items and report analytics 
 * 		to display on a set of number:
 * 		1. Maximum 
 * 		2. Minimum 
 * 		3. Mean
 * 		4. Median 
 *		The data set will be reordered from the large to small and print 
 *		the those set of numbers on the screen 
 *
 *
 * <Add Extended Description Here>
 *
 * @author: Sidi Huang
 * @date: 2021-09-09 
 *******************************************************************************
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}
void print_statistics(char ptr[], int count) {}
void print_array(int ptr[], int count) {}
void sort_array(int ptr[], int count) {}
int find_median(int ptr[], int count) {}
float find_mean(int ptr[], int count) {}
int find_maximum(int ptr[], int count) {}
int find_minimum(int ptr[], int count) {}
/* Add other Implementation File Code Here */
