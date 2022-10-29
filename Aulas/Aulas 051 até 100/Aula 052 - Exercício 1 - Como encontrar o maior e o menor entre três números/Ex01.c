#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, menor, maior;

    printf("Digite os três valores: ");
    scanf("%d%d%d", &a, &b, &c);

    // Primeira solução
    if (a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }

    else{
        if (b < c)
            menor = b;
        else
            menor = c;
    }

    if (a > b){
        if (a > c)
            maior = a;
        else
            maior = c;
    }
    else {
        if (b > c)
            maior = b;
        else
            maior = c;
    }
    printf("Primeira versão\tMenor: %d\tMaior: %d\n", menor, maior);

    // Segunda versão
    menor = a;
    maior = a;

    if (menor > b)
        menor = b;
    
    if (menor > c)
        menor = c;

    if (maior < b)
        maior = b;
    if (maior < c)
        maior = c;

    printf("Primeira versão\tMenor: %d\tMaior: %d\n", menor, maior);


    return 0;
}