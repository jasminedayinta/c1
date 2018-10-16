//
//  main.c
//  a5p1
//
//  Created by Jasmine Juwono on 28.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p1.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    
    int s_row, e_row, a;
    char line[100];
    
    printf("Enter an integer: ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &e_row);
    
    printf("Enter another integer: ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &s_row);
    
    /*In the for loop, int a starts by being equal to lower bound
     of the inputted integer. It then iterates through the for loop
     until it reaches the end value, again inputted by the user. 
     It then prints the values, casted with (float) because a is an integer
     and the problem asks us to print it with precision of 3 places, which
     only floating point numbers are able to do*/
    for (a = e_row; a <= s_row; a++){
            printf("%12.3f %12.3f %12.3f\n", (float)a, (float)a*a, (float)a*a*a);
        }
    
    return 0;
}
