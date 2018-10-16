//
//  main.c
//  a4p5
//
//  Created by Jasmine Juwono on 26.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p5.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

/*function that calculates the sum of the inputted integers
 by adding it to the array*/
int sum (int arr[], int x){
    int s = 0;
    int y;
    
    for(y = 1; y <= x; y++){
        s += arr[y];
    }
    return s;
}

/*function that calculates the average. It is the same program
 as the sum, but it is then divided by the number of integers
 inputted*/

double avg (int arr[], int z){
    int s = 0;
    int y;
    
    for(y = 1; y <= z; y++){
        s += arr[y];
    }
    s /= z;
    return s;
}

int main() {
    
    int m = 1;
    int arr[10];
    int s_res;
    double avg_res;
    char line[100];
    
    while(m <= 8){
        printf("Enter an integer: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &arr[m]);
        if(arr[m] == (-99)){ //if -99 entered, then the program stops
            arr[m] = 0;
            break;
        }
        m++; //incrementing m, meaning that it will keep asking the user for integers
    }
    
    //printing out the sum and average according to the inputs by calling out the functions
    s_res = sum(arr, m);
    avg_res = avg(arr, m);
    printf("The sum of all integers inputted is: %d \n", s_res);
    printf("The average of all  integers inputted is: %lf \n", avg_res);
    
    return 0;
}

