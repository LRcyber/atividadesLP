#include<stdio.h>

int fibonacci_ite(int);


    int main(void){

    int a;
    int fibonacci_ite(int a);

    printf ("entre com o valor de N: ");
    scanf("%d", &a);
    fibonacci_ite(a);


    return fibonacci_ite(a);}



int fibonacci_ite(int n){
int i, F1, F2, F;

if (n==1 || n==2)
return 1;

F1 = F2 = 1;
for(i=2;i<n;i++){
F = F1 + F2;
F2 = F1;
F1 = F;
}
return F;}
