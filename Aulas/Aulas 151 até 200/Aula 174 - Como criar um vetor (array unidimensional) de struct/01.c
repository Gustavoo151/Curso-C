#include <stdio.h>
#include <stdlib.h>

// Aula 174: Como criar um vertor de struc ?

typedef struct {
    int dia, mes,ano;

}DataNas;

typedef struct {
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void imprimiPessoa(Pessoa pessoa){
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Sexo: %c\n", pessoa.sexo);
    printf("Data de nasc: %d/%d/%d\n\n", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);
}

Pessoa lerPessoa(){
    Pessoa pessoa;
    char lixo;

    printf("\nDigite seu nome: ");
    fgets(pessoa.nome, 100, stdin);


    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    scanf("%c", &lixo);

    printf("Digite seu sexo: ");
    scanf("%c", &pessoa.sexo);

    printf("Digite sua data de nasc dd/mm/aaaa: ");
    scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

    scanf("%c", &lixo);


    return pessoa;
}

int main(){

    Pessoa pessoa;

    Pessoa pessoas[3];

    for (int i =0; i < 3; i++){
    pessoas[i] = lerPessoa();
    }

    printf("+++++++++++++++++++++++++++++++++++++\n");
    
    for (int i = 0; i < 3; i++){
        imprimiPessoa(pessoas[i]);
    }
    return 0;
}