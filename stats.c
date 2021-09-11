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
#include <limits.h>
#include <stdlib.h>
#include "stats.h"

/* Size :of the ata Set */
#define SIZE (40)




void main() {

   unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
 	print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(char ptr[], int count) {
	int i,  min, max, median;
        float mean; 	
	unsigned int ptrInt[count]; 

	// copy  unsigned char arrays to unsigned int arrays :
	for (i = 0; i < count; i++) {
		ptrInt[i] = (unsigned char) ptr[i];
	}

	printf(" Start to analyze the input array \n"); 
	printf(" Input array \n"); 
	print_array(ptrInt, count); 

	printf("\n The sorted array \n");
	sort_array(ptrInt, count); 
	print_array(ptrInt, count);
	
	 
	min = find_minimum(ptrInt, count); 
	max = find_maximum(ptrInt, count);
        mean = find_mean(ptrInt, count); 
 	median= find_median(ptrInt, count);
	
	printf("\n Analyzing the input array.....\n");
	printf(" The statistics information: \n");  
	printf("	Mean:    %f", mean);
	printf("\n	Median:  %d", median); 
	printf("\n	Minimum: %d", min); 
	printf("\n	Maximum: %d", max); 
	printf("\n"); 
}


void print_array(int ptr[], int count) {
	int i; 
	printf("["); 
	for ( i = 0; i < count; i++) {
	  printf("%d ", ptr[i]);  
	}
	printf("] \n");
}

void sort_array(int ptr[], int count) {
	// insertion sort to sort array from largest to smallest 
	int i, j, k; 
	for (i= 0; i < count; i++) {
		for (j = i; j > 0; j--) {
			if (ptr[j] > ptr[j - 1]) {
				k = ptr[j]; 
				ptr[j] = ptr[j-1]; 
				ptr[j-1] = k; 
			}
		       	else {
				break; 
			}
		}
	}
}

int find_median(int ptr[], int count) {
	int median;
        int start, end; 	
	// sort the array at first 
	sort_array(ptr, count); 
	
	// if the count is even, then we need to return the average bewteen two median numbers 
	if (count % 2 == 0) {
		start = count / 2; 
		end = start - 1; 
		median = (ptr[start] + ptr[end]) / 2; 
	} else {
		median = ptr[count / 2]; 
	}	

	return median; 
}

float find_mean(int ptr[], int count) {
	int average = 0; 
	int i; 


	if ( count <= 0 ) {
		count = 1; 
	}

	for (i = 0; i < count; i++) {
		average += ptr[i];
	}

	return (float) average / count; 
}

int find_maximum(int ptr[], int count) {
	int max = INT_MIN; // initalize the max to be the smallest integer 
	int i; 

	for (i = 0; i < count; i++) {
		if (max < ptr[i]) {
			max = ptr[i]; 
		}
	}

	return max; 	
}

int find_minimum(int ptr[], int count) {
	int min = INT_MAX; // initalize the min to be the largest integer
	int i; 

	for (i = 0; i < count; i++) { 
		if (min > ptr[i]) {
			min = ptr[i]; 
		}
	}

	return min; 
}
