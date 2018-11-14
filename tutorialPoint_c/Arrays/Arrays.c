//
//  Arrays.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Arrays.h"

/*
 // Formal parameters as a pointer
 void myFunction(int *param) {}
 
 // Formal parameters as a sized array
 void myFunction(int param[10]) {}
 
 // Formal parameters as an unsized array
 void myFunction(int param[]) {}
 */

void arrayBasicSize10() {
    int n[ 10 ]; /* n is an array of 10 integers */
    int i,j;
    
    /* initialize elements of array n to 0 */
    for (i = 0; i < 10; i++) {
        n[ i ] = i + 100; /* set element at location i to i + 100 */
    }
    
    /* output each array element's value */
    for (j = 0; j < 10; j++) {
        printf("Element[%d] = %d\n", j, n[j]);
    }
}

void arrayBasicTwoDim() {
    /* an array with 5 rows and 2 columns*/
    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
    int i, j;
    
    /* output each array element's value */
    for (i = 0; i < 5; i++) {
        
        for (j = 0; j < 2; j++) {
            printf("a[%d][%d] = %d\n", i,j, a[i][j]);
        }
    }
}

double arrayGetAverage(int arr[], int size) {
    
    int i;
    double avg;
    double sum = 0;
    
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    
    avg = sum / size;
    
    return avg;
}

void arrayAverageExample() {
    /* an int array with 5 elements */
    int balance[5] = { 1000, 2, 3, 17, 50 };
    double avg;
    
    /* pass pointer to the array as an argument */
    avg = arrayGetAverage(balance, 5) ;
    
    /* output the returned value */
    printf("Average value is: %f ", avg);
}

/*
 C programming does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index.
 
 If you want to return a single-dimension array from a function, you would have to declare a function returning a pointer as in the following example −
 
 // Must return a pointer!
 int * myFunction() {}
 */

/* function to generate and return random numbers */
int *getRandom() {
    
    static int  r[10];
    int i;
    
    /* set the seed */
    // Issue with line
    // TODO: Fix seeding rand()
//    srand((unsigned)time(NULL ));
    
    for (i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }
    
    return r;
}

void arrayRandExample() {
    /* a pointer to an int */
    int *p;
    int i;
    
    p = getRandom();
    
    for (i = 0; i < 10; i++) {
        printf("*(p + %d) : %d\n", i, *(p + i));
    }
}
