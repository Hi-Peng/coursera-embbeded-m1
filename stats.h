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
 * @file stats.h 
 * @brief Containing function definition
 *
 *
 * @author Hilal Yahya 
 * @date 08-01-2021 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param input add data set for mean calc
 * @param size configure array size of the data set
 *
 * @return Return the value of calculated mean
 */
float find_mean(unsigned char data[], int size);

/**
 *
 * @brief Given an array of data and a length, returns the median value
 *
 * @param input Char input for median calculation
 * @param size Configure array size according to the data set
 *
 * @return Calculated median value from the data set
 */
float find_median(unsigned char data[], int size);

/**
 *
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param input Char input of the data set
 * @param size Size of the char
 *
 * @return void
 */
void print_array(unsigned char data[], int size);

/**
 *
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param max maximum value of the dataset
 * @param min minimum number of the dataset
 * @param mean mean of the dataset
 * @param med median of the dataset
 *
 * @return void
 */
void print_statistic(float min, float max, float mean, float med);

/**
 *
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param input data set input 
 * @param size Size of the data set
 *
 * @return maximum element of the dataset
 *
 */
float find_maximum(unsigned char data[], int size);

/**
 *
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param data Array input from the dataset
 * @param size Array size of the dataset
 *
 * @return minimum number of dataset element
 *
 */
float find_minimum(unsigned char data[], int size);

/**
 *
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. ) 
 *
 * @params data Array input of the dataset
 * @params size Array size of the dataset
 *
 * @return sorted array of the dataset
 *
 */
void sort_array(unsigned char *ptr, int size);
#endif 
