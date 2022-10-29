#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    printf("Nao use a funcao system (pause)");
    //system("pause");
    printf("/nPressione qualquer tecla para finalizar.");//Substituindo o sytem(pause)
    getchar(); //Essa função ler um caractere

return 0;
}