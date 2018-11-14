//
//  Casting.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Casting.h"

/// Type casting is a way to convert a variable from one data type to another data type. For example, if you want to store a 'long' value into a simple integer then you can type cast 'long' to 'int'.
void castingBasicExample() {
    int sum = 17, count = 5;
    double mean;
    
    mean = (double) sum / count;
    printf("Value of mean : %f\n", mean);
}

/// Integer promotion is the process by which values of integer type "smaller" than int or unsigned int are converted either to int or unsigned int. Consider an example of adding a character with an integer −
void castingIntPromotionExample() {
    int  i = 17;
    char c = 'c'; /* ascii value is 99 */
    int sum;
    
    sum = i + c;
    printf("Value of sum : %d\n", sum);
}

/*
 long double
 double
 float
 unsigned long long
 long long
 unsigned long
 long unsigned int
 int
 */

void castingIntPromotionToFloatExample() {
    int  i = 17;
    char c = 'c'; /* ascii value is 99 */
    float sum;
    
    sum = i + c;
    printf("Value of sum : %f\n", sum);
}
