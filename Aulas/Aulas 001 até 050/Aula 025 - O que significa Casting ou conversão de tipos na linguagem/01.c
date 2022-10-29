#include <stdio.h>

/*
    Conversão de tipos
*/

int main(){

    int a =10, b=20;
    float pi = 3.1415;
    
    a = (int)pi;

    printf("\nSoma: %d", a + b);
    printf("\nSubtracao: %d", a- b);
    printf("\nMultiplicacao: %d", a * b);
    printf("\nDivisao: %f\n", (float)a/b);  // Para converte um tipo basta colocar a esquerda dentro de parenteses o tipo desejado , pode fazer qualquer lado da divisão

    // Observação ter muito cuidado na hora de converter um float para um inteiro pois a parte após a vírgula será desconsiderada
    printf("Valor de a: %d", a);    

    return 0;
}