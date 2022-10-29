#include <stdio.h>

int main(){

    int numPessoas;
    float valorDespesa, gorjeta, valortotal, valorPessoa;

    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorjeta, &numPessoas);
    valortotal = valorDespesa * gorjeta/100 + valorDespesa;
    valorPessoa = valortotal / numPessoas;
    printf("Cada um ira pagar R$%.2f\n", valorPessoa);

    return 0;
}