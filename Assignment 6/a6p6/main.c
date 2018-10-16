//
//  main.c
//  a6p6
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p6.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

/*recursive function that calls itself again when the two values
 inputted are not equal to each other*/
int recur(int n, int m){
    if(n == m){
        return n;
    } else {
        return n + recur(n + 1, m);
    }
}

int main() {
    int n, m;
    
    //asking user for input
    printf("Enter the first value ");
    scanf("%d", &n);
    printf("Enter the second value ");
    scanf("%d", &m);
    
    //printing the result by calling the recur function
    printf("The sum of the natural numbers between the two values inputted is %d\n", recur(n, m));
    
    return 0;
}
