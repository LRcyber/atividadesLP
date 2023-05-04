#include<stdio.h>
#include<math.h>


int main (void){

float Hipotenusa (float cat_oposto, float cat_adjacente);
float a, b, c;

printf("entre com o valor do cateto oposto: ");
scanf ("%f",&b);
printf("entre com o valor do cateto adjacente: ");
scanf ("%f",&c);

a = Hipotenusa (b,c);

printf ("hipotenusa: %.3f",a);

return 0;}

float Hipotenusa (float cat_oposto, float cat_adjacente){
float aux;

     aux = ((pow(cat_oposto,2)) + (pow(cat_adjacente,2)));


return sqrt(aux);}
