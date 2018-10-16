//
//  main.c
//  a6p9
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p9.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaring variables
    int a, b;
    FILE *file1, *file2, *file3;
    
    //opening the first file
    file1 = fopen("int1.txt", "r");
    if (file1 == NULL){
        printf("File not open\n");
        exit(1);
    }
    fscanf(file1, "%d", &a); //scanning what's in the file
    
    //opening the second file
    file2 = fopen("int2.txt", "r");
    if (file2 == NULL){
        printf("File not open\n");
        exit(1);
    }
    fscanf(file2, "%d", &b); //scanning what's in the file
    
    //creating the output file
    file3 = fopen("output.txt", "w");
    if(file3 == NULL){
        printf("File not open\n");
        exit(1);
    }
    
    fprintf(file3, "%d", a + b); //printing the sum from the created output file3
    
    //closing all the files
    fclose(file1);
    fclose(file2);
    fclose(file3);
    
    return 0;
}
