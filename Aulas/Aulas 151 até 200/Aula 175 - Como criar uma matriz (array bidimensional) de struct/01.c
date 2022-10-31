#include <stdio.h>
#include <stdlib.h>

// Aula 175: Como criar uma matriz de struct

typedef struct {
    int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void imprimirPessoa(Pessoa p){
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tDta de nas: %d/%d/%d\n\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

// Função que lê os dados de uma pessoa e retorna para chamou
Pessoa lerPessoa(){
    char lixo; // Local para armazenar buffer do teclado que não irei usar
    Pessoa p;
    printf("\nDigite seu nome: ");
    fgets(p.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%s", &p.idade);

    scanf("%c", &lixo);

    printf("Digite seu sexo: ");
    scanf("%c", &p.sexo);

    printf("Digite sua data de nasc dd/mm/aaaa: ");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);

    scanf("%c", &lixo);
    return p;
}


int main(){

    Pessoa pessoa;

    Pessoa pessoas[3][3];

    for (int i =0; i < 3; i++){
        for(int j =0; j < 3; j++)
            pessoas[i][j] = lerPessoa();
    }

    return 0;
}
