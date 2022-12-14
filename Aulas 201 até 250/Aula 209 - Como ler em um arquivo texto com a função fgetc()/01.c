#include <stdio.h>
#include <stdlib.h>

/*
        Aula 209: Como ler em arquivo texto com a função fgetc?
    
    Modos de abertura de arquivos:
    w -> Escrita
    r -> Leitura
    a -> Anexar
    r+ -> Leitura e escrita
    w+ -> Leitura e escrita (apaga o conteúdo caos o arquivo exista)
    a+ -> Leitura e escrita (adiciona ao final do arquivo)
*/

int main(){
    
    FILE *file;
    char letra;

    file = fopen("conto.txt", "w+");

    if(file){
        printf("\nDigite um texto e pressione ENTER ao finalizar!");
        scanf("%c", letra);

        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }

        rewind(file); // Essa finção faz com que o ponteiro volte para o começo do arquivo

        printf("\nTexto lido do arquivo:\n");

        while(!feof(file)){  // Essa função verifica se chegou no fim do arquivo e retorna True

            letra = fgetc(file); // A funçã fgetc pegar o caractere que o ponteiro aponta para ele e o retorna
            printf("%c", letra);
        }

        fclose(file);
    }
    else
        printf("\n\t--> ERRO ao abrir arquivo!");

    return 0;
}