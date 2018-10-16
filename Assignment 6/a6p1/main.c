//
//  main.c
//  a6p1
//
//  Created by Jasmine Juwono on 29.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p1.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <string.h>

void rec(char ch, int r, int c){
    int a, b;
    for (a = 0; a < r; a++){ /*Iterates through the for loop and printing
                              a new line for the number of rows, when the 
                              conditions are met*/
        printf("\n");
        for(b = 0; b < c; b++){ /*Iterates through the for loop for the 
                                 number of columns and prints the inputted
                                 character*/
            printf("%c ", ch);
    }
}
    printf("\n");
}

int main() {
    int y, z;
    char line[100], c;
    
    printf("Enter an integer ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &y);
    
    printf("Enter an integer ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &z);
    
    printf("Enter an character ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%c", &c);
   
    
    rec(c, y, z); //calling the void function
    return 0;

}


