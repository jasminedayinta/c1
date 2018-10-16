//
//  main.c
//  a5p4
//
//  Created by Jasmine Juwono on 04.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p4.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]){
    int num = 0;
    int i;
    long a;
    a = strlen(str) - 1; //number of characters including space
    
    //checking whether the character is a consonant, both lower and upper case
    for (i = 0; i < a; i++){
        if (str[i] != 'A' && str[i] != 'I' && str[i] != 'U' && str[i] != 'O' &&
            str[i] != 'E' && str[i] != 'a' && str[i] != 'i' && str[i] != 'u' &&
            str[i] != 'o' && str[i] != 'e') {
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
        
        /*calling the count_consonants function to calculate the number of consonants according to the input string*/
        if(*line != '\n') {
            printf("The number of consonants in the string is: %d\n", count_consonants(line));
        }
    }
    
    return 0;
}
