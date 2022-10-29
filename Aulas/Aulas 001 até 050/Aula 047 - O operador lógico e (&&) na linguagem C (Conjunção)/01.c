#include <stdio.h>

/*
    Aula 47: Operador lógico e (&)   AND
    TABELA VERDADE a    b   a & b
                   V    V     V
                   v    f     f
                   f    v     f
                   f    f     f
*/                 

int main(){

    int idade;
    char sexo;

    printf("Digite seu sexo f ou m: ");
    scanf("%c", &sexo);

    printf("Digite usa idade: ");
    scanf("%d", &idade);

    if (sexo == 'm' && idade == 18)   // Para comparar com um caractere temos colocar aspas simples
        printf("Alistamento obrigatório!\n");
    else
        printf("Dispensado\n");  

    return 0;
}