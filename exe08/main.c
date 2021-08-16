#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    do{
        scanf("%d", &num);
        if(num > 0)
            printf("POSITIVO\n");
        else if(num < 0)
            printf("NEGATIVO\n");
    }while(num != 0);
}
