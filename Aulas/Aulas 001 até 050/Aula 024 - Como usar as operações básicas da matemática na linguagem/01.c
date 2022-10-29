#include <stdio.h>

/* Operadores matemáticos
    Soma           +
    Subtração      -
    Mutiplicação   *
    Divisão        /
*/

int main(){

    printf("\nSoma: %d", 10+10);
    printf("\nSubtracao: %d", 10-5);
    printf("\nMultiplicacao: %d", 10*2);
    printf("\nDivisao: %.2f\n", 10.0/20.0); // Tem que ver se a divisão não tem resto, pois, o C só vai pegar a parte inteira da divisão, então tem que colocar 10.0/20.0 (basta colocar .0 em algum dos números) e mudar de %d para %f

    return 0;
}