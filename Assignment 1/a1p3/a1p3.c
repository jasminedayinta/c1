//
//  main.c
//  a1p3
//
//  Created by Jasmine Juwono on 17.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a1.p3.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    double result;
    double divisor = 22.0; //22.0 should be assigned to a double instead of integer because the final result is         in double
    result = 7.0 / divisor; // 7 here should also be a double by adding ".0" in order for the final result to be a double, as intended
    printf("The result is %f\n", result);
    
    return 0;
}

