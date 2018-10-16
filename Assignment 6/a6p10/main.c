//
//  main.c
//  a6p10
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p10.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //delcaring the variables
    FILE *file1, *file2;
    char c;
    
    //opening the first file
    file1 = fopen("text.txt", "r");
    if (file1 == NULL){
        printf("File not open\n");
        exit(1);
    }
    
    //opening the copied file
    file2 = fopen("text_copy.txt", "w");
    if(file2 == NULL){
        printf("File not open\n");
        exit(1);
    }
    
    //copying the content from text(file1) to the text_copy by using the putc function
    while((c = getc(file1)) != EOF){
        putc(c, file2);
    }
    
    //close the files
    fclose(file1);
    fclose(file2);
    return 0;
}
