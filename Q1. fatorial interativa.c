#include<stdio.h>

int fatorial_ite(int);

int main (void){
    int a;
    int fatorial_ite(int a);
    printf("Entre com o valor de a: ");
    scanf ("%d",&a);

    printf("resultado: %d ", fatorial_ite (a));

return 0;}


int fatorial_ite(int n){
int i, result;

result = 1;
for(i=n;i>0;i--)
result *= i;

return result;
}
