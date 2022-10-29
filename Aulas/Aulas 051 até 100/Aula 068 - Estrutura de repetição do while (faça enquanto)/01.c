#include <stdio.h>

int main() {

    int valor, valor2;

    printf("Digite um valor maior quer zero: ");
    scanf("%d", &valor);

    while (valor <= 0) {
        printf("Valor inválido! Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("Valor lido: %d\n\n");

    do {  // O do while é usando quando não queremos ou podemos usar um variável para testar o while
        printf("Digite um valor maior quer zero: ");
        scanf("%d", &valor2);
    } while (valor2 <= 0);

}