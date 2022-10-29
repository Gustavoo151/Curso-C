/*
19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Exemplo de entrada:
2 2
3 -2
-8 -1
-7 1
0 2

Exemplo de saída:
primeiro
quarto
terceiro
segundo
*/

#include <stdio.h>

int main(){

    int cordenadaY, cordenadaX;


    do {
        printf("Digite as cordenadas X,Y: ");
        scanf("%d %d", &cordenadaX, &cordenadaY);

        if (cordenadaX > 0 )
        {
            if (cordenadaY > 0)
                 printf("Primeiro\n");
            else
                printf("Quarto\n");
        }

        else if (cordenadaX < 0)
        {
            if (cordenadaY > 0)
                printf("Segundo\n");
            else
                printf("Terceiro\n");
        }
    }
    while (cordenadaX != 0 && cordenadaY != 0);
    return 0;
}