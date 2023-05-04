#include<stdio.h>


float rec_Geometrica (int, int, int);

int main(void){
    int c,b,e;
    float rec_Geometrica (int c, int b, int e);


    printf (" entre com o valor da constante: ");
    scanf ("%d",&c);
    printf (" entre com o valor da base: ");
    scanf ("%d",&b);
    printf (" entre com o valor do expoente: ");
    scanf ("%d",&e);

    printf (" valor n da serie e:%.2f", rec_Geometrica (c,b,e));

}

float rec_Geometrica (int a, int r, int n){

    if ((a==0)||(r==0)){
        return 0;
    }
    if(n==0){
    return a*r;
    }
    if ((a==1)&&(r==1)&&(n==1)){
            return 1;
    }
          if ((r<0)&&(n<0)&&(n%2!=0)){
            return (-1/(r*(rec_Geometrica(r,n,n-1))));}
                if ((r<0)&&(n<0)&&(n%2==0)){
                return (1/(r*(rec_Geometrica(r,n,n-1))));}
                else {
                return  a*(rec_Geometrica(r,n,n-1));;
    }
}
