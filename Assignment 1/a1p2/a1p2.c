//
//  main.c
//  a1p2
//
//  Created by Jasmine Juwono on 17.09.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/* JTSK-320111
 a1.p2.c
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>

int main() {
    int answer;
    answer = 3 + 12;
    printf("The answer is %d\n", answer);
    return 0;
}

/*The problem with this program was the fact that in the printf line, it didn't specify which integer the program should output. This is why ", answer" was added to tell the program to print the variable answer*/
