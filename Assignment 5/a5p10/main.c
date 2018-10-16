//
//  main.c
//  a5p10
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p10.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

/*calculates all the differen operations for the two values*/
void sumdiffproddiv(double a, double b, double *sum, double *diff, double *prod, double *div){
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    *div = a / b;
}

int main() {
    double a, b, sum, diff, prod, div;
    
    //asking user for integers
    printf("Enter an integer: ");
    scanf("%lf", &a);
    printf("Enter another integer: ");
    scanf("%lf", &b);

    //calling the function to calculate the inputted values
    sumdiffproddiv(a, b, &sum, &diff, &prod, &div);
    
    //printing the results
    printf("The sum is: %lf \n", sum);
    printf("The difference is: %lf \n", diff);
    printf("The product is: %lf \n", prod);
    printf("The division is: %lf \n", div);
    
    return 0;
}
