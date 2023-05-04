#include<stdio.h>

int iterativo_Fibonacci(int);

int main(){

    int n;

    printf("entre com o valor de n: ");
    scanf("%d",&n);

    printf("Serie de Fibonacci: ");
    printf("%d %d ",0,1);
    iterativo_Fibonacci(n);

    return 0;
}

int iterativo_Fibonacci(int n){

    int i, primeiro=0,segundo=1,soma;

    for (i=0;i<n-2;i++){
         soma = primeiro + segundo;
         primeiro = segundo;
         segundo = soma;
         printf("%d ",soma);
    }
}
