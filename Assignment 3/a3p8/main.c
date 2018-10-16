//
//  main.c
//  a3p8
//
//  Created by Jasmine Juwono on 25.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p8.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    char line[100], ch;
    int n, s, m;
    
    printf("Enter an upper case character ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%c", &ch);
    
    printf("Enter a integer ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &n);
    
    /*if statement that checks whether the inputted integer is 
     between 0 and 32 by using the boolean OR*/
    if (n <= 0 || n >= 32){
        printf("The number inputted is not within range");
            return 1;
        }
    
    /*for statement that checks if the inputted character is in uppercase
     by using the boolean operator OR*/
    for(s = 0; s <= n; s++){
        m = ch + s;
        if (m >= 'Z' || m <= 'A'){
            printf("The letter inputted is not in uppercase \n");
            return 1;
        }
        printf("%c \n", m);
    }

    return 0;
}
