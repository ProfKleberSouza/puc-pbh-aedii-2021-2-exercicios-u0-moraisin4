#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, num, maior, menor;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(i == 0){
          maior = num;
          menor = num;
        }
        else{
          if(num > maior)
            maior = num;
          else if(num < menor)
            menor = num;
        }
    }
    printf("MENOR = %d\n", menor);
    printf("MAIOR = %d\n", maior);
    return 0;
}
