#include <stdio.h>

int main(){

    int mes;

    printf("Digite um número: ");
    scanf("%d", &mes);

    switch (mes){
        
        
         // Como foi encontrado um padrão podemos colocar um após o outro, por não ter usando um break todos os cases vão ser executados até chegar um break
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\nO mês possui 31 dias.\n");
            break;

        case 2:
            printf("\nO mês possui 28 dias\n");
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\nAbril - 30\n");
            break;

        default:
            printf("Valor inválido.\n");
    }

    return 0;
}