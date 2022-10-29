/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

#include <stdio.h>

int main(){
    float CAMBIO = 5.30,valor;
    int opcao;

    printf("\nDigite o valor: ");
    scanf("%f", &valor);

    printf("\nDigite o tipo conversão:\n1 - De Real pra Dolar\n2 - De Dolar para Real\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("R$%.2f Convertido para Dolar é : $%.2f\n", valor, valor/CAMBIO);
            break;

        case 2:
            printf("$%.2f Convertido para Reais é : R$%.2f\n",valor, valor*CAMBIO);
            break;
        
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}