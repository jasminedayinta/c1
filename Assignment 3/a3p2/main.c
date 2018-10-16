//
//  main.c
//  a3p2
//
//  Created by Jasmine Juwono on 21.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p2.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    char line[100];
    int shirt;
    
    //asking the user for input
    printf("Enter an integer ");
    fgets(line, sizeof(shirt), stdin);
    sscanf (line, "%d", &shirt);
    
    /*calculations using modulo and if statements to see if the integer 
     inputted is divisible by 4 and 7*/
    if (shirt % 4 == 0 && shirt % 7 == 0){
        printf("The number inputted is divisible by 4 and 7");
    }
    else{
        printf("The number inputted is not divisible by 4 and 7 \n");
    }

    return 0;
}
