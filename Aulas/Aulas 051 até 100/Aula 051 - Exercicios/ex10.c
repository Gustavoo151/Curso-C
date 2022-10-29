/*
10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.
*/

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