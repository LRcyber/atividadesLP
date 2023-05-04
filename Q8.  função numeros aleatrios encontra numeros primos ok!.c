#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int Num_Primo (int);

int main (void)
{
int Num_Primo (int);
int i, j, num;

srand(time(NULL));


printf("\n\t\t\t\t\t\t *GERANDO 1000 NUMS ALEATORIOS*\n\n\n\n");

 for (i=1; i<1000 ; i++){
/* gera valores aleatórios entre 1 e 100 */
    printf("%d ", rand()%1000);
}
printf ("\n");
Num_Primo (num);

return 0;

}
int Num_Primo (int a){
    int j;
for (j=0; j<1000; j++){
if ((j%2!=0)&&(j%3!=0)&&(j%5!=0)&&(j%7!=0)){
    printf ("\n O NUMERO %d E PRIMO", j);
 }
    }
        }
