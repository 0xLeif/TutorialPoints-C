//
//  Unions.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Unions.h"

union Data {
    int i;
    float f;
    char str[20];
};

void unionSizeExample() {
    Data data;
    
    printf( "Memory size occupied by data : %d\n", sizeof(data));
}

void basicUnionExample() {
    Data data;
    
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");
    
    printf( "data.i : %d\n", data.i); // Corrupted
    printf( "data.f : %f\n", data.f); // Corrupted
    printf( "data.str : %s\n", data.str); // C Programming
}

void basicUnionExample2() {
    Data data;
    
    data.i = 10;
    printf( "data.i : %d\n", data.i);
    
    data.f = 220.5;
    printf( "data.f : %f\n", data.f);
    
    strcpy( data.str, "C Programming");
    printf( "data.str : %s\n", data.str);
}
