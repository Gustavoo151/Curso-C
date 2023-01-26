#include <stdio.h>

int main(){

    int  aulaConclu; 
    float aula = 100/328.0;  // Total de aula 328.

    printf("Digite qual aula voce esta atualmente: ");
    scanf("%d", &aulaConclu);

    printf("\n\n%.2f%% do curso concluido.\n\n", aula * aulaConclu);

    return 0;
}