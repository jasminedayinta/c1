//
//  main.c
//  a4p8
//
//  Created by Jasmine Juwono on 26.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p8.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <string.h> //a built-in library that we could use

int length(char c[]){
    int i;
    for(i = 0; c[i] != '\0'; ++i){ /*empty for loop because the program is
                                   already calculating the length by itself*/
    }
    return i - 1;
}

int main() {
    
    char line [100], line2 [100], line3[100];
    
    printf("Enter string: ");
    fgets(line, sizeof(line), stdin);
    
    printf("Enter another string: ");
    fgets(line2, sizeof(line2), stdin);
   
    int x;
    int y; //initializing and declaring the variables with the char
    x = length(line);
    y = length(line2);
    
    strcpy(line3, line);
    strcat(line, line2);
    //printing out the strings that were just inputted
    printf("%s \n", line);
    printf("%s", line3);
    
    int j;
    j = strcmp(line3, line2); /*comparing the two strings to see which string is
                               the shortest, in terms of length*/
    if(j < 0){
        printf("The second string is shorter than the first string \n");
    }else if(j > 0){
        printf("The first string is shorter than the second string \n");
    }else{
        printf("Both strings are the same size");
    }
    
    char g;
    printf("Enter any character to search: ");
    scanf("%c", &g); /*scanning the character inputted by the user, which will then
                      be used when checking if this specific character occurs in the string*/
    int m;
    for (m = 0; m < x; m++){
        if(line[m] == g){
            printf("The character you've inputted is at position %d \n", m);
            break;
        }
    }
    
    return 0;
}
