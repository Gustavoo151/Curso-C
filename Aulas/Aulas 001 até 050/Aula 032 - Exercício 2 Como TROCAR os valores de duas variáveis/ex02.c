#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    printf("Valores lidos: a: %d\nb: %d\n",a, b);
    
    c = a;
    a = b;
    b = c;
    
    printf("Valores lidos: a: %d\nb: %d\n",a, b);

    return 0;
}