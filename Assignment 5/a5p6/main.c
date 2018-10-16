//
//  main.c
//  a5p6
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p6.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

//function that calculates the difference
double maxdiff(double arr[], int n){
        double min = arr[0];
        double max = arr[0];
        int i;
    
    //asigning which number is the max and min using for loop
        for(i = 0; i < n; i++){
            if (arr[i] < min){
            min = arr[i];
            }else{
                max = arr[i];
            }
        }
    return max - min; //subtracting them from each other
}

int main() {
    
    int z, i;
    double *a;
    
    //asking the user how many integers they would like to input
    printf("Please enter total integer input ");
    scanf("%d", &z);
    getchar();
    
    //allocating memory for the array
    a = (double*)malloc(sizeof(double)*z);
    
    //putting the inputted values in the array
    for (i = 0; i < z; i++){
        printf("Enter a number ");
        scanf("%lf", &a[i]);
    }
    //calling the function
    printf("The difference is %lf\n", maxdiff(a, z));
    return 0;
}

