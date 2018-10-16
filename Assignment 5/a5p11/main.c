//
//  main.c
//  a5p11
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p11.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int count_char(char *str, char c){
    int count = 0;
    
    //comparing how many times char c is in char *i
    for (char *i = 0; i != '\0'; i++) {
        if (*i == c) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    char *str;
    
    //asking user to max length for the string
    printf("Enter an integer of max length: ");
    scanf("%d", &n);
    
    //allocating memory for str with length inputted
    str = (char*)malloc(sizeof(char)*n);
    
    //asking for that string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    scanf(str, "%s", str);
    
    //checks the occurance of each of these characters
    printf("The character 'B' occurs %d times\n", count_char(str, 'B'));
    printf("The character 'p' occurs %d times\n", count_char(str, 'p'));
    printf("The character 'i' occurs %d times\n", count_char(str, 'i'));
    printf("The character 'D' occurs %d times\n", count_char(str, 'D'));
    printf("The character 'z' occurs %d times\n", count_char(str, 'z'));
    
    return 0;
}
