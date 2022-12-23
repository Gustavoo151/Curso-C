#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 211: Como escrever linhas de textos com a função fputs :

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

int main(){

    char nome[] = {"conto.txt"};

    escrever(nome);

    return 0;
}