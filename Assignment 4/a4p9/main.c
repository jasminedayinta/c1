//
//  main.c
//  a4p9
//
//  Created by Jasmine Juwono on 26.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p9.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <string.h>

//everything is the same as problem 8, except the very last bit of the program
int length(char c[]){
    int i;
    for(i = 0; c[i] != '\0'; ++i){
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
    int y;
    x = length(line);
    y = length(line2);
    
    strcpy(line3, line);
    strcat(line, line2);
    printf("%s \n", line);
    printf("%s", line3);
    
    int j;
    j = strcmp(line3, line2);
    
    if(j < 0){
        printf("The second string is shorter than the first string \n");
    }else if(j > 0){
        printf("The first string is shorter than the second string \n");
    }else{
        printf("Both strings are the same size");
    }
    
    char g;
    printf("Enter any character to search: ");
    scanf("%c", &g);
    
    /*The difference between problem 8 and 9 is that printf is now located outside of
     the loop and another printf is added inside the if statement that will now allow the 
     program to print all positions that the character appears at*/
    int m;
    printf("The character we're looking is at position: ");
    for (m = 0; m < x; m++){
        if(line[m] == g){
            printf("%d ", m);
        }
    }
    return 0;

}

