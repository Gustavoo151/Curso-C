#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 143: Leia uma palavra e diga se ela é palíndrona.
    ama, arara, asa, osso, radar, reviver, socos.
*/
int main(){

    char palavra[30], copia[30];
    int i, tam, contLetra=0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);

    for (i =0; i < strlen(palavra); i++){
        copia[i] = palavra[tam -1];
        tam--;
    }
    copia[i] = '\n';

    for (int i = 0; i < strlen(palavra); i++)
        if (palavra[i] == copia[i]){
            contLetra++;
        }

    printf("Original: %s\nCópia: %s\n", palavra, copia);

    if (strlen(palavra) == contLetra)
        printf("É palíndrona.\n");
    else
        printf("Não é palídrona.\n");

  return 0;
}