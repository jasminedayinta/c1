//
//  main.c
//  a5p5
//
//  Created by Jasmine Juwono on 04.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//
/* JTSK-320111
 a5.p5.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <string.h>

int count_consonants(char *str){
    int num = 0;
    char pointer[100];
    
    strcpy(pointer, str); //copying the one string to another
    
    //checking whether the character is a consonant, both lower and upper case
    for (str = pointer; *str != '\0'; str++){
        if (*str != ' ' && *str != 'A' && *str != 'I' && *str != 'U' && *str != 'O' &&
            *str != 'E' && *str != 'a' && *str != 'i' && *str != 'u' &&
            *str != 'o' && *str != 'e') {
            num++;
        }
    }
    return num;
}


int main() {
    char line[100];
    
    while(*line != '\n'){
        printf("Enter a string ");
        fgets(line, sizeof(line), stdin);
        
        /*calling the count_consonants function to calculate the number 
         of consonants according to the input string*/
        if(*line != '\n') {
            printf("The number of consonants in the string is: %d\n", count_consonants(line));
        }
    }
    
    return 0;
}
