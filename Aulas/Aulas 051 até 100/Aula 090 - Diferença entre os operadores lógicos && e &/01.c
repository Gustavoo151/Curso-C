#include <stdio.h>
#include <stdlib.h>
/*    Aula 90: Diferença entre os operadores && e &
      Usando um & o programa vai compara bit a bit e os dois terão que ser iguais.
      Já usando && se o primeiro for falso o segundo será desconsiderado.
      Usando só um & o programa irá ficar mais pesado
      Isso também vale para | e ||
*/

int main(){
    int x, y;

    do{
        printf("Digite X e Y: ");
        scanf("%d%d", &x, &y);

        if (x != 0 & y != 0){  
            if(x > 0 & y >0 ) 
                printf("Primeiro quadrante\n");
            else if (x < 0 & y > 0)
                printf("Segundo quadrante\n");
            else if (x < 0 & y < 0)
                printf("Terceiro quadrante\n");
            else
                printf("Quarto quadrante\n");
        }
    }while (x != 0 & y != 0);

    return 0;
}