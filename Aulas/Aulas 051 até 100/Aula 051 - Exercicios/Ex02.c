/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

#include <stdio.h>

int main(){

    int num_1, num_2, num_3, num_4, num_5, cont_num_positivo=0, cont_num_negativo=0;

    printf("Digite o primeiro valor:");
    scanf("%d", &num_1);
    
    printf("Digite o segundo valor:");
    scanf("%d", &num_2);
    
    printf("Digite o terceiro valor:");
    scanf("%d", &num_3);
    
    printf("Digite o quarto valor:");
    scanf("%d", &num_4);

    printf("Digite o quinto valor:");
    scanf("%d", &num_5);

    num_1 > 0 ? cont_num_positivo++: cont_num_negativo++;
    num_2 > 0 ? cont_num_positivo++: cont_num_negativo++;
    num_3 > 0 ? cont_num_positivo++: cont_num_negativo++;
    num_4 > 0 ? cont_num_positivo++: cont_num_negativo++;
    num_5 > 0 ? cont_num_positivo++: cont_num_negativo++;

    printf("Números pares: %d\nNúmeros impares: %d\n", cont_num_positivo, cont_num_negativo);

    return 0;
}
