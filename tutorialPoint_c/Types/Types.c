//
//  Types.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Types.h"

#define PI 3.14

// Uses float.h
void basicFloatTypes() {
    printf("Storage size for float : %lu \n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN );
    printf("Maximum float positive value: %E\n", FLT_MAX );
    printf("Precision value: %d\n", FLT_DIG );
}

extern int a, b, c;
extern float f;
void externVariables() {
    /* variable definition: */
    int a, b;
    int c;
    float f;
    
    /* actual initialization */
    a = 10;
    b = 20;
    
    c = a + b;
    printf("value of c : %d \n", c);
    
    f = 70.0/3.0;
    printf("value of f : %f \n", f);
}

void constTest() {
    const int  LENGTH = 10;
    const int  WIDTH = 5;
    const char NEWLINE = '\n';
    int area;
    
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
}
