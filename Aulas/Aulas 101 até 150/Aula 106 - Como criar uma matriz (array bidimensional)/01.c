#include <stdio.h>

int main(){

    int vet[10];

    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    /*
             c0  c1 c2
    linha 0   0   1  3
    linha 1   4   5  6
    linha 2   7   8  9
    */

    int mat2[][3] = {1,2,3,4,5,6,7}; // Quando não informamos a quantidade de linha ,temos que informar todos os valores da matriz

    int mat3[3][3] = {};

    float mat4[4][5];

    char mat5[5][10];

    return 0;
}