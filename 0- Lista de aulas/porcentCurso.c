#include <stdio.h>

int main(){

    int  aulaConclu; 
    float aula = 100/222.0;  // Total de aula 328. Até eu tenho que estudar 258

    printf("Digite qual aula você está atualmente: ");
    scanf("%d", &aulaConclu);

    printf("\n\n%.2f%% do curso concluído.\n\n", aula * aulaConclu);

    return 0;
}