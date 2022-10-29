/*
10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

#include <stdio.h>

int main(){

    int soma = 1, centavos=1;

    for (int i = 1; i < 30; i++){
        centavos = centavos * 2;
        soma += centavos;
    }
    printf("\nSOMA TOTAL: R$ %.2f\n", soma/100.0);

    return 0;
}  