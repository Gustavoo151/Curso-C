#include <stdio.h>
#include <stdlib.h>
/*
    Aula 153: Funções e procedimentos recursivos
    Exemplo: Imprimir todos os números de n até 0
*/

void recusiv(int numero){
    if (numero < 0)
        return NULL;
    else
        // printf("%d\n", numero);  // Para imprimir de forma crescente
        recusiv(numero - 1);
        printf("%d\n", numero);     // Para imprimir de forma descrescente
}


int main(){

    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    recusiv(n);

    return 0;
}