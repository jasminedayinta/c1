//
//  main.c
//  a3p9
//
//  Created by Jasmine Juwono on 25.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p9.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    char line[100], c;
    int n, i;
    float grades[50], avg;
    float sum = 0.0;
    float pro = 1.0;
    
    printf("Enter a character ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%c", &c);

    printf("Enter an integer ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &n);
    
    //putting the inputted integers in the array grades[50]
    for(i = 0; i < n; i++){
        scanf("%f", &grades[i]);
        getchar();
    }
    
    /*Switch is used to program the different cases such as s, p, and default.
     What it does first is that it goes through the array and checks the
     value; this is done using the for loop. If the value meets the for loop 
     condition, that value is then added or multiplied with the current array,
     resulting in a final sum or product (pro).*/
    
    switch(c){
        case 's':
            for (i = 0; i < n; i++){
                sum += grades[i];
            }
            printf("The sum is: %f \n", sum);
            break;
            
        case 'p':
            for(i = 0; i < n; i++){
                pro *= grades[i];
            }
            printf("The product is: %f \n", pro);
            break;
            
        default:
            for (i = 0; i < n; i++){
                sum += grades[i];
            }
            avg = sum/n;
        
            printf("The average is: %f \n", avg);
            break;
    }
    
    return 0;
}
