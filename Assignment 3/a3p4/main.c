//
//  main.c
//  a3p4
//
//  Created by Jasmine Juwono on 22.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p4.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    
    char line[100];
    int o;
    int s;
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
    
    /*the code that outputs the number of seconds according to the inputted integer,
     in terms of minutes, by using while loop. Inside the while loop, there is the
     simple calculation of 60 * number of minutes*/
    
    if (o >= 1){
        printf("1 minute is 60 seconds \n");
        
        s = 2;
        
        while (s <= o){
            p = 60 * s;
            printf("%d minutes are %d seconds \n", s, p);
            s++;
        }
    }
    return 0;
}
