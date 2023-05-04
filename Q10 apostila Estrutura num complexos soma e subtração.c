#include<stdio.h>
#include<locale.h>

typedef struct {
float Re;
float Im;
}TNumComp;

int main (void){

        TNumComp e1,e2;

        setlocale(LC_ALL, "Portuguese"); /* biblioteca locale */

printf("entre com o valor real a da primeira equação: ");
scanf ("%f",&e1.Re);
printf("entre com o valor imaginario b da primeira equação: ");
scanf ("%f",&e1.Im);
printf("entre com o valor real a da segunda equação: ");
scanf ("%f",&e2.Re);
printf("entre com o valor imaginario b da segunda equação: ");
scanf ("%f",&e2.Im);

printf("\n z= %.2f + %.2fi", (e1.Re+e2.Re),(e1.Im+e2.Im));
printf("\n z= %.2f - %.2fi", (e1.Re-e2.Re),(e1.Im-e2.Im));
printf("\n");
return 0;}
