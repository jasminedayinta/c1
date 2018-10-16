//
//  main.c
//  a2p5
//
//  Created by Jasmine Juwono on 17.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a2.p5.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    
    //declaring variables
    int val;
    char line[100];
    
    //asking the user for a value and displaying it on screen
    printf("Enter a value: ");
    fgets(line, sizeof(val), stdin);
    sscanf (line, "%i", &val);
    printf("You've just entered: %i\n", val);
    
    //using pointer to increment
    int *ptr_val;
    ptr_val = &val;
    printf("The address contained is %p\n", ptr_val);
    *ptr_val = *ptr_val + 1;
    printf("The modified value now is %i\n", val);
    printf("The modified address now is %p\n", ptr_val);
    
    return 0;
}
