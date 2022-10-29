#include <stdio.h>
#include <stdlib.h>
/*
    Aula 208: Como escrever em arquivos texto com a função fputc?

    Modos de abertura de arquivos:
    w -> Escrita
    r -> Leitura
    a -> Anexar
    r+ -> Leitura e escrita
    w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)  // Vai apagar o arquivo antigo
    a+ -> Leitura e escrita (adiciona ao final do arquivo)
*/

int main(){

    FILE *file;  // Criando ponteiro para o arquivo

    char letra;

    file = fopen("teste.txt","w");  // Abrindo a pasta

    if(file){
        printf("\nDigite um texto e pressione enter ao finalizar: ");
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }
    else
        printf("Erro ao abrir arquivo");

    return 0;
}