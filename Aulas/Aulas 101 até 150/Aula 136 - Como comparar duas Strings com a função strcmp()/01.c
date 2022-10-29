#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
            Aula 136: Como comparar duas Strings a função strcmp()
            0 - > Quando as string são exatementes iguais
            -1 -> a str1 for menor que a str2
            1 -> a str1 for maior que a str2
*/

int main(){

    char palavras1[50]  = {"a"};
    char palavras2[50]  = {"abacate"};

    printf("\n\nResultado: %d\n\n", strcmp(palavras1, palavras2));  //

    return 0;
}