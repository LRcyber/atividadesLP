#include<stdio.h>
#include<stdlib.h>
#define MAX 100


 typedef struct{
            char nome [10];
            int v;
            int e;
            int d;
            int ca;
            int cv;
            int gola;
            int golc;
            int saldo;
            int fair_play;
            } Ttorneio;

int main (void){

Ttorneio equipe[MAX];
int N;
int i=0;
int aux=0;
int saldo;
int campeao= 0;
int melhor_fair_play = 0;
int melhor_ataque =0;
int melhor_defesa =0;
int fair_play;




printf("\nQUANTAS EQUIPES PARTCIPANTES DO TORNEIO:\n");
scanf("%d", &N);
fflush (stdin);


for(i=0; i<N; i++){
    printf("\nnome da equipe:%d\n",i+1);
    gets (equipe[i].nome);
    printf ("quantidade de vitorias:");
    scanf ("%d", &equipe[i].v);
    fflush(stdin);
    printf ("quantidade de empates:");
    scanf("%d", &equipe[i].e);
    fflush(stdin);
    printf ("quantidade de derrotas:");
    scanf("%d", &equipe[i].d);
    fflush(stdin);
    printf ("quantidade de cartoes amarelos:");
    scanf("%d", &equipe[i].ca);
    fflush(stdin);
    printf ("quantidade de cartoes vermelhos:");
    scanf("%d", &equipe[i].cv);
    fflush(stdin);
    printf ("quantidade de gols a favor:");
    scanf("%d", &equipe[i].gola);
    fflush(stdin);
    printf ("quantidade de gols contra:");
    scanf("%d", &equipe[i].golc);
    fflush(stdin);}
printf ("\n");
for(i=0; i<N; i++){
equipe[i]. saldo = 3* equipe[i].v + equipe[i].e;
printf (" O SALDO DA EQUIPE %s : %d\n", equipe[i].nome, equipe[i].saldo);

}
for(i=0;i<N; i++){
    if (equipe[campeao]. saldo > equipe[i]. saldo){
    campeao=i;
}
    }
printf("\nA equipe vencedora e:%s", equipe[campeao]. nome);
for(i=0;i<N; i++){
    if (equipe[melhor_ataque].gola > equipe[i].gola){
    melhor_ataque = i;
}
    }
printf("\nA equipe que  teve o melhor ataque e:%s", equipe[melhor_ataque]. nome);

for(i=0;i<N; i++){
    if (equipe[melhor_defesa].golc > equipe[i].golc){
    melhor_defesa = i;
}
        }
printf("\nA equipe que  teve o melhor defesa e:%s", equipe[melhor_defesa]. nome);

for(i=0;i<N; i++){
equipe[i].fair_play = equipe[i].cv*2+equipe[i].ca;

if (equipe[melhor_fair_play].fair_play > equipe[i].fair_play){
            melhor_fair_play = i;
}
        }
printf("\nA equipe FAIR PLAY e:%s", equipe[melhor_fair_play]. nome);







 /*       printf ("\n\n\nNOME\t JG\t JE\t CA\t CV\t GF\t GC\t SG\t PONTOS");
        printf("\n_______________________________________________________________________\n");

        for ( i= 0; i< N; i++){
        printf ("%s\n",equipe[i].nome);
              for ( i= 0; i< N; i++){
              printf("\%d",equipe[i].v);
              for ( i= 0; i< N; i++){
              printf("\t\%d",equipe[i].e);
              }
              }
              }
*/

return 0;}

