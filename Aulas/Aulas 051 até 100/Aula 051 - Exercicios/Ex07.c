/*
7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

#include <stdio.h>

int main(){

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("A letra %c é uma vogal.\n", letra);
    else
        printf("%c não é uma vogal.", letra);

    return 0;
}