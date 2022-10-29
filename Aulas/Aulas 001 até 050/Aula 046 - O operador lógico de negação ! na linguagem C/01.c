#include <stdio.h>

/*
        Aula 046: Operador lógico de negação
        TABELA VERDADE x  !x
                       v  f
                       f  v
*/ 

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Operador ternário");
    !(a < 0)  ? printf("É negativo\n") : printf("É positivo ou ígual a zero!\n"); // Tem que colocar nos () por causa da ordem de precedência, para usar a negação basta coloca o ! na  frente

    printf("\n\nIf Else\n\n");
    printf("Resultado lógico: %d\n", a < 0);

    if (!(a < 0)){  // Dessa forma usando a negação as respostas também mudam
        printf("É negativo\n");
    }
    else {
        if (a > 0)
            printf("\n\tValor positvo!");
        else
            printf("\n\tValor igual a zero!\n");
    }
    
    return 0;
}