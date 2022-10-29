/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
*/

#include <stdio.h>

int main(){

    float nota1, nota2, nota3;
    char opcao;

    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("\nEscolha a operação:\n\ta - Média Aritmétrica:\n\tp - Média Ponderada:\n");
    scanf(" %c", &opcao);

    switch (opcao)
    {
        case 'a':
            printf("Media Aritmétrica: %.2f\n", (nota1 + nota2 + nota3)/3);
        break;

        case 'p':
            printf("Média Ponderada: %.2f\n",(nota1*3 + nota2*3 + nota3*4)/10);
            break;
        
        default:
            printf("Opção inválida.");
    }

    return 0;
}