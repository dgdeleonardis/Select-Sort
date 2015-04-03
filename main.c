/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 3 aprile 2015, 17.28
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5
/*
 * 
 */
int main(int argc, char** argv){
    int i, j, indiceMinimo, t;
    int v[N];
    
    for(i = 0; i < N; i++) {
        printf("Inserisci l'elemento %d : ", i);
        scanf("%d", &(v[i]));
    }
    indiceMinimo = 0;
    for(i = 0; i < N; i++) {
        indiceMinimo = i;
        for(j = i + 1; j < N; j++) { 
            if (v[indiceMinimo] > v[j]) {
                indiceMinimo = j;
            }
        }
        if(j != indiceMinimo) {
            t = v[i];
            v[i] = v[indiceMinimo];
            v[indiceMinimo] = t;
        }
    }
    printf("Algoritmo ordinato (Select-Sort) : \n");
    for(i = 0; i < N; i++) {
    printf("%d ", v[i]);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}