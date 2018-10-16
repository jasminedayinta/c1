//
//  main.c
//  a6p2
//
//  Created by Jasmine Juwono on 29.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a6.p2.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

void triple(int arr[], int size){
    int i;
    
    for(i = 0; i < 6; i++){ /*for loop that prints the elements of the original array*/
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < 6; i++){ //for loop that prints the multiplication elements
        arr[i] *= size; // multiplying the elements by 3
        printf("%d ", arr[i]);
    }
 
    printf("\n");
    
}


int main() {
    /*initializing the array with the given elements and size is the number the elements
     is being multiplied with*/
    int arr[6] = {3, 2, 9, 3, 7, 12};
    int size = 3;
    
    triple(arr, size); //calling the void function
   
    return 0;
}
