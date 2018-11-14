//
//  Functions.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Functions.h"

/* function returning the max between two numbers */
int max(int num1, int num2) {
    
    /* local variable declaration */
    int result;
    
    if (num1 > num2)
        result = num1;
    else
        result = num2;
    
    return result;
}

/* function definition to swap the values */
void swap(int x, int y) {
    
    int temp;
    
    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put temp into y */
    
    return;
}

/* function definition to swap the values */
void swap_ptr(int *x, int *y) {
    
    int temp;
    temp = *x;    /* save the value at address x */
    *x = *y;      /* put y into x */
    *y = temp;    /* put temp into y */
    
    return;
}
