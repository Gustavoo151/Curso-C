#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Aula 170: De quanta memória uma struct precisa?*/

// Criando um struct para data de nascimento
typedef struct{  
    int dia, mes, ano;
}Nascimento;

typedef struct{
    Nascimento dataNas;  // Colocando um struct dentro de outro struct
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main(){
    
    Pessoa pessoa; // Criando a variável tipo Pessoa
    Nascimento data;

    printf("%d\n", sizeof(data));  // O tamanho do struct depende do tamanho da suas variáveis
    printf("%d\n", sizeof(pessoa));  // O tamanho do struct depende do tamanho da suas variáveis

    printf("Digite seu nome: ");
    // Param: 1: Local de armazenameto. 2: Tamanho da vetor. 3:
    fgets(pessoa.nome, 100, stdin); // stdin é uma função que indica que é para fazer leitura da entrada padrão (que por padrão é o teclado)

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Qual seu sexo [mM/fF]: ");
    scanf(" %c", &pessoa.sexo); // Coloquei um espaço antes do %c para 'tirar' o buffer do \n

    printf("Digite sua data de nascimentos [DD/MM/AAAA]: ");
    scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

    printf("Nome: %s\nIdade: %d\nSexo: %c\nData de nascimento: %d/%d/%d\n", pessoa.nome, pessoa.idade, pessoa.sexo, pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);

    return 0;
}