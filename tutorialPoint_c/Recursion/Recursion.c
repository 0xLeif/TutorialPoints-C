//
//  Recursion.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Recursion.h"

unsigned long long int recursionFactorial(unsigned int i) {
    if(i <= 1) {
        return 1;
    }
    return i * recursionFactorial(i - 1);
}

int recursionFibonacci(int i) {
    if(i == 0) {
        return 0;
    }
    
    if(i == 1) {
        return 1;
    }
    return recursionFibonacci(i-1) + recursionFibonacci(i-2);
}
