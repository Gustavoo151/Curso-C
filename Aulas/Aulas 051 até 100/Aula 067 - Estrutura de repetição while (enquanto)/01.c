#include <stdio.h>

// Aula 67: Estrutura da repetição while(argumento)

int main(){

    int valor;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor);

    while (valor <= 0){
        printf("Valor inválido! Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }
    
    printf("Valor lido: %d\n",valor);



    return 0;
}