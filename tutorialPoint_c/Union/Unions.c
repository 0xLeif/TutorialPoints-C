//
//  Unions.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Unions.h"

/// A union is a special data type available in C that allows to store different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time. Unions provide an efficient way of using the same memory location for multiple-purpose.
union Data {
    int i;
    float f;
    char str[20];
};

void unionSizeExample() {
    Data data;
    
    printf("Memory size occupied by data : %d\n", sizeof(data));
}

void unionCorruptedExample() {
    Data data;
    
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");
    
    printf("data.i : %d\n", data.i); // Corrupted
    printf("data.f : %f\n", data.f); // Corrupted
    printf("data.str : %s\n", data.str); // C Programming
}

void unionExample() {
    Data data;
    
    data.i = 10;
    printf("data.i : %d\n", data.i);
    
    data.f = 220.5;
    printf("data.f : %f\n", data.f);
    
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);
}
