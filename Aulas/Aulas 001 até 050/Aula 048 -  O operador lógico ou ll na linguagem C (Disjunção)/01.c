#include <stdio.h>
/*
    Aula 048: Operador lógico OU (||) ! &&
    TABELA VERDADE   a  b   a || b
                     v  v     v
                     v  f     v
                     f  v     v
                     F  F     F
*/

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 5 || idade >= 60)
        printf("Tem direito a gratuidade!\n");
    else
        printf("Não tem direito a gratuidade\n");

    return 0;
}