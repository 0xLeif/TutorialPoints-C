//
//  Functions.h
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#ifndef Functions_h
#define Functions_h

#include <stdio.h>

/*
 To use such functionality, you need to make use of stdarg.h header file which provides the functions and macros to implement the functionality of variable arguments and follow the given steps −
 
 Define a function with its last parameter as ellipses and the one just before the ellipses is always an int which will represent the number of arguments.
 
 Create a va_list type variable in the function definition. This type is defined in stdarg.h header file.
 
 Use int parameter and va_start macro to initialize the va_list variable to an argument list. The macro va_start is defined in stdarg.h header file.
 
 Use va_arg macro and va_list variable to access each item in argument list.
 
 Use a macro va_end to clean up the memory assigned to va_list variable.
 */
#include <stdarg.h>

int functionMax(int num1, int num2);
void functionSwap(int x, int y);
void functionSwap_ptr(int *x, int *y);
double functionAverage(int num,...);

#endif /* Functions_h */
