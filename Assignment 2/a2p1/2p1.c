//
//  main.c
//  a2p1
//
//  Created by Jasmine Juwono on 15.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a2.p1.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/
 
#include <stdio.h>
    int main(){
        //initialize variables for each float, int, char values as well as sum, difference, and product
        float dog, cat, result, difference, square;
        int key, door, result1, product, boy, girl, result2, product2;
        char line[100];
    
        //asking the user for a value, received the value and scanning it as a float
        printf("Enter the first float value: ");
        fgets(line, sizeof(dog), stdin);
        sscanf (line, "%f", &dog);
    
        printf("Enter the second float value: ");
        fgets(line, sizeof(cat), stdin);
        sscanf (line, "%f", &cat);
        
        //calculations for sum, difference, and product in float
        result = dog + cat;
        printf("The sum of the two float values is %f \n ", result);
        
        difference = cat - dog;
        printf("The difference between the two float values is %f \n", difference);
        
        square = dog * dog;
        printf("The square of the first float value is %f \n", square);
        
        //asking the user for a value, received the value and scanning it as an integer
        printf("Enter the first int value: ");
        fgets(line, sizeof(key), stdin);
        sscanf (line, "%i", &key);
        
        printf("Enter the second int value: ");
        fgets(line, sizeof(door), stdin);
        sscanf (line, "%i", &door);
        
        //calculations for sum and product in int
        result1 = key + door;
        printf("The sum of the two int values is %i \n ", result1);
        
        product = key * door;
        printf("The product of the two values is %i \n ", product);
        
        //asking the user for a value, received the value and scanning it as an char
        printf("Enter the first char value: ");
        fgets(line, sizeof(boy), stdin);
        sscanf (line, "%i", &boy);
        
        printf("Enter the second char value: ");
        fgets(line, sizeof(girl), stdin);
        sscanf (line, "%i", &girl);

        //calculations for sum and product in char
        result2 = boy + girl;
        printf("The sum of the two char values is %i \n ", result2);
        
        product2 = boy * girl;
        printf("The product of the two values is %i \n ", product2);

        
    return 0;

}
