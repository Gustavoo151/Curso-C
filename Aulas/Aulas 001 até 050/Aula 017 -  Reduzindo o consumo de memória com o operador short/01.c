#include <stdio.h>
/* 
    Operador short para o tipo int 
    Intervalo: -32.768 até 32.767
    %hi ou %d
*/

int main(){

    int y = 0;
    short int x  = 32767; // para economizar memória

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x);  // O número fica negativo pois o short int ocupa 16 bytes na memória sendo 15 arquivar o número e o primeiro para definir ser é negativo ou positivo, se ele for UM é negativo e se ele for ZERO e positivo
      
    //printf("Tamanho de um int na memoria: %d bytes\n", sizeof  y);
    //printf("Tamanho de um short int na memoria: %d bytes\n", sizeof x);


    return 0;
}