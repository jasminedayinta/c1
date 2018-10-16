//
//  main.c
//  Assignment1
//
//  Created by Jasmine Juwono on 17.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a1.p1.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    float answer;
    answer = 1.0/8.0;
    printf("The value of 1/8 is %f\n", answer);
    return 0;
    
   }

/*The reason why the result is 0.000 is because the variable 'answer' is a float, however,
 the values given are integers. When integers are given to a float, it rounds to the lowest who
 integer, which in this case is 0.000. To output the correct answer, the integers 1 and 8 needs to
 be floats by adding ".0"*/
