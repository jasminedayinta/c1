//
//  main.c
//  a6p3
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p3.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_upper(char* str){
    int count = 0;
    
    /*for loop that checks whether the character is 
     in upper case or not by using the isupper function.
     If it's true, count increases*/
    for (char *j = str; *j != '\0'; j++){
        if(isupper(*j)) {
            count++;
        }
    }
    return count;
}

int main() {
    char line[100], str[100];
    
    //asking the user for input
    while(strcmp(str, "\n") != 0){
        printf("Enter a string \n");
        fgets(line, sizeof(line), stdin);
        
        /*if what's entered is empty, then the program ends. Otherwise,
        the proram outputs the number of upper case letters by calling the 
        count_upper function*/
        if(line[0] == '\n'){
            break;
        }else{
            printf("There are this many uppercase letters %d \n", count_upper(line));
        }
    }
    return 0;
}
