#include <stdio.h>
#include <stdlib.h>

/*
        Aula 131: Lendo uma String com a função fgets()
*/

int main(){

    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagen C?"};

    printf("Digite seu nome: ");
    // scanf("%20[^\n]", palavras);

    // gets(palavras); 

    fgets(palavras, 50, stdin);  // f de file.  # stdin (teclado) é a entrada padrão do programa (buffer). # Se for altera o temanho dos dois vetores tem que trocar nos dois lugare. # O programa ler um caractere a menos pois o último é usado para indicar o final da string (delimitador de string)

    printf("%s\n\n", palavras);

    return 0;
}