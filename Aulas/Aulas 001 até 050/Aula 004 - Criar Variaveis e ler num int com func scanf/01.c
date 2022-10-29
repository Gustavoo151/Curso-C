#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor); // O & envia o endereço de memória para variável
    printf("O valor que o usuario digitou foi: %d", valor);

return 0;
}