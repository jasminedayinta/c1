//
//  main.c
//  a2p4
//
//  Created by Jasmine Juwono on 17.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a2.p4.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    
    //declaring the variables in double, just in case if the user inputs any decimal values
    double cel, fahr;
    char line[100];
    
    //asks the user to input a value and the program scans it
    printf("Enter a value in Degree Celsius: ");
    fgets(line, sizeof(cel), stdin);
    sscanf (line, "%lf", &cel);
    
    //calculations for converting celsius to fahrenheit
    fahr = ((9.0/5.0) * cel) + 32.0;
    
    //stating the equation to the user as well as telling them the answer
    printf("The equation used to convert from celsius to fahrenheit is: F=(9/5)C + 32. If the given input is plugged into the equation, the result would be %lf\n", fahr);
    
    return 0;
}
