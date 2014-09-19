/* 
 * File:   t9.c
 * Author: Ari Suoyrjö
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
    char jono[10];
    char *p;
    int count = 0;
    
    printf("Anna sana: ");
    fgets(jono, sizeof(jono), stdin);
    strtok(jono, "\n");
    
    printf("Päivän sana on '%s'. Anna yksi merkki\n", jono);
    while (1) {        
        scanf(" %c", &merkki); //Tyhjä välilyönti syö \n merkin

//        printf("Annoit: %c\n", merkki);

        p = strchr(jono, merkki);
        if(p == NULL) {
            printf("Merkkiä ei löytynyt. Ohjelma lopetetaan\n");
            break;
        }
        
        count = 0;
        while(p != NULL) {
            count++;
            p = strchr(p+1, merkki);
        }
        
        printf("Antamasi merkki löytyi %i kertaa\nAnna uusi merkki: ", count);
    }
    
    return (EXIT_SUCCESS);
}

