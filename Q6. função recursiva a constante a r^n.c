#include<stdio.h>


float rec_Geometrica (int , int, int);

int main(void){
    int c,b,e;
    float rec_Geometrica (int c,int b, int e);


    printf (" entre com o valor da constante: ");
    scanf ("%d",&c);
    printf (" entre com o valor da base: ");
    scanf ("%d",&b);
    printf (" entre com o valor do expoente: ");
    scanf ("%d",&e);

    printf (" valor n da serie e:%.2f", rec_Geometrica (c,b,e));

}

float rec_Geometrica (int a, int r, int n){

    if ((r==0)||(a==0)){
        return 0;}

                else {
                return  a*(rec_Geometrica(a,r, n - 1));

        }
    }

