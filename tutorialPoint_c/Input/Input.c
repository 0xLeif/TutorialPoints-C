//
//  Input.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Input.h"

/// The int getchar(void) function reads the next available character from the screen and returns it as an integer. This function reads only single character at a time. You can use this method in the loop in case you want to read more than one character from the screen.
void inputGetCharExample() {
    int c;
    
    printf("Enter a value :");
    c = getchar();
    
    printf("\nYou entered: ");
    putchar(c);
}

/// The char *gets(char *s) function reads a line from stdin into the buffer pointed to by s until either a terminating newline or EOF (End of File).
void inputGetsExample() {
    char str[100];
    
    printf("Enter a value :");
    gets(str);
    
    printf("\nYou entered: ");
    puts(str);
}

/// The int scanf(const char *format, ...) function reads the input from the standard input stream stdin and scans that input according to the format provided.
void inputScanfExample() {
    char str[100];
    int i;
    
    printf("Enter a value :");
    scanf("%s %d", str, &i);
    
    printf("\nYou entered: %s %d ", str, i);
}
