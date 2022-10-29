/*
8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

#include <stdio.h>

int main(){

    int valor_menu;
    float num_1, num_2;

    do {
        printf("\nMENU:\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        scanf("%d", &valor_menu);

        if (valor_menu != 0){
            printf("Digite o primerio número e o seguno número: ");
            scanf("%f %f", &num_1, &num_2);
        }

        switch (valor_menu){

            case 1:
                printf("%.2f + %2.f = %.2f", num_1, num_2, num_1 + num_2);
                break;

            case 2:
                printf("%.2f - %.2f = %.2f", num_1, num_2, num_1 - num_2);
                break;

            case 3:
                printf("%.2f x %.2f = %.2f", num_1, num_2, num_1 * num_2);
                break;
            
            case 4:
                while (num_2 == 0){
                    printf("Não exite divisão por ZERO!!!");
                    printf("Digite o segundo número:");
                    scanf("%f", &num_2);
                }
                printf("%.2f / %.2f = %.2f", num_1, num_2, num_1 / num_2);
                break;
            
            default:
                printf("Opção inválida.");
                break;
        }

    }  while (valor_menu != 0);


    return 0;
}