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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/*
 * Functoin: print_statistics 
 * Description: this function prints the statistcs of an input array. The statistics 
 * 		information includes minimum, maximum, mean, and median of the arrays 
 * Input parameters: 
 * 		int ptr[]: array of dataset
 * 		int count: number of items in the data set 
 *
 *****************************************************************************/
void print_statistics(char ptr[], int count); 

/*****************************************************************************
 * Function: print_array 
 * Description: this functoin takes int type array and size of array input and print out array 
		on the display  
 * Parameters:
 * 	int ptr[]: array of the dataset  
 * 	int count: Number of items in data set 
 * Return: 
 * 	None  
 ********************************************************************************/

void print_array(int ptr[], int count); 

/*******************************************************************************
 * Functoin: sort_array 
 * Description: this function will sort the input array from largest to the smallest using
		the insertion sort method. 
 * Parameters: 
 * 	int ptr[]: array of the dataset 
 * 	int count: number of items in data set 
 *
 * return: 
 * 	None  
 * *****************************************************************************/
void sort_array(int ptr[], int count); 

/***************************************************************************
 * Function: find_median
 * Description: this function will find the median value of the array. The array will be sorted from\
		largest to smallest before find median. The median of the array is the median integer of the sorted 
		array. If the size of the array is even, the median is average of two adajacent integers in 
		the center of the sorted array. Otherwise, the median is just the median of the array 
 * Parametes: 
 * 	int ptr[]: array of the dataset 
 * 	int count: number of items in dataset 
 * return 
 * 	median number of the array 
 *************************************************************************/
int  find_median(int ptr[], int count); 

/************************************************************************
 * Function: find_mean 
 * Description: this function find the mean of the input array. The mean is calcuated by sum of the all numbers from 
		the input array over by the size of the array
 * Parameters: 
 * 	int ptr[]: array of the dataset 
 * 	int count: number of items in dataset
 * return 
 * 	average of the dataset
 *
 *
 **************************************************************************/
float find_mean(int ptr[], int count); 


/***************************************************************************
 * Function: fnd_maximum 
 * Description: this function is to find the maximum number existed in the array
 * Parameters: 
 * 	int ptr[]: array of the dataset 
 * 	int count: number of items in dataset
 * Return 
 * 	maximum number in the datset 
 *
 *****************************************************************************/

int find_maximum(int ptr[], int count); 

/******************************************************************************
 * Function: find_minimum 
 * Description: this function is to find the minimun value existed in the array 
 * Parameters: 
 * 	int ptr[]: array of the dataset 
 * 	int count: number of items in dataset
 * return 
 *  	the minimum value in the dataset 
 *
 ******************************************************************************/
int find_minimum(int ptr[], int count); 


#endif /* __STATS_H__ */
