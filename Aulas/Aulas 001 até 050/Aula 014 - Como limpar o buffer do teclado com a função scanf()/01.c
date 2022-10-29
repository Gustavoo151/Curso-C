#include <stdio.h>

int main() {

    char a, b;

    printf("Digite um letra: ");
    scanf("%c", &a);

    scanf("%c"); // Esse outro jeito de resolver o problema do buff, porque ele vai jogar ele dentro de %c e não vai salvar me nenhum lugar

    printf("Digite um letra: ");
    scanf(" %c", &b);  // Para resolver esse problema é só colocar o espaço na frente do &c

    printf("Primeira letras: %c\nSegunda letra: %c", a,b); // Mesmo erros de buffer

return 0;
}