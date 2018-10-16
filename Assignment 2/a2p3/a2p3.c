//
//  main.c
//  a2p3
//
//  Created by Jasmine Juwono on 17.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a2.p3.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    
    //declaring the variables
    int hour, min, sec, thour, tmin, result;
    char line[100];
    
    //asking the user for inputs
    printf("Enter number of hours: ");
    fgets(line, sizeof(hour), stdin);
    sscanf (line, "%i", &hour);
    
    printf("Enter number of minutes: ");
    fgets(line, sizeof(min), stdin);
    sscanf (line, "%i", &min);
    
    printf("Enter number of seconds: ");
    fgets(line, sizeof(sec), stdin);
    sscanf (line, "%i", &sec);
    
    //calculations for converting from hours and minutes to seconds
    thour = hour * 3600;
    
    tmin = min * 60;
    
    //Add all the seconds together to get the total result
    result = thour + tmin + sec;
    printf("The total seconds for all given inputs is %i\n", result);
    
    return 0;
    
}
