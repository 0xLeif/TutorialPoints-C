//
//  Pointers.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Pointers.h"

#define MAX 3

void pointerExample() {
    int  var = 20;   /* actual variable declaration */
    int  *ip;        /* pointer variable declaration */
    
    ip = &var;  /* store address of var in pointer variable*/
    
    printf("Address of var variable: %x\n", &var );
    
    /* address stored in pointer variable */
    printf("Address stored in ip variable: %x\n", ip);
    
    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n", *ip);
}

void pointerNullExample() {
    int  *ptr = NULL;
    
    printf("The value of ptr is : %x\n", ptr );
}

// MARK: Pointer Arithmetic

void pointerIncrementing() {
    int  var[] = {10, 100, 200};
    int  i, *ptr;
    
    /* let us have array address in pointer */
    ptr = var;
    
    for (i = 0; i < MAX; i++) {
        
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);
        
        /* move to the next location */
        ptr++;
    }
}

void pointerDecrementing() {
    int  var[] = {10, 100, 200};
    int  i, *ptr;
    
    /* let us have array address in pointer */
    ptr = &var[MAX-1];
    
    for (i = MAX; i > 0; i--) {
        
        printf("Address of var[%d] = %x\n", i-1, ptr);
        printf("Value of var[%d] = %d\n", i-1, *ptr);
        
        /* move to the previous location */
        ptr--;
    }
}

void pointerComparisons() {
    int  var[] = {10, 100, 200};
    int  i, *ptr;
    
    /* let us have address of the first element in pointer */
    ptr = var;
    i = 0;
    
    while (ptr <= &var[MAX - 1]) {
        
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);
        
        /* point to the previous location */
        ptr++;
        i++;
    }
}


void pointerDoubleExample() {
    int  var;
    int  *ptr;
    int  **pptr;
    
    var = 3000;
    
    /* take the address of var */
    ptr = &var;
    
    /* take the address of ptr using address of operator & */
    pptr = &ptr;
    
    /* take the value using pptr */
    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n", **pptr);
}
