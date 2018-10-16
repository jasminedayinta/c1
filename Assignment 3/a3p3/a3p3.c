//
//  main.c
//  a3p3
//
//  Created by Jasmine Juwono on 21.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p3.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    char line[100], j;
    int a;
    
    printf("Enter one letter in either lower or upper case: ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%c", &j);
    
    //casting the input into an integer in order to compare the character with ASCII
    a = (int)j;
    
    /*if statement comparing the integer with the ASCII table because 
     lower or upper case are associated with integers that are in a 
     range, for example lower case is from 97 to 122 and upper case is from
     65 to 90*/
    if( a >= 97 && a <= 122){
        printf("The character inputted is in lower case \n");
    }else{
        printf("The character inputted is in upper case \n");
    }
    
    return 0;
}
