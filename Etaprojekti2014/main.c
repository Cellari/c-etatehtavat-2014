/* 
 * File:   main.c
 * Author: user
 *
 * Created on September 17, 2014, 3:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
//#include "t1.h"
/*
 * 
 */

int main(int argc, char** argv) {
    char input[2];
    int n;
    int c;
    
    printf("Tervetuloa tehtävien palautukseen\n");
    
    while (n != '\0') {        
        printf("Valitse tehtävän numero numerolla tai sammuta ohjelma millä tahansa muulla arvolla.\n");
        fgets(input, sizeof(input), stdin);
        n = atoi(input);
        
        //Used to flush stdin
        while ((c=getchar()) != EOF) if (c == '\n') break;
        
        if(n != '\0') {
            switch(n) {
                case 1:
                    t1();
                    break;
                default:
                    printf("Annettua tehtävänumeroa ei löytynyt\n");
            }
        }
    }
    
    printf("Ohjelma sulkeutuu...");

    
    return (EXIT_SUCCESS);
}

