#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

int i, j, primo;


srand(time(NULL));


printf("________________gerando numeros aleatorios______________________-\n\n");

printf("__________________________________________________________________\n\n");
 for (i=1; i<1000 ; i++){
/* gera valores aleatórios entre 1 e 100 */
    printf("%d ", rand()%1000);
}
for (j=0; j<1000; j++){
if ((j%2!=0)&&(j%3!=0)&&(j%4!=0)&&(j%5!=0)&&(j%6!=0)&&(j%7 !=0)&&(j%8!=0)){
    printf ("\n O NUMERO %d E PRIMO", j);
 }
}



return 0;

}
