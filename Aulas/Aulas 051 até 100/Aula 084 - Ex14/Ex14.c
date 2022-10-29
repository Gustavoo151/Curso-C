/*
14) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

#include <stdio.h>

int main(){

    int usuarios;
    float salario, somaSalario = 0, menorSalario, maiorSalario;

    printf("Digite a quantidade de usuaŕios: ");
    scanf("%d", &usuarios);

    for (int i = 1; i <= usuarios; i++){
        printf("Digite o salário do %d usuário: ", i);
        scanf("%f", &salario);
        somaSalario += salario;

        if (menorSalario == 0)
            menorSalario = salario;
        else if (menorSalario > salario)
            menorSalario = salario;
        
        if (maiorSalario < salario)
            maiorSalario = salario;
    }

    printf("A média de salárial da empresa é : %.2f\n", somaSalario/usuarios);
    printf("Maior salário: %d\nMenor: %d\n", maiorSalario, menorSalario);

    return 0;
}