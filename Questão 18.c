#include<stdio.h>
#define MAX 50

int main (void){

        int n,i = 0;
        int aux = 0;
        int a = 1;
        int b = 1;

        printf ("\n\n Entre com o indice da sequencia de Fibonacci:");
        scanf ("%d",&n);

         for(i = 0; i < n; i++) {

        aux = a + b;
        a = b;
        b = aux;

        printf("\nFibonacci[%d]%d",i+3, aux);
    }

    return 0;}







