//
//  main.c
//  a3p5
//
//  Created by Jasmine Juwono on 25.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p5.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
        
    char line[100];
    int o;
    int p;
        
    printf("Enter an integer ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &o);
        
    //The while loop checks whether the inputted integer is non-zero and positive
    while (o <= 0){
        printf("Please enter a positive value: ");
        fgets(line, sizeof(line), stdin);
        sscanf (line, "%d", &o);
    }
    /*A for loop that iterates the number of minutes into seconds and it starts at minute 1 (s=1)
     because 0 minutes will just be 0 seconds. Moreover, int s has to be equal to and
     less than the inputted integer, and int s increases each time*/
    int s;
    for (s = 1; s <= o; s++){
        p = 60 * s;
        printf("%d minutes is %d seconds \n", s, p);
    }
    
    return 0;
}

