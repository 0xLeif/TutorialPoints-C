//
//  Functions.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Functions.h"

/* function returning the max between two numbers */
int functionMax(int num1, int num2) {
    
    /* local variable declaration */
    int result;
    
    if (num1 > num2)
        result = num1;
    else
        result = num2;
    
    return result;
}

/* function definition to swap the values */
void functionSwap(int x, int y) {
    
    int temp;
    
    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put temp into y */
    
    return;
}

/* function definition to swap the values */
void functionSwap_ptr(int *x, int *y) {
    
    int temp;
    temp = *x;    /* save the value at address x */
    *x = *y;      /* put y into x */
    *y = temp;    /* put temp into y */
    
    return;
}

/*
 Sometimes, you may come across a situation, when you want to have a function, which can take variable number of arguments, i.e., parameters, instead of predefined number of parameters. The C programming language provides a solution for this situation and you are allowed to define a function which can accept variable number of parameters based on your requirement. The following example shows the definition of such a function.
 
 int func(int, ...) { }
 
 int main() {
     func(1, 2, 3);
     func(1, 2, 3, 4);
 }
 */

double functionAverage(int num,...) {
    va_list valist;
    double sum = 0.0;
    int i;
    
    /* initialize valist for num number of arguments */
    va_start(valist, num);
    
    /* access all the arguments assigned to valist */
    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);
    }
    
    /* clean memory reserved for valist */
    va_end(valist);
    
    return sum/num;
}
