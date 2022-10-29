#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 139 - Localizando uma substring com a função strstr()
*/

int main(){

    char palavra[50] = {"Bom dia simpatia!"};
    char str[] = {"dia"};
    char *ponteiro;

    ponteiro = strstr(palavra, str);

    if (ponteiro) // if (ponteiro) é igual a fazer if(ponteiro != NULL)
        printf("%c%c%c\n", *ponteiro, *(ponteiro +1), *(ponteiro + 2));
    
    else
        printf("\nPonteiro nulo.\n");
  
    return 0;
}