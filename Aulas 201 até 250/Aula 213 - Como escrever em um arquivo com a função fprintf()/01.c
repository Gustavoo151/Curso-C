#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 213: Como escrever em um arquivo texto com a função fprintf?:

    A função fputs escreve um string completa no arquivo

    Modos de abertura de arquivos:
    w -> Escrita
    r -> Leitura
    a -> Anexar
    r+ -> Leitura e escrita
    w+ -> Leitura e escrita (apaga o conteúdo caos o arquivo exista)
    a+ -> Leitura e escrita (adiciona ao final do arquivo)    
*/

void escrever(char f[]){
    FILE *file = fopen(f, "w");
    char nome[100], a[10];
    int idade, opcao = 1;
    float altura;

    if(file){
        do {
            printf("Digite nome, idade e altura: ");
            scanf("%100[^\n] %d %f", nome, &idade, &altura);
            fprintf(file,"%s %d %.2f\n", nome, idade, altura);

            printf("1: Novo Cadastro: \n2: Sair: \n");
            scanf("%d", &opcao);
            scanf("%c",a);
        }while(opcao == 1);
        fclose(file);
    }
    else
        printf("\nErro ao abrir arquivo!\n");
}

void ler(char f[]){
    FILE *file = fopen(f, "r");
    char texto[500];

    if(file){
        printf("\n\tTexto lido do aquivo\n");

        while(!feof(file)){ // Verificando se chegou no fim do arquivo . 
            if(fgets(texto, 500, file))  //Usando o retorno do fgets para parar a leitura antes do \n
                printf("--> %s", texto);
        }
        fclose(file);
    }
    else
        printf("\nErro ao abrir arquivo!\n");
}

int main(){

    char nome[] = {"conto.txt"};

    escrever(nome);
    ler(nome);
    return 0;
}