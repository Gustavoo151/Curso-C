#include <stdio.h>

/* Operador long para o tipo int
  %li / %ld
*/

int main() {

    // short short int a = 0; // Não exite

    long long int x = 2147483647; // Só funcionar com dois long

    printf("Tamanho de x em bytes: %d\n", sizeof x);
    printf("Valore de x: %lli\n", x); //Tem que colocar mais um l para para cada long
    x++;
    printf("Valor de x: %lli\n", x);   // Para imprimir um long long int usa %li ou % ld


    return 0;
}