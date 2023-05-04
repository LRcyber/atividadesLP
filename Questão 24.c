#include <stdio.h>


int main (void){

        int vet1[10],vet2[10], vet3[10];
        int i = 0, j = 0, m = 0, n =0 , l = 0, p = 0;

//entra com os numero do vet1
        printf ("\n\n entre com os elementos do vetor 1:\n");

         for ( ; i<10; i++){
            scanf("%d", &vet1[i]);}
            for ( ; j<10; j++){
        //imprimi Vet1
        printf("\nVet[%d]= %d ", j, vet1[j]);
                }

        printf ("\n\nentre com os elementos do vetor 2:\n");

         for ( ; m<10; m++){
            scanf("%d", &vet2[m]);
                }

            for ( ; n<10; n++){
        printf("\nVet[%d]= %d ", n, vet2[n]);
                }
                printf ("\n");

                for ( ;l<10; l++ ){
                  vet3[l]= vet1[i]+ vet2[n];

                }
                for ( ; p<10; p++){
        printf("\nVet[%d]= %d ", p, vet3[p]);
                }

return 0;
}
