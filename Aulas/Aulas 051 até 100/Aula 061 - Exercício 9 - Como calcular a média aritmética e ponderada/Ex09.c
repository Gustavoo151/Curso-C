#include <stdio.h>

int main(){

    float nota1, nota2, nota3;
    char escolha;

    printf("Qual a media Desejada?\na - aritmetica\np - ponderada\n");
    snca("%c", &escolha);

    printf("Digite as três notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    if (escolha == 'a')
        printf("Média aritmetica: %.2f\n", (nota1 + nota2 + nota3) / 3);
    
    else if (escolha == 'p')
        printf("Média ponderada: %.2f\n", (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10);
    
    else
        printf("Opção inválida.");

    return 0;
}