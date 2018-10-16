//
//  main.c
//  a4p3
//
//  Created by Jasmine Juwono on 22.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p3.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

double to_kilogram(int pound, int ounce){
    double p, o;
        /*The conversion given on the problem was in pounds/ounce to grams
         and not kilograms, therefore it should be further divided by 1000
         to get to kilograms. Moreover, it should be casted in double because
         int will cut the decimal places*/
    p = (double)pound * (453.6/1000);
    o = (double)ounce * (28.350/1000);
    
    return p + o;
}

int main() {
    
    char line [100];
    int po, ou;
    
    printf("Enter value for pounds ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &po);
    
    printf("Enter value for ounce ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &ou);
    
        //calling the to_kilogram function with the user input
    printf("The weight in kilograms is %lf \n", to_kilogram(po, ou));
    
    
    return 0;
}
