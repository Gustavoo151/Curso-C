#include <stdio.h>
//#include <stdlib.h>
#include <time.h>
/*
        Aula 103 - Como gerar números aleatórios para preencher um vetor?
*/

int main() {

    int i;
    int vetor[10];

    srand(time(NULL)); // Essa função recebe um parâmetro para servir como semente para gerar o número pseudo ateatório na função rand() . Toda vez que quisermos ter um número aleatório teremos que adicionar outro valor para servir como semente.

    // Para não precisarmos usar um número pelo usuário, usamos a variável que tem o valor da hora so sistema

    for(int i = 0; i < 10; i++)
        vetor[i] = rand();   // Função rand() serve para gerar números "aletórios". Na computação não existe números aleatórios, mas sim pseudos aleatórios. A função rand() gera um número pseudo aleátorio a parti de uma semente que é um valor passando pelo usuário. Se caso não passarmos esse número ele vai pegar algum valor da memória e sempre gerar o mesmo valor.

    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%d\n", vetor[i]);  

    return 0;
}