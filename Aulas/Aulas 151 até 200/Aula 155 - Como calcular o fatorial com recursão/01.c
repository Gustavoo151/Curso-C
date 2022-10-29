#include <stdio.h>
#include <stdio.h>
/*
    Aula 155: Fazer uma função que calcule e retona o fatorial de n.
*/

int fatorial(int num){
    int resultado = 1;
    
    if (num == 0 || num == 1)
        return 1; // Toda vez que for fazer um função recursiva todos os pontos de saídas terão que ter um return
    else{
        return num * fatorial(num - 1); // Ponto de saída
    }
}


int main(){

    int n;

    printf("Digite um número maior que zero: ");
    scanf("%d", &n);

    printf("O fatorial de %d é %d.\n", n, fatorial(n));
    return 0;
}