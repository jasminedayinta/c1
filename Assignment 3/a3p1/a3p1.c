//
//  main.c
//  a3p1
//
//  Created by Jasmine Juwono on 21.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p1.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

    int main() {
        int n = 2;
       
        while (n < 6) { /*The problem is located on this line
            where the brackets weren't implemented. This allows 
            for the while statement to go on forever because it 
            doesn't specify from which line to which line
            should the while program start and end from*/
            
            printf("n is %d\n", n);
            n++;
        }
        printf("That’s it.\n");
        
    return 0;
}
