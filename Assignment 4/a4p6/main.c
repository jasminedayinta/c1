//
//  main.c
//  a4p6
//
//  Created by Jasmine Juwono on 26.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p6.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

/*This is the int function that checks for the smallest value.
 It does so using a for loop and checking each index position.
 If there is a value that is smaller than the previous position, 
 then that new value is assigned as the smallest*/
int posmin(int v[], int n){
    int small, i;
    
    small = v[0];
    for (i = 0; i < n; i++){
        if(v[i] < small){
            small = v[i];
        }
    }
    return small;
}

int main() {
    int n;
    printf("Enter how many integers you would like to enter: ");
    scanf("%d", &n);
    int arr[50];
    int i;
    
    //receiving all the values and storing it in the array
    for(i = 0; i < n; i++){
        printf("Enter an integer: ");
        scanf("%d", &arr[i]);
    }
    //printing out the values in the array
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    //calling out the posmin function and display the answer
    int y;
    y = posmin(arr, i);
    printf("\n%d \n", y);
    
    return 0;
}
