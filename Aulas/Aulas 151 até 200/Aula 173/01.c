#include <stdio.h>
#include <stdlib.h>

//  Aula 173: Como criar uma função que retorna uma struct?

typedef struct{   // Criando uma struct data do nascimento
    int dia, mes, ano;
}DataNas; // Nome do struct

typedef struct{  // Criando struct dados básico da pessoa
    DataNas dataNas;  // Encapulando o struct DataNas
    int idade;
    char sexo;
    char nome[100];
}Pessoa;  //  Nome do struct

void imprimirPessoa(Pessoa p){
    printf("\tNome: %s\n", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}


// Função que lê os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa(){

    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite f ou m para o sexo: ");
    scanf(" %c", &pessoa.sexo);

    printf("Ditite sua data de nascimento no formato dd/mm/aaaa: ");
    scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);
    printf("teste");
    return pessoa;
}


int main(){

    Pessoa pessoa;

    pessoa = lerPessoa();

    imprimirPessoa(pessoa);

   return 0;

}