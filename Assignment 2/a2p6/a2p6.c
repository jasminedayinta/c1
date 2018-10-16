//
//  main.c
//  a2p6
//
//  Created by Jasmine Juwono on 17.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a2.p6.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    
    //declaring variables
    float a, b;
    char line[100];
    
    //asking user for input
    printf("Enter the first float value: ");
    fgets(line, sizeof(a), stdin);
    sscanf (line, "%f", &a);
    
    printf("Enter the first float value: ");
    fgets(line, sizeof(b), stdin);
    sscanf (line, "%f", &b);
    
    //declaring and initializing pointers
    float *ptr1, *ptr2, *ptr3;
    ptr1 = &a;
    ptr2 = &a;
    ptr3 = &b;
    
    printf("The memory address for ptr1 is: %p\n", ptr1);
    printf("The memory address for ptr2 is the same as ptr1: %p\n", ptr2);
    printf("ptr3 contains a different memory: %p\n", ptr3);

    return 0;
}
