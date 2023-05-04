#include <stdio.h>
#include <stdlib.h>


 typedef struct{
        float x;
        float y;

        } Tquadrante;

int main(void)
{

    Tquadrante ponto;
    float x=0.0, y=0.0;

    printf ("Informe o valor de x: ");
    scanf("%%f", &ponto.x);
    fflush(stdin);
    printf ("Informe o valor de y: ");
    scanf("%f", &ponto.y);
    fflush(stdin);



    printf("\nCoordenadas %.2f,%.2f\n",ponto.x, ponto.y);

    if(ponto.x > 0.0){
        if (ponto.y > 0.0){
        printf("I QUADRANTE ");;}
        else if (ponto.y < 0.0)
        printf("II QUADRANTE");}
        else
        if(ponto.y > 0.0)
        printf("II QUADRANTE");
        else
        printf("IV QUADRANTE");
    return 0;
}
