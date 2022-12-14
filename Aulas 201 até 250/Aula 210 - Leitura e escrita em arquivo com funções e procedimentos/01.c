#include <stdio.h>
#include <stdlib.h>

/*
        Aula 210: Organizando nosso código em procedimentos
    
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
    char letra;

    if(file){
        printf("\nDigite um texto e pressione ENTER ao finalizar!\n");
        scanf("%c", &letra);

        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }
    else
        printf("\n\t--> ERRO ao abrir arquivo!");
}

void ler(char f[]){
    FILE *file = fopen(f, "r");
    char letra;

    if(file){
        printf("\nTexto lido do arquivo:\n");

        while(!feof(file)){  // Essa função verifica se chegou no fim do arquivo e retorna True
            letra = fgetc(file); // A funçã fgetc pegar o caractere que o ponteiro aponta para ele e o retorna
            printf("%c", letra);
        }
        fclose(file); 
    }
    else
        printf("\n\t--> ERRO ao abrir arquivo!");

}


int main(){
    char none[] = {"conto.txt"};   // No do arquivo txt

    escrever(none);
    ler(none);

    return 0;
}