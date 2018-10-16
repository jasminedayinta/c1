//
//  main.c
//  a5p2
//
//  Created by Jasmine Juwono on 28.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p2.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <string.h>

int main() {
    
    /*initializing and declaring the char c of 80 spaces, as specified
     in the problem*/
    char line[100];
    int i = 0, j;
    
    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);
    line[strlen(line) - 1] = '\0';
    
    /* The first for loop iterates through the inputted string. While it checks
     the character, it also increments the number of spaces for every new line, so that
     it is diagonal. This is done by the second for loop*/
    for(j = 0; j <= strlen(line); j++)
    {
        printf("%c \n", line[i]);
        for(i = 0; i <= j; i++)
        {
            printf(" ");
        }
    }
    
    return 0;
}
