//
//  ArrayOfPointers.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "ArrayOfPointers.h"

#define MAX 3

void AOPBasicExample() {
    int  var[] = {10, 100, 200};
    int i, *ptr[MAX];
    
    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; /* assign the address of integer. */
    }
    
    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
}

void AOPBasicCharArrayExample() {
    char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali"
    };
    
    int i = 0;
    
    for (i = 0; i < MAX; i++) {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
}
