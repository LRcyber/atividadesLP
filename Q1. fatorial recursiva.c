#include<stdio.h>

int fatorial_rec(int);

int main (void){
    int a;
    int fatorial_ite(int a);
    printf("Entre com o valor de a: ");
    scanf ("%d",&a);

    printf("resultado: %d ", fatorial_rec (a));

return 0;}


int fatorial_rec(int n){
if (n==0)
return 1;
else
return n*fatorial_rec(n-1);

}
