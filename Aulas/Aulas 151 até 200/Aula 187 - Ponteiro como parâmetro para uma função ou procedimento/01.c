#include <stdio.h>
#include <stdlib.h>

//  Aula 187: Como passar um ponteiro como parâmetro?


// OBSERVAÇÃO O LINGUAGEM C NÃO SUPORTA PASSAGEM DE VALOR POR REFERÊNIA. POREM O EFEITO É MUITO PARECIDO COM A PASSAGEM POR REFERÊNCIA.

void imprimir(int *num){  // Colocando um * para sinalizar que vai receber um endereço de memória
    printf("%d\n", *num); // Valor atribuido na função main
    *num = 80;  
}

int main(){

    int idade = 35;

    // imprimir(idade);  // Passagem de parâmetro por valor
    imprimir(&idade);// Passagem de parâmetro por referência (Não passamos mais uma variável e sim um ponteiro), & retorna o endereço de memória.
    printf("No main: %d\n", idade);  // Valor apontado no procedimento imprimi *num = 80;

    return 0;
}