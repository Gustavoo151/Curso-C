/*
5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

-IMC                             -Interpretação
  Menor que 18,5                      Abaixo do peso
  Entre 18,5 e menor que 25           Peso normal
  Entre 25 e menor que 30             Sobrepeso
  Entre 30 e menor que 35             Obesidade grau 1
  Entre 35 e menor que 40             Obesidade grau 2
  Maior ou igual a 40                 Obesidade grau 3
*/

#include <stdio.h>

int main(){

    float peso, altura, imc;

    printf("Digite seu altura e peso: ");
    scanf("%f %f",&altura, &peso);

    imc = peso / (altura*altura);
    
    printf("%2.f\n",imc);

    if (imc < 18.5)
        printf("IMC = %.2f - Abaixo do peso\n", imc);

    else if (18.5 < imc && imc < 25)
        printf("IMC = %.2f - Peso normal\n", imc);

    else if (25 < imc && imc < 30)
        printf("IMC = %.2f - Sobrepeso\n");
        
    else if (30 < imc && imc < 35)
        printf("IMC = %.2f - Obesidade grau 1\n");
    
    else if (35 < imc && imc < 40)
        printf("IMC = %.2f - Obesidade grau 2\n");
    
    else if (imc >= 40)
        printf("IMC = %.2f - Obesidade grau 3\n");
    
    return 0;
}