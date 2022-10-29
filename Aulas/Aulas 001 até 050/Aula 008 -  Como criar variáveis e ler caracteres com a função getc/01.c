#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin);   /* No getc ele pode pegar um entrada de um texto do teclado e etc, o parametro sdin e para selecionar do teclado*/
    printf("Caracter digitado: %c\n", letra);
   

return 0;
}