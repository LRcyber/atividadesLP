#include<stdio.h>

int gVariavelGlobal=2;


 int main(void){

    void teste(void);

    printf("\nGlobal:%d", gVariavelGlobal);
    teste();
    teste();

 return 0;}

     void teste(void){

    int VariavelLocalAutomatica = 2;
    VariavelLocalAutomatica *= 2;
    int static VariavelLocalEstatica = 2;
    VariavelLocalEstatica *= 2;
    gVariavelGlobal*=2;



    printf("\nLocal Automatica:%d", VariavelLocalAutomatica);
    printf("\nLocal Estatica:%d", VariavelLocalEstatica);
    printf("\nGlobal:%d", gVariavelGlobal);



      }
