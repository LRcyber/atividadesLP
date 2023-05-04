#include<stdio.h>

int recursiva_Fibonacci(int);

int main(){

    int recursiva_Fibonacci(int n);

    int n;

    printf("entre com o valor de n: ");
    scanf("%d",&n);

    printf("Serie de Fibonacci: ");
    printf("%d",recursiva_Fibonacci(n));


}

int recursiva_Fibonacci(int n){

    if (n==0){
        return 0;}
        if (n==1 && n==2){
                return 1;    }
         return  (n + recursiva_Fibonacci(n-1));

    printf("%d",recursiva_Fibonacci(n));

}
