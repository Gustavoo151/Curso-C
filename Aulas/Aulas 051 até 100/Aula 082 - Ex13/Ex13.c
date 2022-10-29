/*
13) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.
*/

#include <stdio.h> 

int main(){

    int num, cont = 3;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num == 2 || num % 2 == 0)
        if (num == 2)
            printf("%d é primo.\n", num);
        else
            printf("%d não é primo.\n");

    else
        while( cont <= num)
        {
            if (num % cont == 0)
            {
                if (cont == num)
                    printf("%d é primo.\n",num);
                else
                    printf("%d não é primo.\n",num);
            }
            cont += 2;
        }

    return 0;
}