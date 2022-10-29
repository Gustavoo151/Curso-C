// Videos dessa aula: https://www.youtube.com/watch?v=Y_-zrByK8AU&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=155

#include <stdio.h>
#include <stdlib.h>

void imprimir(int numero){
    if (numero == 0){
        printf("%d", numero);
        return NULL;}
    else
        // Este primeiro caso irá imprimir em ordem decrescente. Pois está antes da recusividade. Quando colocado antes printamos o desempilhamento.
        printf("%d\n", numero);

        // Recusividade
        imprimir(numero -1);
        
        // Este segundo caso irá imprimir em ordem crescente, pois está depois da recursividade. Quando colocado depos printamos o empilhamento.
        printf("%d\n", numero);  
}

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}