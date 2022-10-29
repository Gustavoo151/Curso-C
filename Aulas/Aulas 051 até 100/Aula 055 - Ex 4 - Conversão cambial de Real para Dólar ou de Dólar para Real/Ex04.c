#include <stdio.h>

int main(){

    float valor, valor_convertido;
    int opcao;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Converter de real para dolar\n2 - Converter de dolar para real\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            valor_convertido = valor/5.3;
            printf("Valor convertido: $%.2f\n", valor_convertido);
            break;
        
        case 2:
            valor_convertido = valor*5.3;
            printf("Valor convertido: R$%.2f\n", valor_convertido);
            break;

        default:
            printf("Opção inválida!!!\n");
    }

    return 0;
}