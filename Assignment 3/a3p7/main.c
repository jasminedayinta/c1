//
//  main.c
//  a3p7
//
//  Created by Jasmine Juwono on 25.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a3.p7.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    char line[100], m, ch;
    int n, s;
    
    printf("Enter an upper case character ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%c", &ch);
    
    printf("Enter a integer ");
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &n);
    
    /*for loop that increments the character according to the integer inputted
     by adding the two variables together */
    for(s = 0; s <= n; s++){
        m = ch + s;
        printf("%c \n", m);
    }
    
    return 0;
}
