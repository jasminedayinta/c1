//
//  main.c
//  a4p2
//
//  Created by Jasmine Juwono on 22.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p2.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

/*this is the function that converts 
 from mm to m*/
double convert (int mm){
    return mm * 0.001;

}

/*In this main function, the double convert function
 is called by writing convert(m) because m is the
 integer inputted by the user. Therefore, that integer
 is now being executed in the double convert function*/
 
int main() {
    char line [100];
    int m;
    
    printf("Enter an integer (mm) ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &m);
    
    printf("The integer in meters is %lf \n", convert(m));
    return 0;
}
