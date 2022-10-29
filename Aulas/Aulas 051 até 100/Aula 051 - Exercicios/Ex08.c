/*
8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

#include <stdio.h>

int main(){

    int num_mes;

    printf("Digite o número do mês: ");
    scanf("%d", &num_mes);

    switch (num_mes)
    {
    case 1:
        printf("Janeiro - 31 Dias\n");
        break;

    case 2:
        printf("Fevereiro - 28 Dias\n");
        break;

    case 3:
        printf("Março - 31 Dias\n");
        break;

    case 4:
        printf("Abril - 30 Dias\n");
        break;

    case 5:
        printf("Maio - 31 Dias");
        break;

    case 6:
        printf("Junho - 30 Dias\n");
        break;

    case 7:
        printf("Julho 0 31 Dias\n");
        break;

    case 8:
        printf("Agosto - 31 Dias\n");
        break;

    case 9:
        printf("Setembro - 30 Dias\n");
        break;

    case 10:
        printf("Outubro - 31 Dias\n");
        break;

    case 11:
        printf("Novembro - 30 Dias\n");
        break;

    case 12:
        printf("Dezembro - 31 Dias\n");
        break;
    
    default:
        printf("Valor inválido.\n");
    }

    return 0;
}