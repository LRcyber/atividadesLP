#include <stdio.h>

float potencia(int , int);

int main () {

    int n, x;
    float potencia(int x, int n );
    printf("Digite o valor da base: ");
    scanf("%d", &x);
    printf("Digite o valor da potencia: ");
    scanf("%d", &n);

    printf("Resultado de %d elevado a %d: %f\n", x, n, potencia(x,n));

    return 0;
}
float potencia(int b, int e){
    if(e == 0){
        return 1;}
        else if(e < 0){
                e*= -1;
        return (1 /(b * potencia(b, e - 1)));}
    else
        return b * potencia(b, e - 1);
}
