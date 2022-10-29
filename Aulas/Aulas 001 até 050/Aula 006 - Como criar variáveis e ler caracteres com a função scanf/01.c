#include <stdio.h>

int main () {
    char sexo[10], nome[10]; // Informando o tamanho que a string pode ter 
    float idade, altura;

    printf("Nome:" );
    scanf("%s", &nome);  /* %c serve só para uma letra,
                         %s serve para cadeia de caracteres mas tem que informar o tamanho */

    printf("Sexo Masculino/Femnino: ");
    scanf("%s", &sexo);
 
    printf("Idade: ");
    scanf("%f", &idade);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("-------------------\n");
    printf("Nome: %s \nSexo: %s \nIdade: %.2f \nAltura: %.2f", nome, sexo, idade, altura);
    printf("\n-----------------");

return 0;
}