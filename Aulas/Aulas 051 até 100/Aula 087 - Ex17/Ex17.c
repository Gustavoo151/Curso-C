/*
17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
Exemplo: (no pdf)
*/

#include <stdio.h>

int main(){

    float numeros;
    int quantPositivos = 0, quantNegativos = 0;

    printf("Digite 0 para sair.\n");

    do {
        printf("Digite um valor: ");
        scanf("%f", &numeros);

        if (numeros > 0)
            quantPositivos ++;

        else if (numeros < 0)
            quantNegativos ++;
            
    }while (numeros != 0);

    printf("Positivos: %d\nNegativos: %d\n", quantPositivos, quantNegativos);

    return 0;
}