//
//  main.c
//  a4p4
//
//  Created by Jasmine Juwono on 26.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a4.p4.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>


/*The following program is a void function, meaning that there
are no return statements (including no return 0). The objective
 of the void function is to perform the task, which in this case
 is to create the m by n square using for loops and if statements,
 and then it is called in the main function*/

    void print_frame(int n, int m, char c){
        int j, k;
        
        for (j = 0; j < n; j++){ //checks for the length
            for( k = 0; k < m; k++){ //checks for the width
                if ( j == 0 || j == n - 1){
                    printf("%c", c);//prints the character if the if statement is true
                }
                else if(k == 0 || k == m - 1){
                    printf("%c", c);
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
            }
        
        }
    
    int main() {
        int a, b;
        char line[100], ch;
        
        printf("Enter an integer ");
        fgets(line, sizeof(line), stdin);
        sscanf (line, "%d", &a);
        
        printf("Enter an integer ");
        fgets(line, sizeof(line), stdin);
        sscanf (line, "%d", &b);

        printf("Enter an character ");
        fgets(line, sizeof(line), stdin);
        sscanf (line, "%c", &ch);
        
        print_frame(a, b, ch);
        return 0;
    }
    
