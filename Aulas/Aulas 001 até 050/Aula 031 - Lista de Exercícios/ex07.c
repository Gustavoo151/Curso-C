/*
7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
    Entrada: 3672
    Saída: 1:1:12    */

#include <stdio.h>

int main(){

    int segundos, cont_minutos, minutos, hora;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    for (cont_minutos=0; segundos >= 60; cont_minutos++){
            segundos -= 60;
    }

    minutos = cont_minutos % 60;
    hora = (cont_minutos - minutos)/60;

    printf("%d:%d:%d\n",hora,minutos,segundos);

    return 0;
}