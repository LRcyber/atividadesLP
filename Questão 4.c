#include <stdio.h>
#define PI 3.14159

        int main(void){

        float raio, diametro, circunferencia, area;
        printf ( " digite o raio do circulo: ");
        scanf ("%f", &raio);

        diametro = 2* raio;
        printf ( "\n diamentro: %.4f ", diametro);
        circunferencia= 2*PI*raio;
        printf ( "\n circunferencia: %.4f ", circunferencia);
        area= PI*raio*raio;
        printf ( "\n area: %.4f ", area);







        return 0;}
