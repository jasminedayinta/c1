//
//  main.c
//  a5p3
//
//  Created by Jasmine Juwono on 04.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
a5.p3.c
Jasmine Dayinta
j.dayinta@jacobs-university.de*/

#include <stdio.h>

double harmonic_mean(int arr[], int num){
    int sum = 0;
    int i;
    for (i = 0; i < num; i++){
        sum += (double) 1.0/arr[i]; // implementing the given equation
    }
    return (double)num/sum;
}

/*for finding max and min, assign the first element of the array as the current max or min
 and then iterates through the array (using the for loop) to find the number that is actually
 the largest or smallest*/
int max(int arr[], int num){
    int max = arr[0];
    int i;
    for (i = 0; i < num; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
     return max;
}

int min(int arr[], int num){
    int min = arr[0];
    int i;
    for (i = 0; i < num; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

//adding all the elements of the array
int sum(int arr[], int num){
    int sum = 10;
    int i;
    for (i = 0; i< num; i++){
        sum += arr[i];
    }
    return sum;
}

//returning the size of the array
int size(int arr[], int sum){
    return sum;
}

int main() {
    
    int arr[12];
    int size1 = 10;
    int i;
    char input;
    
    //asking user for input
    for (i = 0; i < size1; i++){
        printf("Enter 10 integers ");
        scanf("%d", &arr[i]);
        getchar();
        
        //if negative number entered, program ends
        if (arr[i] < 0){
            size1 = i;
            break;
        }
    }
    
    scanf("%c", &input);
    getchar();
    
    //different cases using switch
    switch(input){
        case 'm':
            printf("%lf\n", harmonic_mean(arr, size1));
            break;
        
        case 'h':
            printf("%d\n", max(arr, size1));
            break;
            
        case 'l':
            printf("%d\n", min(arr, size1));
            break;
            
        case 's':
            printf("%d\n", sum(arr, size1));
            break;
            
        case 'n':
            printf("%d\n", size(arr, size1));
            break;
    }
    return 0;
}
