/*
18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/

#include <stdio.h>

int main(){

    char sexo;
    float salario, somaSalario = 0;
    int quantMulheres = 0, idade, maiorIdadeGrupo = 0, menorIdadeGrupo = 0, quantPessoas;

    printf("Digite a quantidade de pessoas entrevistadas: ");
    scanf("%d",&quantPessoas);

    for (int i = 1; i <= quantPessoas; i++){ 
        printf("Digite sua Idade, sexo (M/F) e salário: ");
        scanf("%d %c %f", &idade, &sexo, &salario);

        somaSalario += salario;

        if (menorIdadeGrupo == 0)  // Menor Idade
            menorIdadeGrupo = idade;
        else if (menorIdadeGrupo >= idade) 
            menorIdadeGrupo = idade;

        if (maiorIdadeGrupo == 0)  // Maior idade
            maiorIdadeGrupo = idade;
        else if (maiorIdadeGrupo <= idade)
            maiorIdadeGrupo = idade;

        if (sexo == 'f' && salario < 2000)
            quantMulheres ++;
        }

    printf("\na média de salário do grupo: %.2f\n", somaSalario/quantPessoas);
    printf("Maior idade: %d\nMenor idade: %d\n", maiorIdadeGrupo, menorIdadeGrupo);
    printf("quantidade de mulheres com salário até R$2000,00: %d\n\n", quantMulheres);

    return 0;
}