/* 
 * File:   t6.c
 * Author: user
 *
 * Created on September 19, 2014, 2:42 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char merkki;
    char jono[] = "taateli";
    char *p;
    int c;
    
    printf("Päivän sana on 'taateli'. Anna yksi merkki\n");
    while (1) {        
        scanf(" %c", &merkki); //Tyhjä välilyönti syö \n merkin

//        printf("Annoit: %c\n", merkki);

        p = strchr(jono, merkki);
        
        if(p != NULL) printf("p = %i\n", p);
        else {
            printf("Merkkiä ei löytynyt. Ohjelma lopetetaan\n");
            break;
        }
        
    }
    
    return (EXIT_SUCCESS);
}

