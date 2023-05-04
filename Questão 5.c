#include <stdio.h>
#include <math.h>


int main (void){


         float saldoInicial, saldoFinal;
         float taxa;
         int meses;
         int i = 0;

         printf ("saldo inicial:");
         scanf ("%f", &saldoInicial);
         printf ("quantidade de meses:");
         scanf ("%d", &meses);
         printf ("taxa:");
         scanf ("%f", &taxa);


            saldoFinal= saldoInicial * (pow (1.0 + taxa, meses));

            printf ("%4d%21.2f\n", meses, saldoFinal );




return 0;}
