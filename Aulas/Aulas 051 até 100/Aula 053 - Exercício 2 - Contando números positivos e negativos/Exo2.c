#include <stdio.h>
#include <stdlib.h>

int main(){

    int um, dois, tres, quatro, cinco, positivo, negativo;

    printf("Digite o primeiro valor:");
    scanf("%d", &um);
    
    printf("Digite o segundo valor:");
    scanf("%d", &dois);
    
    printf("Digite o terceiro valor:");
    scanf("%d", &tres);
    
    printf("Digite o quarto valor:");
    scanf("%d", &quatro);

    printf("Digite o quinto valor:");
    scanf("%d", &cinco);

    if (um < 0)
        negativo ++;
    else
        positivo++;
    
    if (dois < 0)
        negativo ++;
    else
        positivo++;
    
    if (tres < 0)
        negativo ++;
    else
        positivo++;
    
    if (quatro < 0)
        negativo ++;
    else
        positivo++;
    
    if (cinco < 0)
        negativo ++;
    else
        positivo++;

    printf("\nPositivos: %d\nNegativos: %d\n",positivo, negativo);

    return 0;
}