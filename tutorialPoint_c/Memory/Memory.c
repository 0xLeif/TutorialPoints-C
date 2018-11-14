//
//  Memory.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Memory.h"

/*
 The C programming language provides several functions for memory allocation and management. These functions can be found in the <stdlib.h> header file.
 
void *calloc(int num, int size);
    This function allocates an array of num elements each of which size in bytes will be size.
 
void free(void *address);
    This function releases a block of memory block specified by address.
 
void *malloc(int num);
    This function allocates an array of num bytes and leave them uninitialized.
 
void *realloc(void *address, int newsize);
    This function re-allocates memory extending it upto newsize.
 */

void memoryBasicMallocExample() {
    char name[100];
    char *description;
    
    strcpy(name, "Zara Ali");
    
    /* allocate memory dynamically */
    #warning Same program can be written using calloc(); only thing is you need to replace malloc with calloc as follows − calloc(200, sizeof(char));
    description = malloc(200 * sizeof(char));
    
    if(description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
}

void memoryBasicReallocAndReleaseExample() {
    char name[100];
    char *description;
    
    strcpy(name, "Zara Ali");
    
    /* allocate memory dynamically */
    description = malloc(30 * sizeof(char));
    
    if(description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student.");
    }
    
    /* suppose you want to store bigger description */
    description = realloc(description, 100 * sizeof(char));
    
    if(description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, "She is in class 10th");
    }
    
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
    
    /* release memory using free() function */
    free(description);
}
