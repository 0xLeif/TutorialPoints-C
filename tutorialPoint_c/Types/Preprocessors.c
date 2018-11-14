//
//  Preprocessors.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Preprocessors.h"

/*
 #define: Substitutes a preprocessor macro.
 #include: Inserts a particular header from another file.
 #undef: Undefines a preprocessor macro.
 #ifdef: Returns true if this macro is defined.
 #ifndef: Returns true if this macro is not defined.
 #if: Tests if a compile time condition is true.
 #else: The alternative for #if.
 #elif: #else and #if in one statement.
 #endif: Ends preprocessor conditional.
 #error: Prints error message on stderr.
 #warning: Prints warning message on stderr.
 #pragma: Issues special commands to the compiler, using a standardized method.
 */

#undef  FILE_SIZE
#define FILE_SIZE 42

#ifndef MESSAGE
    #define MESSAGE "You wish!"
#endif

#pragma Error and Warning
//#error ERROR!?!
//#warning Warning!!!

void preprocessorPredefinedMacrosExample() {
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
}

/*
 // Preprocessor Operators
 The C preprocessor offers the following operators to help create macros −
 
 The Macro Continuation (\) Operator
 A macro is normally confined to a single line. The macro continuation operator (\) is used to continue a macro that is too long for a single line. For example −
 */
#define  message_for(a, b)  \
printf(#a " and " #b ": We love you!\n")

void preprocessorMessageExample() {
    message_for(Carole, Debra);
}

/*
 // The Token Pasting (##) Operator
 The token-pasting operator (##) within a macro definition combines two arguments. It permits two separate tokens in the macro definition to be joined into a single token. For example −
 */
#define tokenpaster(n) printf ("token" #n " = %d", token##n)

void preprocessorTokenPastingExample() {
    int token34 = 40;
    //It happened so because this example results in the following actual output from the preprocessor − tokenpaster(34);
    //    printf ("token34 = %d", token34);
    tokenpaster(34);
}

/*
 One of the powerful functions of the CPP is the ability to simulate functions using parameterized macros.
 */
#define square(x) ((x) * (x))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
