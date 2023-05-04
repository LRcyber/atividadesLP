#include <stdio.h>

#define TAM 5 //cria uma constante

int main() {
    int vet[TAM], i, j, valor;

    //preenche o vetor
    for (i = 0; i < TAM; i++) {
        scanf("%i", &vet[i]);
    }

    for (i = 0; i < TAM; i++) {
        for (j = i+1; j < TAM; j++) {
            if (vet[i] == vet[j]) {
                printf("Valor repetido :%i: nos indices %i e %i", vet[i], i, j);
                for (j = j+1; j < TAM; j++) {
                    if (vet[i] == vet[j]) {
                        printf(" e %i", j);
                    }
                }
                printf("\n");
            }
        }
    }


    return 0;
}
