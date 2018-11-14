//
//  Structs.c
//  tutorialPoint_c
//
//  Created by Zach Eriksen on 11/13/18.
//  Copyright © 2018 ol. All rights reserved.
//

#include "Structs.h"

/// Arrays allow to define type of variables that can hold several data items of the same kind. Similarly structure is another user defined data type available in C that allows to combine data items of different kinds.
///
/// Structures are used to represent a record. Suppose you want to keep track of your books in a library. You might want to track the following attributes about each book
struct Book {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

void structExample() {
    Book book1;        /* Declare Book1 of type Book */
    Book book2;        /* Declare Book2 of type Book */
    
    /* book 1 specification */
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;
    
    /* book 2 specification */
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;
    
    /* print Book1 info */
    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);
    
    /* print Book2 info */
    printf("Book 2 title : %s\n", book2.title);
    printf("Book 2 author : %s\n", book2.author);
    printf("Book 2 subject : %s\n", book2.subject);
    printf("Book 2 book_id : %d\n", book2.book_id);
}

void structPrintBook(Book book) {
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
}

void structPrintBookPointer(Book *book) {
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book subject : %s\n", book->subject);
    printf("Book book_id : %d\n", book->book_id);
}

// MARK: Bit Fields
/*
 Source: https://www.tutorialspoint.com/cprogramming/c_structures.htm
 Bit Fields allow the packing of data in a structure. This is especially useful when memory or data storage is at a premium. Typical examples include −
 
 Packing several objects into a machine word. e.g. 1 bit flags can be compacted.
 
 Reading external file formats -- non-standard file formats could be read in, e.g., 9-bit integers.
 
 C allows us to do this in a structure definition by putting :bit length after the variable. For example −
 */

struct packed_struct {
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int f4:1;
    unsigned int type:4;
    unsigned int my_int:9;
} pack;

/*
 Here, the packed_struct contains 6 members: Four 1 bit flags f1..f3, a 4-bit type and a 9-bit my_int.
 
 C automatically packs the above bit fields as compactly as possible, provided that the maximum length of the field is less than or equal to the integer word length of the computer. If this is not the case, then some compilers may allow memory overlap for the fields while others would store the next field in the next word.
 */
