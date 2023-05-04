# include <stdio.h>
# include <stdlib.h>
# define N 20

 int main(void) {

  int branco = 0 , fabiana = 0 ,adriano = 0,luciana = 0;
  int i=0;
  int voto[i];


  for (i=0; i<N;i++)
  {
   printf ("entre com o numero do  do candidato:\n 0 - votar branco\n 1 - votar FABIANA \n 2 - votar ADRIANO\n 3 - votar LUCIANA\n\n");

   scanf("%d",&voto[i]);}

   switch (voto [i]){
    case 0:
       branco++;
       break;

    case 1:
       fabiana++;
      break;

      case 2:
       adriano++;
      break;

      case 3:
      luciana++;
      break;


}
    printf("VOTOS\n");
  printf("%5d",0);
  printf("%12d\n",branco);
  printf("%5d",1);
  printf("%12d\n", fabiana);
  printf("%5d",2);
  printf("%12d\n",adriano);
  printf("%5d",3);
  printf("%12d\n",luciana);



 return 0;
 }
