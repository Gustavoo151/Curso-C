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

    char opcao;

    printf("Opoções:\n\ta - Cadastros de produtos\n\tb - Vender produto\n\tc - Buscar produto\n\td - Imprimnir retatório\n\tz - Sair\n");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case 'a':
        printf("Cadastando novo produto.\n");
        break;    
    
    case 'b':
        printf('\nVendendo novo produto.\n');  
        break;    
    
    case 'c':
        printf("\nBuscando novo produto.\n");
        break;    
    
    case 'd':
        printf("\nImprimindo relatório.\n");
        break;
    
    case 'z':
        printf("\nSaindo ...\n");
        break;

    default:
        printf("\nOpção inválida!\n");
    }


    return 0;
}