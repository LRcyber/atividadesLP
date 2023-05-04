#include<stdio.h>

int main (void){

float SomaValorAbsoluto (float num1, float num2);
float a,b,soma;

printf ("Entre com os dois numeros: ");
scanf("%f %f", &a, &b);
soma=SomaValorAbsoluto(a,b);

printf(" a soma e=%.3f ", soma);
return 0;}


float SomaValorAbsoluto (float num1, float num2){

 float ValorAbsoluto (float x);
 if (num1<0){
    num1= ValorAbsoluto (num1);
 }
 if (num2<0){
    num2 = ValorAbsoluto (num2);
 }
return num1+num2;
}

 float ValorAbsoluto (float x){

return x*= -1;}




