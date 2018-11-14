//
//  Errors.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Errors.h"

/*
 errno, perror(). and strerror()
 The C programming language provides perror() and strerror() functions which can be used to display the text message associated with errno.
 
 The perror() function displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.
 
 The strerror() function, which returns a pointer to the textual representation of the current errno value.
 */
extern int errno;

void errorExample() {
    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");
    
    if (pf == NULL) {
        
        errnum = errno;
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
    } else {
        
        fclose (pf);
    }
}

void errorDivideByZeroExample() {
    int dividend = 20;
    int divisor = 0;
    int quotient;
    
    if(divisor == 0){
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(-1);
    }
    
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient);
}

void errorExitStatusExample() {
    int dividend = 20;
    int divisor = 5;
    int quotient;
    
    if(divisor == 0) {
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(-1);
    }
    
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient);
    
    exit(0);
}
