//
//  FileInput.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "FileInput.h"

/*
 A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices. This chapter will take you through the important calls for file management.
 */

void fileInputExample() {
    FILE *fp;
    
    fp = fopen("/tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}

void fileInputReadingExample() {
    FILE *fp;
    char buff[255];
    
    fp = fopen("/tmp/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff);
    
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);
    
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff);
    fclose(fp);
}

/*
 // Binary I/O Functions
 There are two functions, that can be used for binary input and output −
 
 size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
 
 size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
 Both of these functions should be used to read or write blocks of memories - usually arrays or structures.
 */
