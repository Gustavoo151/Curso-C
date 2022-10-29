#include <stdio.h>

/* Operador long para o tipo double
   double -> %lf
   long double -> %lf
   __mingw_printf()
*/
int main(){

    float x = 3.1415;
    double y = 3.141592653596535965359;
    long double z = 3.1415926535965359653596535965359;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);
    printf("Valor de y: %lf\n", y); // %lf significa long float
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y); // Por padrão quanto double quanto float só imprime 6 dígitos após a vírgula
    printf("O valor de long double: %Lf\n", z); // Para usar o long float tem que usar o L maiúsculo, só funcionar no linux e mac
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof z);

    __mingw_printf("O valor de um long double: %.15Lf", z); // Essa função usa um função do compilador para mostrar o long double já que o windows não suporta (Usando formatação para mostrar o número maior)

    return 0;
}