#include <stdio.h>
#include <stdlib.h>

/*
        Aula 50: Estrutura de seleção switch case
        Opções: - Cadastro de produtos
                - Vender produto
                - Buscar produto
                - Imprimir retatório
                - Sair
*/      
int main(){

    int opcao;

    printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir\n5 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nCadastrando no produto\n");
        break;  // Qubrar / parar a execução do programa 

    case 2:
        printf("Vendendo um novo produto\n");
        break;
    
    case 3:
        printf("Buscando novo produto\n");
        break;

    case 4:
        printf("Imprimindo relatório\n");
        break;

    case 5:
        printf("\nSaindo..\n");
        break;

    default:  // Usado para fazer o controle de entrado dos usuários
        printf("\nOpção inválida!\n");
    }


    return 0;
}