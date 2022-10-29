#include <stdio.h>

int main(){

    int num;

    printf("Digite um valor qulquer: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        printf("É divisível por 2, 3, ou 5.\n");
    else
        printf("Não é divisível por 2, 3, ou 5");

    return 0;
}