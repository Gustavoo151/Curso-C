#include <stdio.h>
#include <stdlib.h>
/*
    Aula 157: Fazer uma função que calcula o enésimo termo da sequência de fibonacci
*/
int fibonacci(int num){

    if(num == 1)
        return 0;
    else{
        if(num == 2)
            return 1;
        else
            return fibonacci(num - 1) + fibonacci(num - 2);
    }       
}
int main(){

    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("Resultada cálculo de fibinacci do número %d: %d\n", n, fibonacci(n));

    return 0;
}