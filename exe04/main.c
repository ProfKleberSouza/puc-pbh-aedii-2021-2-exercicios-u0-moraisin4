#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, menor, maior;

    scanf("%d %d %d", &n1, &n2, &n3);

    menor = n1;
    maior = n1;

    if(menor > n2)
        menor = n2;
    if(menor > n3)
        menor = n3;

    if(maior < n2)
        maior = n2;
    if(maior < n3)
        maior = n3;

    printf("MENOR = %d\n", menor);
    printf("MAIOR = %d\n", maior);
    return 0;
}
