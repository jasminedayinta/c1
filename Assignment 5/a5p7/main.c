//
//  main.c
//  a5p7
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p7.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

void min(float arr[], int n){
    float min1 = arr[0];
    float min2 = arr[1];
    int i;
    
    /*checking which number is the smallest and int i starts at 2
     because min1 and min2 are already assigned to the two lowest 
     element in the array*/
    for(i = 2; i < n; i++) {
     if (min1 < min2){
        if (arr[i] < min2) {
            min2 = arr[i];
        } else if (arr[i] < min1) {
            min1 = arr[i];
        } else if (min1 > min2) {
            if (arr[i] < min1) {
                min1 = arr[i];
            } else if (arr[i] < min2) {
                min2 = arr[i];
            }
        }
     }
    }
    printf("The two lowest values are: %f %f \n", min1, min2);
}
    

int main() {
    int z, i;
    float *a;
    
    //asking the user how many integers they would like to input
    printf("Please enter total integer input ");
    scanf("%d", &z);
    getchar();
    
    //allocating memory for the array
    a = (float*)malloc(sizeof(float)*z);
    
    //putting the inputted values in the array
    for (i = 0; i < z; i++){
        printf("Enter a number ");
        scanf("%f", &a[i]);
    }
    //calling the function
    min(a, z);
    
    //release memory allocated for a
    free(a);
    
    
    return 0;
}
