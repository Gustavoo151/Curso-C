#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
               Aula 030
    Tabela ascii e acentuação
    1 byte (8 bits) -> -128 até 127
    Unsigned 1 byte -> 0 até 255

    9 é o caractere de tabulação \t
    10 é o caractere de nova linha \n (enter)
    65 é a letra A maiúscula.
    66 é a letra B maiúscula.
    90 é a letra z maiúscula.
    1ª = setlocale(LC_ALL, NULL);  // Padrão da linguagem C
    2ª = setlocale(LC_ALL, "");  // Padrão do sistema operacional
    3ª = setlocale(LC_ALL, "Portuguese"); // Português brasileiro

    A tabela ASCII resumida vai de -128 até 127
    A tabela ASCII extendida vai de 0 até 255 (para chegar até esses valores devemos usar o unsigned)
*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    printf("%s\n",setlocale(LC_ALL, "Portuguese"));  // Para mostrar o retorno da função

    char letra = 'f';
    rintf("\n%d\n", letra); // Se colocar um char no %d que é para mostrar um inteiro, ele vai printar o número da letra na tabela ASCII

    printf("\n%c\n", 102); // Se colocar o número de uma letra da tabela ASCII em um %c ele vai printar a letra

    printf("Coração\n");  

    return 0;
}