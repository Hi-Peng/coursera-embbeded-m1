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
 * @file stats.c 
 * @brief Implementation file of simple statistic calculator
 *
 *
 * @author Hilal Yahya
 * @date 2022-01-08
 *
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
    int mean  = 0;
    int median = 0;
    mean = find_mean(test, SIZE);
    median = find_median(test, SIZE);
    /* Statistics and Printing Functions Go Here */
    print_array(test, SIZE);
    printf("Mean of the dataset: %d \n", mean);
    printf("Median of the dataset: %d \n", median);
}

void print_array(char data[], int size){
    printf("Data set: \n===================\n");
    for(int i = 0; i < size; i++){
        printf("%d ", data[i]);
        if(i%8==0 && i!=0)
            printf("\n");
    }
    printf("\n=========================\n");
}

void print_statistic(int min, int max, int mean, int med){
    printf("Minimium of the dataset: %d\n", min);
    printf("Maximum of the dataset: %d\n", max);
    printf("Mean of the dataset: %d\n", mean);
    printf("Median of the dataset: %d\n", med);
}

int find_mean(char data[], int size){
    int mean;
    mean = 0;

    for(int i = 0; i<size; i++){
        mean += data[i];
    }

    return (mean/size);

}

int find_median(char data[], int size){
    if(size%2==0)
        return data[size/2];
    else
        return (data[(size-1)/2]-data[(size+1)/2])/2;
}

int find_minimum(char data[], int size){
    
}

int find_maximum(char data[], int size){

}

int sort_array(char data[], int size){
    
}


