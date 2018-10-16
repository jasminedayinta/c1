//
//  main.c
//  a5p13
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p13.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void mixcase(char *str) {
    long a = strlen(str); //determines the length of the inputted string
    int i;
    
    //switching the upper and lower cases
    for (i = 0; i < a; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]); //putting it in the array
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);//putting it in the array
        }
    }
}
        
        
int main() {
    char str[80], line [100];
    
    while (strcmp(str, "quit") != 0){ //as long as "quit" is not entered
        printf("Enter a string "); //asking user for the string
        fgets(str, sizeof(line), stdin);
        sscanf(line, "%s", str);
        
        printf("\nThe original string is: %s", str); //printing the original string
        mixcase(str); //calling the function for the mixing
        printf("The string after mixing is: %s\n", str);//printing the modified string now
    }
    return 0;
}
