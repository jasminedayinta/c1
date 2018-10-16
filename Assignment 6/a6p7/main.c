//
//  main.c
//  a6p7
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p7.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

//recursive function that calculates the greatest common divisor
int gcd(int a, int b){
    if (a == 0){
        return b;
    } else {
        return gcd(b % a, a); /*If the gcd is the second number, then the remainder
                               must be calculated by taking the modulo of the two 
                               integers*/
    }
}

int main() {
    int a, b;
    
    //asking user for values
    printf("Enter the first value ");
    scanf("%d", &a);
    printf("Enter the second value ");
    scanf("%d", &b);
    
    //printing the result by calling the recursive function
    printf("The greatest common divisor between the two values is %d\n", gcd(a, b));
    
    return 0;
}
