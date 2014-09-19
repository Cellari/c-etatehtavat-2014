/* 
 * File:   t2.c
 * Author: user
 *
 * Created on September 18, 2014, 7:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char ch;
    FILE *source, *target;
    
    if(argc != 3) {
        printf("Usage: t2 [source] [destination]\n");
        printf("\nCopies source file to destination\n");
    }
    else {
        source = fopen(argv[1], "r");
        if(source == NULL) {
            printf("No file found. Terminating session\n");
            exit(EXIT_FAILURE);
        }
        
        target = fopen(argv[2], "w");
        if( target == NULL )
        {
           fclose(source);
           printf("Invalid destination. Terminating session\n");
           exit(EXIT_FAILURE);
        }
        
        while( ( ch = fgetc(source) ) != EOF )
            fputc(ch, target);
        
        printf("File copied successfully.\n");
 
        fclose(source);
        fclose(target);
    }
    
    return (EXIT_SUCCESS);
}

