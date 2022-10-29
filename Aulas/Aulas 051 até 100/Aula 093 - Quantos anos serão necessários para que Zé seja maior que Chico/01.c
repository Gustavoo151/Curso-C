/*
22) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/

#include <stdio.h>

int main(){

    int quantAno = 0;
    float altChico = 1.50, altZé = 1.10;

    do {
        altChico += 0.02;
        altZé += 0.03;
        quantAno ++;

        } while (altChico > altZé);
    
        printf("Para a altura de Zé ser maior que a de chico será necessário %d anos.\n", quantAno);

    return 0;
}