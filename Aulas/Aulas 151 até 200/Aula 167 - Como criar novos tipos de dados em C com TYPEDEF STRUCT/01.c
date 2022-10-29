#include <stdlib.h>
#include <string.h>

// Aula 167: Como criar novos tipos de dados em C com typedef struct

typedef struct { // Criando um struct
    int idade;
    char sexo;
    char nome[100];
}Pessoa;  // Nome da tipo

// OUTRA FORMA DE CRIAR STRUCT
struct pessoa2{
    int idade;
    char sexo;
    char nome;
};

int main(){
   
    Pessoa pessoa1; // Forma 1
    struct pessoa2 pessoa2;  // Forma 2

    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    // Param: 1- variável onde eu quero salvar. 2- Conteúdo a ser salvo
    strcpy(pessoa1.nome, "Gustavo de oliveira");  // Função para fazer a cópia de uma string

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    return 0;
}