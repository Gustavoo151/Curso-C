#include <stdio.h>
#include <stdio.h>

// Aula 184: O que é e como cira um ponteiro ?

int main(){

    // Uma variável de tipo ponteiro e uma variável que indica um endereço de memória

    int *p = 10;  // Criando um ponteiro

    int num = 10; 

    // p = num; // Um ponteiro só pode receber um endereço memória

    p = &num; // O & num serva para passar o endereço de memória para a variável

    printf("Valor de num: %d\n", num);
    printf("Endereço de num: %p\n", &num); // Para imprimir o endereço de mémoria basta colocar o & na frente

    printf("Valor de p: %p\n", p); // Usando %p para ver o endereço de memória
    printf("Endereço de p: %p\n", &p); // Para imprimir o endereço de mémoria basta colocar o & na frente

    printf("Valor apontado por p: %d\n", *p); // Para obter o conteúdo apontado por p basta colocar um * na frente da variável

    return 0;
}