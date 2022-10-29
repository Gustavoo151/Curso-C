#include <stdio.h>
#include <stdlib.h>

//   Aula 190: É póssivel criar um ponteiro para uma struct ? 

typedef struct {
    int dia, mes, ano;
}Data;

void imprimir(Data *x){
    printf("%d/%d/%d\n", x -> dia, x -> mes, x -> ano);  // X É TIPO PONTEIRO ENTAO EU TENHO QUE USAR A -> PARA ACESSAR OS DADSO
}

int main(){

    Data data;

    Data *p;  // Criando um ponteiro para o tipo data

    p = &data;  //

    printf("Data: %p\ttp: %p\n", &data, p); // Os dois endereços são iguais

    data.dia = 29;
    data.mes = 2;
    data.ano = 2021;

    imprimir(p);

    return 0;
}