/*
5) Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

#include <stdio.h>

int main(){

    float nota_1, nota_2;

    printf("Digite a nota 1: ");
    scanf("%f", &nota_1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &nota_2);

    while ((nota_1 < 0 || nota_1 > 10) || (nota_2 < 0 || nota_2 > 10)){

        if (nota_1 < 0 || nota_1 > 10){
            printf("Valor inválido digite a nota 1 novamente: ");
            scanf("%f", &nota_1);
        }
        if (nota_2 < 0 || nota_2 > 10){
            printf("Valor inválido digite a nota 2 novamente: ");
            scanf("%f", &nota_2);
        }
    }

    printf("Média do aluno: %.2f\n", (nota_1+nota_2) / 2);

    return 0;
}