/* 
 * File:   t1.c
 * Author: Ari Suoyrjö
 *
 * Created on September 18, 2014, 5:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    
    if(argc <= 1) {
        printf("Please give more arguments\n");
    }
    else {
        printf("Arguments count: %i\n", argc);
        printf("Arguments given: ");
        for(i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\nArguments reversed: ");
        for(i = argc - 1; i >= 0; i--) {
            printf("%s ", argv[i]);
        }
    }
    return (EXIT_SUCCESS);
}

