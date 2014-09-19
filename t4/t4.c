/* 
 * File:   t4.c
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
        printf("Usage: t4 [source]\n");
        printf("\nCounts every word in the given source file\n");
    }
    else {
        source = fopen(argv[1], "r");
        if(source == NULL) {
            printf("No file found. Terminating session\n");
            exit(EXIT_FAILURE);
        }
        
        while( ( ch = fgetc(source) ) != EOF ) {
            if(ch == ' ' || ch == '\n') {
                count++;
            }
            while(ch == ' ' || ch == '\n') {
                ch = fgetc(source);
            }
        }
            
        
        printf("File had %i words.\n", count);
 
        fclose(source);
    }
    return (EXIT_SUCCESS);
}