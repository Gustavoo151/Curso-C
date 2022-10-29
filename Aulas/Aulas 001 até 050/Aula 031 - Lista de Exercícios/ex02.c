/*
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

#include <stdio.h>

void trocar_valores(int valor1, int valor2){
    int a = valor2, b = valor1;

    printf("Valor de A trocado: %d\nValor de B trocado: %d\n", a,b);
}

int main(){

    int a,b;

    printf("Digite os valores de A e B: ");
    scanf("%d %d", &a,&b);

    printf("Valor de A: %d\nValor de B: %d\n", a,b);

    trocar_valores(a,b);

    return 0;
}