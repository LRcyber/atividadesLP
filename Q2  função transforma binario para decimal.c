#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void) {


int BinarioToDecimal (char numerobinario [], int tam);


char binario[10];
int a;
int num;
printf( "Digite o valor em binario ");
gets (binario);
a = strlen(binario);
num = BinarioToDecimal(binario,a);


	return 0;
}

int BinarioToDecimal (char numerobinario [],int tam){
    int i;
    int novoValor;

for (i = tam-1; i >= 0; i--) {
printf("%c|", numerobinario[i]);
if (numerobinario[i] == '1') {
    novoValor += pow(2,tam-1-i);
		}
	}

printf (" O valor em decimal e: %d", novoValor);}
