//
//  main.c
//  a5p12
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p12.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <string.h>

void myreplace(char *str, char c, char e){
    long a = strlen(str);//determines the length of the inputted string
    int i;
    
    for(i = 0; i < a; i++){
        if(str[i] == c){ /*checking if the character being checked
                          is equal to the character is it asked to
                          be replaced*/
            str[i] = e;/*if that is the case, it is then set equal
                        to the new character e, that is inputted 
                        by the use*/
        }
    }
}

int main() {
    char str[70], line [100];
    char c, e;

    while (strcmp(str, "quit") != 0){ //as long as "quit" is not entered
        printf("Enter a string "); //asking user for the string
        fgets(str, sizeof(line), stdin);
        sscanf(line, "%s", str);
        
        printf("Enter the replacement "); //asking for which character to be replaced
        scanf("%c", &c);
        getchar();
        printf("Enter the character being replaced ");//asking what to replace it with
        scanf("%c", &e);
        getchar();
        
        printf("\nThe original string is: %s", str); //printing the original string
        myreplace(str, c, e); //calling the function according to what the user inputted
        printf("The modified string is: %s\n", str);//printing the modified string now
        }
    return 0;
}
