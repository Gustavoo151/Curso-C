#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 212: Como ler linhas de texto com a função fgets:

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
    char texto[500];

    if(file){
        printf("Digite um frase ou 1 caracter para finalizar:\n");
        scanf("%500[^\n]", texto);   // Ler no máximo até 500 caracteres até que seja pressionado a tecla ENTER
        scanf("%c");   // Tirando o ENTER que fica no buffer do teclado e gera i Loop infinito

        while (strlen(texto) > 1){
            fputs(texto, file);  
            fputc('\n', file);   // Para pular uma linha  
            scanf("%500[^\n]", texto);   // Ler no máximo até 500 caracteres até que seja pressionado a tecla ENTER
            scanf("%c");  // Tirando o ENTER que fica no buffer do teclado e gera i Loop infinito

        }
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