//
//  BitFields.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "BitFields.h"

/* define simple structure */
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* define a structure with bit fields */
struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

void bitFieldMemorySizeExample() {
    printf("Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf("Memory size occupied by status2 : %lu\n", sizeof(status2));
}

/// The variables defined with a predefined width are called bit fields. A bit field can hold more than a single bit; for example, if you need a variable to store a value from 0 to 7, then you can define a bit field with a width of 3 bits as follows −
struct {
    unsigned int age : 3;
} Age;

void bitFieldAgeExample() {
    Age.age = 4;
    printf("Sizeof(Age) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);
    
    Age.age = 7;
    printf("Age.age : %d\n", Age.age);
    
    Age.age = 8;
    printf("Age.age : %d\n", Age.age);
}
