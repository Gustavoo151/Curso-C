#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
        Aula 144: Leia uma frase e diga se ela é palíndroma.
        - Roma me tem amor
        - A grama é amarga
        - Anotaram a data da maratona
        - A mãe te ama
        - A torre da derrota
        - A sacada da casa
        - Luz azul
*/
int main(){

    char palavra[50], copia[50];
    int i, tam, diferente=0, j= 0;

    printf("Digite um frase: ");
    scanf("%50[^\n]", palavra);

     // Remover => !? ,;.
    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] != '!' && palavra[i] != '?' && palavra[i] != ' ' && palavra[i] != ',' && palavra[i] != ';' && palavra[i] != '.')
            copia[j++] = palavra[i];
    }
    copia[j] = '\0'; // O \0 serve para indicar final da linha

    printf("Original: %s\nCópia: %s\n", palavra, copia);

    tam = strlen(copia);
    tam--;

    for(i= 0; i < strlen(copia); i++){
        if (copia[i] != copia[tam])
            diferente++;
        tam--;
    }
    
    if (diferente == 0)
        printf("\nÉ palíndroma\n");
    else
        printf("\nNão é palíndroma\n");
        

    return 0;
}