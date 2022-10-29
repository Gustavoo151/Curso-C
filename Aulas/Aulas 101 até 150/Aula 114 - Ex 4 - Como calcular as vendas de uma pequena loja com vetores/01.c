/*
4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
*/

#include <stdio.h>

int main(){

    int quantVendidas[10],totalVedidas, posiçãoMaisVendido; 
    float preco[10], valorToltal, maisVendido = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite a quantidade vendida do %dº produto: ", i+ 1);
        scanf("%d", &quantVendidas[i]);

        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &preco[i]);
    }

    for (int i = 0; i < 10; i++){
        totalVedidas += quantVendidas[i];
        printf("Valor unitário do produto %2d: %.2f\n", i +1 ,preco[i]);   

        if (maisVendido < quantVendidas[i]){
            maisVendido = quantVendidas[i];
            posiçãoMaisVendido = i;
        }
    }
    printf("O valor do objeto mais vendido foi %.2f.\nNa posição: %d\n", preco[posiçãoMaisVendido], posiçãoMaisVendido);
    printf("Quantidade vendida: %d\n\n", totalVedidas);

    for (int i = 0; i < 10; i++){
        printf("Valtor total do produto %2d: %.2f\n", i+1, quantVendidas[i] * preco[i]);
        valorToltal += quantVendidas[i] * preco[i];
    }

    printf("Valor total das vendas %2.f: ", valorToltal);
    printf("A comissão a ser para o vendendor será de %.2f.\n", (valorToltal * 0.05));

    return 0;
}