/* 
 * File:   t3.c
 * Author: Ari Suoyrjö
 *
 * Created on September 19, 2014, 12:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char ch;
    FILE *source;
    int count = 0;
    
    if(argc != 2) {
        printf("Usage: t3 [source]\n");
        printf("\nCounts every character in the given source file\n");
    }
    else {
        source = fopen(argv[1], "r");
        if(source == NULL) {
            printf("No file found. Terminating session\n");
            exit(EXIT_FAILURE);
        }
        
        while( ( ch = fgetc(source) ) != EOF )
            count++;
        
        printf("File had %i characters.\n", count);
 
        fclose(source);
    }
    return (EXIT_SUCCESS);
}