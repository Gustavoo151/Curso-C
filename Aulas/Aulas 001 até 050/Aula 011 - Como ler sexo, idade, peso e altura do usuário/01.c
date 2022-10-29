#include <stdio.h>

int main() {

    int idade;
    float peso, altura;
    char nome[10], sexo[10];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Qual seu sexo [Masculino/Feminino]: ");
    scanf("%s", &sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);  

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("--------------------\n");
    printf("Nome: %s \nSexo: %s \nIdade: %d \nAltura: %.2fcm \nPeso: %.2fKg", nome, sexo, idade, altura, peso);
    printf("\n--------------------");

return 0;
}
