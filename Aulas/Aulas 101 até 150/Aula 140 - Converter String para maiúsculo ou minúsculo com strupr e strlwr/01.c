#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
        Aula 140: Convertendo uma string para maiúsculo ou minusculo com as funções:
    -> strupr() Função para deixar maiúscula
    -> strlwr() Funçõa para deixar minuscula
*/

int main(){

    char palavra[50] = {"Bom dia simpatia!"};

// ESTÁ FUNÇÃO SÓ FUNCIONA NO WINDOWS 


    printf("Antes: %s\n", palavra);

    strupr(palavra); // Não está funcionando

    printf("\nDepois: %s\n", palavra);

    strlwr(palavra); // Não está funcionando

    printf("\nMinusculo: %s\n", palavra);


    return 0;
}