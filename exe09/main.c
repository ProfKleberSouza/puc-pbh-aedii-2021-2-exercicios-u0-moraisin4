#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
   int notas[MAX], n;
   char nome[MAX];
   float media = 0, maiores[3], aux;
   
   scanf("%d", &n);
   for(int i = 0; i < n; i++)
   {
     scanf("%s %d", &nome[i], &notas[i]);
     media += notas[i];
     if(i == 0)
     {
         maiores[0] = notas[i];
         maiores[1] = notas[i];
         maiores[2] = notas[i];
     }
     else
     {
       for(int j = 0; j < 3; j++)
       {
        if(maiores[j] < notas[i])
        {
          maiores[j] = notas[i];
        }
       }
     }
   }
   for (int i = 0; i <3; i++)
   {
     for (int j = 0; j < 3; j++)
     {
       if (maiores[i] < maiores[j])
       {
    //aqui acontece a troca, do maior cara  vaia para a direita e o menor para esquerda
          aux = maiores[i];
          maiores[i] = maiores[j];
          maiores[j] = aux;
       }
     } 
   }
   printf("NOTA MEDIA = %.2f\n", media/n);
   for(int i = 0; i < 3; i++)
   {
     printf("%.2f\n", maiores[i]);
   }

   return 0;
}