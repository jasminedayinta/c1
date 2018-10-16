//
//  main.c
//  a1p4
//
//  Created by Jasmine Juwono on 18.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a1.p4.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    //declaring variable
    int sum, product, difference, remainder;
    double divide;
    
    //assigning the values to the variables
    int a = 37;
    int b = 14;
    
    sum = a + b; //addition of the two variables
    printf("The sum of a and b is %i\n", sum);
    
    product = a * b; // multiplication of the two variables
    printf("The product of a and b is %i\n", product);
    
    difference = a - b; //subtraction of the two variables
    printf("The difference between a and b is %i\n", difference);
    
    divide = 37.0 / 14.0; //since a and b were assigned as integer and the variable divide needs to be a double, we must rewrite a and b, but this time in double so that our result is also a double
    printf("The result of a/b is %f\n", divide);
    
    remainder = a % b; //Calculation for the remainder using modulo
    printf("The remainder of the division is %i\n", remainder);
    
    printf("The value of a is: %i\n", a);
    printf("The value of b is: %i\n", b);
    return 0;
    
}
