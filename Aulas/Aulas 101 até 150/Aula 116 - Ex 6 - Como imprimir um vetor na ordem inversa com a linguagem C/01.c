/*
6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

#include <stdio.h>

int main(){

    float valores[10];
    int opcao;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
    }

    do {
        printf("\nMENU:\n0 – finaliza o programa:\n1 – imprime o vetor na ordem do início ao fim:\n2 – imprime o vetor na ordem inversa (do fim para o início).\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            for (int i = 0; i < 10; i++)
                printf("%.2f ", valores[i]);
            break;
        
        case 2:
            for (int i = 9; i >= 0; i--)
                printf("%.2f ", valores[i]);
            break;
        
        case 0:
            break;
        
        default:
            printf("Valor inválido.");
            break;
        }
    } while (opcao != 0);

    return 0;
}