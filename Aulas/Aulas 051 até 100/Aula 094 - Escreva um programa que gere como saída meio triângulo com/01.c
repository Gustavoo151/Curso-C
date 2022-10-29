/*
23) Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
********
*/

#include <stdio.h>

int main(){

    int contador = 1;

    for (int i = 1; i <= 8; i++)
    {
        for (int c = 1; c <= contador; c++)
            printf("*");

        printf("\n");
        contador ++;
    }

    return 0;
}