#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Aula 165: Calcular o tempo de execução do algoritmo de FIBONACCI recursivo e iterativo
*/

long long int fibiR(int n){
    if(n == 1)
        return 0;
    else{
        if(n == 2)
            return 1;
        else
            return fibiR(n - 1) + fibiR(n - 2);
    }
}

long long int fiboI(int n){
    long long int a = 0, b = 1, c; 
    int i = 2;
    if(n == 1)
        return a;
    else{
        if(n == 2)
            return b;
        else{
            while(i < n){
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            return c;
        }
    }
}

int main(){

    int n = 55;

    time_t tIni, tFim;

    tIni = time(NULL);
    printf("Fibinacci iterativo: %lld\n", fiboI(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n", difftime(tFim, tIni));

    tIni = time(NULL);
    printf("Fibinacci recursivo: %lld\n", fibiR(n));
    tFim = time(NULL);