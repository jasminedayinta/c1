//
//  main.c
//  a6p4
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p4.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

//function that multiplies the integer by 3
void triple(int arr[], int size){
        int i;
        for(i = 0; i < size; i++){
            arr[i] *= 3;
        }
    }
    
    
int main() {
    int *arr, s, i;
    
    //asking the user total number of integers for the array
    printf("Enter total number of integer ");
    scanf("%d", &s);
    getchar();
    
    //allocating memory for the array
    arr = (int*)malloc(sizeof(int)*s);
    for (i = 0; i < s; i++){
        printf("Enter an integer ");
        scanf("%d", &arr[i]);
        getchar();
    }
    
    //for loop that prints the elements of the original array
    printf("The original array is ");
    for(i = 0; i < s; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //calling void triple to calculate the multiplication
    triple(arr, s);
    
    //for loop that prints the elements of the array after the multiplication
    printf("The modified array is ");
    for(i = 0; i < s; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    
    return 0;
}
