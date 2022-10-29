#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Aula 168: Como criar uma struct com dados lidos do teclado

typedef struct{
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main(){
    
    Pessoa pessoa; // Criando a variável tipo Pessoa

    printf("Digite seu nome: ");
    // Param: 1: Local de armazenameto. 2: Tamanho da vetor. 3:
    fgets(pessoa.nome, 100, stdin); // stdin é uma função que indica que é para fazer leitura da entrada padrão (que por padrão é o teclado)

    printf("Digite usa idade: ");
    scanf("%d", &pessoa.idade);

    printf("Qual seu sexo [mM/fF]: ");
    scanf(" %c", &pessoa.sexo); // Coloquei um espaço antes do %c para 'tirar' o buffer do \n

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}