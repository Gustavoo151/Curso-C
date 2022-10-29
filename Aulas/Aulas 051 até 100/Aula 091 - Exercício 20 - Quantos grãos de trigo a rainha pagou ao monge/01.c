/*
20) Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.7
*/

#include <stdio.h>

int main(){

    int somaGrao = 0;
    int grao = 1;

    for (int i = 1; i < 64; i++){  
        grao = grao * 2;
        somaGrao += grao;
    }

    printf("O valor em grãos de trigo a pagar: %d\n", somaGrao);
}