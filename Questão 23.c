#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(void){
/* gera num aleatorios de 0-100
    int i = 1,n;
        printf("\n\n--------------------GERA NUMEROS ALEATORIOS------------------------\n");
        srand(time(NULL));
        printf ("\nQuantos numeros aleatorios entre 1 - 100 gostaria de gerar?: ");
        scanf("%d", &n);
            for ( ; i <= n; i++){
            printf ("%10d", (rand()%100));
                if (i%20==0){
                printf("\n");
            }
            }


*/

















// gera num aleatorios de 0-100
    int i = 1;
    int n, maior,menor,prodpares, prodimpares;
    int aux;



        printf("\n\n--------------------GERA NUMEROS ALEATORIOS------------------------\n");
        srand(time(NULL));
        printf ("\nQuantos numeros aleatorios entre 1 - 100 gostaria de gerar?:");
        scanf("%d", &n);
        printf("\n");


            // gerando numeros aleatorios
            for ( ; i <= n; i++){
            printf ("%5d", (1+rand()%100));
                if (i%10==0){
                printf("\n");
            }
            }
                for ( ; i <= 100; i++){
                if ( aux > n)
                aux = maior;
                }
                printf ("\n\nO maior dentre eles:%d", maior);











return 0;



}
