//
//  main.c
//  a6p8
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p8.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char c;
    
    //opening the first file
    file1 = fopen("char.txt", "r");
    if (file1 == NULL){
        printf("File not open\n");
        exit(1);
    }
    
    //opening the second file
    file2 = fopen("code.txt", "w");
    if (file2 == NULL){
        printf("File not open\n");
        exit(1);
    }
    
    //getting the first file
    c = getc(file1);
    
    //printing the second file according to what's obtained from the first file
    fprintf(file2, "%d", (int)c);
    
    //closing the files
    fclose(file1);
    fclose(file2);
    
    return 0;
}
