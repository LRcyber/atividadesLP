#include<stdio.h>

int main(void){

int ImprimeNumInvertido (int num);
int x;
int x_invertido;
printf (" Digite o numero: ");
scanf ("%d", &x);
printf ("\n");

x_invertido= ImprimeNumInvertido (x);



return 0;}

int ImprimeNumInvertido (int num){
int numInvertido;
 if (num>=0){
    do {
    numInvertido=num%10;
    printf ("%d", numInvertido);
    num /=10;
 }while (num!=0);
 printf("\n");}
 else if (num <1){
    num *= -1;
    printf("-");
    do {
    numInvertido=num%10;
    printf ("%d", numInvertido);
    num /=10;
 }while (num!=0);
 printf("\n");

 }

    }

