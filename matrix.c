#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int N,M,Z;
    int TAM;

    srand(time(NULL));

    puts("Qual o tamanho das matrizes?:");
    scanf("%d", &TAM);

    int matriz1[TAM][TAM];
    int matriz2[TAM][TAM];
    int matriz3[TAM][TAM];

    printf("MATRIZ NxM\n");

    for(int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){

            matriz1[i][j] = rand() % 100;
            matriz2[i][j] = rand() % 100;

            printf("[%d] [%d]  %d \n", i, j, matriz1[i][j]);
        }
       
    }

    printf("\n\n\nMATRIZ MxZ\n");

    for(int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("[%d] [%d]  %d \n", i, j, matriz2[i][j]);

        }
    }

    int aux = 0;

    for(int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            for(int x = 0; x < TAM; x++){
                
                aux += matriz1[i][x] * matriz2[x][j];

            }

            matriz3[i][j] = aux;
            aux = 0;
        }
    }

    printf("\n\n\nMATRIZ NxZ\n");

    for(int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("[%d] [%d]  %d \n", i, j, matriz3[i][j]);

        }
    }
    return 0;
}
