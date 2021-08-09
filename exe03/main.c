#include <stdio.h>

int main() {
   int n1;
   scanf("%i", &n1);
   if(n1 == 0){
     printf("NUMERO NEUTRO");
   }
   else{
     if(n1 > 0){
       if(n1 % 2 == 0){
         printf("NUMERO PAR POSITIVO");
       }
       else{
         printf("NUMERO IMPAR POSITIVO");
       }
     }
     else{
       if(n1 % 2 == 0){
         printf("NUMERO PAR NEGATIVO");
       }
       else{
         printf("NUMERO IMPAR NEGATIVO");
       }
     }
   }
   printf("\n");
   return 0;
}