//
//  main.c
//  a3p6
//
//  Created by Jasmine Juwono on 25.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
a3.p6.c
Jasmine Dayinta
j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    
    char line[100];
    char ch;
    int n, s;
    
    printf("Enter a character ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%c", &ch);
    
    printf("Enter a integer ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &n);
    
    //The while loop checks whether the inputted integer is non-zero and positive
    while (n <= 0){
        printf("Please enter a positive value: ");
        fgets(line, sizeof(line), stdin);
        sscanf (line, "%d", &n);
    }
    
    //for loop that takes the number n and prints the character n times
    for(s = 1; s <= n; s++){
        printf("%c ", ch);
    }
    return 0;
}
