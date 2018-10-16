//
//  main.c
//  a2p2
//
//  Created by Jasmine Juwono on 15.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a2.p2.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
    int main() {
        int shoes;
        char line[100];
        
        printf("Enter an int value: ");
        fgets(line, sizeof(shoes), stdin);
        sscanf (line, "%d", &shoes);

        printf("The value in decimal is %d \n ", shoes);
        printf("The value in octal is %o \n ", shoes);
        printf("The value in hexadecimal is %x \n ", shoes);

    return 0;
}
