#include <stdio.h>

/* Tamanho de im int na memória
   intervalo: -2.147.483.640     2.147.483.647
   %hi po %d
*/

int main() {

    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);




    return 0;
}