#include <stdio.h>

int main(){
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura e o sexo (f, F, m ou M): \n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo); // RESOLVENDO: Colocando o espaço antes do %c  o c desconsidera enter, tab ou espaço

    // A variável sexo receve o ultimo imput do teclado no caso o enter que é \n
    // Buffer do teclado => 23\n74.5\n1.77\n

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);

return 0;
}