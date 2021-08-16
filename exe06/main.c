#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if(x + y > z && fabs(x - y) < z){
        if(x == y && y == z)
            printf("TRIANGULO EQUILATERO");

        else if(x != y && y != z && x != z)
            printf("TRIANGULO ESCALENO");

        else
            printf("TRIANGULO ISOCELES");
    }
    else
        printf("OS LADOS NAO FORMAM UM TRIANGULO");
    return 0;
}
