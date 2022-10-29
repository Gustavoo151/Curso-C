#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 141: Como dividir uma string com a função strtok()
*/
int main(){

    char palavra[50] = {"Bom,dia,simpatia!"};

    char *pt;

    pt = strtok(palavra, ". , ! "); // Aspas duplas pq é string ( Eu posso usar um conjunto para separar a string)

    while (pt)
    {
        printf("Token: %s\n", pt); // Não precisa usar o *

        pt = strtok(NULL, ",");  // ATENÇÃO se colocar o NULL no primeiro parâmetro vai ficar em loop infito, O NULL nessa função significa que queremos que o programa retorne a próxima palavra.
    }
    
    return 0;
}