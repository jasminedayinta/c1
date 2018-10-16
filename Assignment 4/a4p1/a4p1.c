//
//  main.c
//  a4p1
//
//  Created by Jasmine Juwono on 22.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p1.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/
    
#include <stdio.h>

int length(char str[]) {
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != '\0'; ++idx){} /*the for loop doesn't do anything
                                               which is why you have the open bracket
                                              and then closed one straight after*/
    /* do nothing */
        return idx;
}

int main() {
        
    char line[100];
    
    while(1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("Length (including newline) is: %d\n", length(line));
    }
    return 0;
}
