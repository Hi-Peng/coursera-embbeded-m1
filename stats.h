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
 * @brief <Add Brief Description of Function Here>
 *
 * @param input add data set for mean calc
 * @param SIZE configure array size of the data set
 *
 * @return Return the value of calculated mean
 */
int find_mean(char data[], int size);

/**
 *
 * @brief calculate median from a dataset
 *
 * @param input Char input for median calculation
 * @param size Configure array size according to the data set
 *
 * @return Calculated median value from the data set
 */
int find_median(char data[], int size);

/**
 *
 * @brief Print given array of data set
 *
 * @param input Char input of the data set
 * @param size Size of the char
 *
 * @return void
 */
void print_array(char data[], int size);
#endif 
