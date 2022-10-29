#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Função padrão do C para transformar caractere para Miúsculo ou Minúsculo
/*
          Aula 151
      Criar um procedimento para converter uma string para maiúsculo
*/

// Procedemento que converte uma string para maiúsculo
void maiusculo(char str1[], char str2[]){

    int i = 0;

    while(str1[i] != '\0'){
        str2[i] = toupper(str1[i]); // toupper()  Pega um letra minúscula e deixa maíuscula
        i++;
    }
    str2[i] = '\0'; // Isso server para indicar o final do array e diminui a chace de dar erro
}

// Procedimento para converter uma string para minúsculo
void minusculo(char str1[], char minuscula[]){
    int i = 0;

    while(str1[i] != '\0'){
        minuscula[i] = tolower(str1[i]);
        i++;
    }
    minuscula[i] = '\0'; // Isso server para indicar o final do array e diminui a chace de dar erro
}

int main(){

    char str1[] = "Ola. Bom dia.";
    char str2[50];

    printf("%s\n", str1);

    maiusculo(str1, str2);

    printf("%s\n", str2);

    minusculo(str1, str2);

    printf("%s\n", str2);

    return 0;
}