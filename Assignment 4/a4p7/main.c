//
//  main.c
//  a4p7
//
//  Created by Jasmine Juwono on 26.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p7.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

//calculations for the sum, which is simply just adding a and b because they are not void
double sum(double a, double b){
    return a +b;
}

//summing the two values using a reference, it should output the same result as the first function
void sumbyref(double a, double b, double *s){
    *s = a + b;
}

/*swapping the two values by assigning a with a temporary
 variable and then switching the a and b, which makes b now
 equal to the temporary variable*/
void swapbyref(double *a, double *b){
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double c, d, e, s_res;
    printf("Enter two double values: ");
    scanf("%lf %lf", &c, &d);
    
    s_res = sum(c, d);
    printf("%lf \n", s_res); //printing out the sum by calling the existing function
    
    sumbyref(c, d, &e);
    printf("%lf \n", e);//printing out the sum (by reference) by calling the existing function
    
    swapbyref(&c, &d);
    printf("The result after the swap is: %lf %lf \n", c, d); //printing the swapped values
    
    return 0;
}
