//
//  main.c
//  a6p5
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p5.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//function that calculates the norm according to the given equation
double norm(double *v, int n){
    double s = 0;
    int i;
    
    for (i = 0; i < n; i++){
        s += v[i] * v[i];
    }
    return sqrt(s);
}

//function that finds the smallest value
double smallest(double *v, int n){
    double small = v[0];
    int i;
    for(i = 0; i < n; i++){
        if (v[i] < small){
            small = v[i];
        }
    }
    return small;
}

//function that finds the largest value
double largest (double *v, int n){
    double large = v[0];
    int i;
    for(i = 0; i < n; i++){
        if (large < v[i]){
            large = v[i];
        }
    }
    return large;
}

//function that returns the position of the smallest value
int sposition(double *v, int n){
    double small = v[0];
    int sp = 0;
    int i;
    for(i = 0; i < n; i++){
        if (v[i] < small){
            small = v[i];
            sp = i;
        }
    }
    return sp + 1;/*one is added because when counting the position of an 
                   element of an array, it starts at 0, therefore when returning 
                   the value, 1 should be added*/
}

//function that returns the position of the largest value
int lposition(double *v, int n){
    double large = v[0];
    int lp = 0;
    int i;
    for(i = 0; i < n; i++){
        if (large < v[i]){
            large = v[i];
            lp = i;
        }
    }
    return lp + 1; //same case as when finding position of the smallest value
}

int main() {
    //declaring variables
    double *v;
    int n, i;
    
    //asking user for total number of elements
    printf("Enter total number of elements ");
    scanf("%d", &n);
    
    //allocating memory for the array
    v = (double*)malloc(sizeof(double)* n);
    
    //filling in the array
    for(i = 0; i < n; i++){
        printf("Enter an integer ");
        scanf("%lf", &v[i]);
    }
    
    //outputting all the results according to what the users have inputted
    printf("The norm is %lf\n", norm(v, n));
    printf("The smallest value is %lf at position %d\n", smallest(v, n), sposition(v, n));
    printf("The largest value is %lf at position %d\n", largest(v, n), lposition(v, n));
    
    return 0;
}
