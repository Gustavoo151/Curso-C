#include <stdio.h>

int main(){

    float lado1, lado2, lado3;

    printf("Digite os valores dos três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1+lado2 < lado3 || lado1 + lado3 < lado2 || lado2 + lado3 < lado1)
        printf("Não formam um triângulo!\n");

    else if (lado1 == lado2 && lado2 == lado3)
        printf("Triângulo Equilátero.\n"); // Todos os lados iguais

    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)  // Todos os lados diferentes
        printf("Triângulo escaleno.\n");

    else if (lado1 == lado2 && lado2 != lado3 || lado1 == lado3 && lado3 != lado2 || lado2 == lado3 && lado3 != lado1)  // Dois lados iguais
        printf("Triângulo Isóceles.\n");

    return 0;
}