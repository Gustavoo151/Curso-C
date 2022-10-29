/*
16) Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10.
*/

#include <stdio.h>  

int main(){

    int numero = 1;

    while (numero % 2 != 0 || numero % 3 != 0 || numero % 4 != 0 || numero % 5 != 0 || numero % 6 != 0 || numero % 7 != 0 || numero % 8 != 0 || numero % 9 != 0 || numero % 10 != 0)
    {
        numero ++;
    }
    
    printf("O menor número inteiro que seja divisível por todos os números inteiros entre 1 e 10 é: %d\n", numero);

    return 0;
}