/*Crie uma estrutura para representar um ponto TPonto do espaço. Utilize a estrutura TPonto
para criar uma estrutura Tesfera (centro e radio). Escreva um programa usando as estruturas
anteriores que receba uma esfera e um ponto, seu programa deve informar se o ponto é
interno ou externo a esfera. */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


typedef struct {
float r;
 }Tesfera;

 typedef struct {
float r,x,y;
 }TPonto;


 int main (void){
    Tesfera esfera;
    TPonto ponto;

printf("Digite o raio da esfera: ");
scanf("%f",&esfera.r);
printf("Digite valor de x do da esfera a ser verificado: ");
scanf("%f",&ponto.x);
printf("Digite valor de y do da esfera a ser verificado: ");
scanf("%f",&ponto.y);
printf("\n\n--------------------------------------------\n");
printf("(%.2f,%.2f)",ponto.x,ponto.y);


     if((esfera.r)*(esfera.r) < (pow(ponto.x,2))+ (pow(ponto.y,2))){


            printf ("\nO ponto esta localizado dentro da esfera\n");
     }
       else

            printf ("\nO ponto esta localizado fora da esfera\n");



 return 0;
}


