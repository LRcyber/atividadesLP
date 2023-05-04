#include<stdio.h>
#include<stdlib.h>


     int Potencia_int (int, int);

     int main(void){

         int base, exp;

         printf ("DIGITE A BASE:");
         scanf("%d", &base);
         printf ("DIGITE O EXPOENTE:");
         scanf("%d", &exp);

        Potencia_int (base, exp);

     return 0;}

      int Potencia_int (int b, int e){
          int i;
for (i=0; i<e-1; i++){
if (e>1){
b*=b;
printf ("\nO RESULTADO :%d", b);
if (e==0)
b==1;
printf ("\nO RESULTADO E:%d", b);
if (e<0)

printf ("\nO EXPOENTE RESULTA EM VALOR NAO INTEIRO");
            }
            }
      return b;
      }
