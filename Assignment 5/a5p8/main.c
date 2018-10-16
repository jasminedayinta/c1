//
//  main.c
//  a5p8
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a5.p8.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

void matrix(int m[50][50], int a){
    int r, c;
    
    /*take the integer inputted by the user and implement it in the rows
     and columns of the matrix using for loop*/
    printf("The entered matrix is: \n");
    for (r = 0; r < a; r++){ //
        for(c = 0; c < a; c++){
            printf("%d ", m[r][c]);
        }
        printf("\n");
    }
}

/*function that figures out the diagonal value, which is when the 
 number of column and row equal to each other*/
void diagonal(int m[50][50], int a){
    int r, c;
    printf("The main diagonal is: \n");
    for (r = 0; r < a; r++){
        for(c = 0; c < a; c++){
            if(r == c){
                printf("%d ", m[r][c]);
            }
        }
    }
    
}

int main() {
    int z, i, j;
    int m[50][50];
    
    //asking the user for the dimension of the matrix
    printf("Enter an integer ");
    scanf("%d", &z);
    
    //implementing the inputted values to the matrix
    for (i = 0; i < z; i++) {
        for (j = 0; j < z; j++) {
            printf("Enter an integer ");
            scanf("%d", &m[i][j]);
        }
    }
    //calling the functions to print the matrix and diagonal values
    matrix(m, z);
    diagonal(m, z);
    
    return 0;
}
