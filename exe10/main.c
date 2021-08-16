#include <stdio.h>
#include <stdlib.h>
 
#define MAX 10

int main (void)
{
    int numeros[MAX], i, aux;

    for(i = 0; i < MAX; i++)
    {
      scanf("%d", &numeros[i]);
    }
 
    for (i = 0; i < MAX/2; i++)
    {
        aux = numeros[i];
        numeros[i] = numeros[MAX-i-1];
        numeros[MAX-i-1] = aux;
    }
    printf("\n");
    for(i = 0; i < MAX; i++)
    {
      printf("%d\n", numeros[i]);
    }
   
    return 0;
}  