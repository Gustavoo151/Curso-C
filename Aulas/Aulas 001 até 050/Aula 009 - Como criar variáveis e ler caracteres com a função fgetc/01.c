#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;
    printf("Digite um caracter: ");
    letra = fgetc(stdin); //Essa função fgetc é normalmente usada para pegar arquivo o f vem de file
    printf("Caracter digitado: %c", letra);
    
return 0;
}