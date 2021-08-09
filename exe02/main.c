#include <stdio.h>

int main() {
   int n1, n2, n3;
   float dist;
   scanf("%i %i %i", &n1, &n2, &n3);
   printf("R = %i\n", n3);
   printf("V = %i\n", n2);
   printf("T = %i\n", n1);
   printf("D = %i\n", n1*n2);
   printf("L = %d\n", (n1*n2)/n3);
   return 0;
}