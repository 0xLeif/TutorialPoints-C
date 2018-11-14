//
//  Loops.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Loops.h"

void forLoopExample() {
    int a;
    
    /* for loop execution */
    for( a = 10; a < 20; a = a + 1 ){
        printf("value of a: %d\n", a);
    }
}

void whileLoopExample() {
    /* local variable definition */
    int a = 10;
    
    /* while loop execution */
    while( a < 20 ) {
        printf("value of a: %d\n", a);
        a++;
    }
}

void doWhileLoopExample() {
    /* local variable definition */
    int a = 10;
    
    /* do loop execution */
    do {
        printf("value of a: %d\n", a);
        a = a + 1;
    }while( a < 20 );
}

void nestedForLoopExample() {
    /* local variable definition */
    int i, j;
    
    for(i = 2; i<100; i++) {
        
        for(j = 2; j <= (i/j); j++)
            if(!(i%j)) break; // if factor found, not prime
        if(j > (i/j)) printf("%d is prime\n", i);
    }
}
