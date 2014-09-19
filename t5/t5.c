/* 
 * File:   t5.c
 * Author: Ari Suoyrjö
 *
 * Created on September 19, 2014, 12:38 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */

void usage();

int main(int argc, char** argv) {
    char ch;
    FILE *source;
    int count = 0;
    
    source = fopen(argv[1], "r");
    if(source == NULL) {
        printf("No file found. Terminating session\n");
        usage();
        exit(EXIT_FAILURE);
    }
    
    if(argc != 3) {
        usage();
    }
    else if(strcmp(argv[2], "-sanat") == 0){
        while( ( ch = fgetc(source) ) != EOF ) {
            if(count == 0 && ch != ' ' && ch != '\n') count++;
            
            if(ch == ' ' || ch == '\n') {
                while(ch == ' ' || ch == '\n') {
                    ch = fgetc(source);
                }
                
                if(ferror(source) == 0) count++;
            }
        }
         
        
        printf("File has %i words.\n", count);
    }
    else if(strcmp(argv[2], "-rivit") == 0) {
        while( ( ch = fgetc(source) ) != EOF ) {
            if(ch == '\n') {
                count++;
            }
        }
        count++; //Counts the last row with EOF
            
        printf("File has %i rows.\n", count);
    }
    else {
        printf("Invalid argument '%s'\n", argv[2]);
    }
    
    fclose(source);
    
    return (EXIT_SUCCESS);
}

void usage() {
    printf("Usage: t5 [source] [parameter]\n");
    printf("\nParameters:\n");
    printf("\t-sanat\tCounts every word in the given source file\n");
    printf("\t-rivit\tCounts every row in the given source file\n");
}