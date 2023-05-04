#include<stdio.h>
#include<stdlib.h>

int mdc(int, int);

    int main(void)
{
        int mdc(int m, int n);
        int m, n;
        printf("DIGITE O PRIMEIRO NUMERO:");
        scanf ("%d",&m);
        printf("DIGITE O SEGUNDO NUMERO:");
        scanf ("%d",&n);



    return mdc (m,n);
    }


int mdc(int x, int y){
  if (y==0)
{
    return x;
}
  else

    return x/y;
}
