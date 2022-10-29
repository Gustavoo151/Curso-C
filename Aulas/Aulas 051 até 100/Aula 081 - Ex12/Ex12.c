/*
12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.
*/

#include <stdio.h>

int main(){

    float altura,somaAltura, contAlunoMenos170, somaIdade, contIdadeMaior20;
    int idade;
    char opcMenu;

    for (int i = 1; i <= 45; i++)
        printf("Aluno %d digite sua altura e ídade: ", i);
        scanf("%f %d", altura, idade);

        if (altura < 1.70){
            somaAltura += altura;
            contAlunoMenos170 ++;
        }

        if (idade > 20){
            somaIdade += idade;
            contIdadeMaior20 ++;
        }

    printf("Menu:\na) A idade média dos alunos com menos de 1,70m de altura:\nb) A altura média dos alunos com mais de 20 anos:");
    scanf("%c", &opcMenu);

    switch (opcMenu){

        case 'a':
            printf("A idade média dos alunos com menos de 1,70m de altura: %.2f ", somaAltura / contAlunoMenos170);
            break;

        case 'b':
            printf("A altura média dos alunos com mais de 20 anos: %.2f" , somaIdade / contIdadeMaior20);
            break;

        default:
            printf("Opção inválida.");
    }        
        
    return 0;
}