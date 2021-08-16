#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, n4, media;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1+n2+n3+n4)/4;
    if(media >= 6)
        printf("NOTA = %.1f (APROVADO)\n", media);
    else
        printf("NOTA = %.1f (REPROVADO)\n", media);
    return 0;
}
