#include <stdio.h>
#include <stdlib.h>

// Como converter número para texto em c?

int main(){

    int tam;
    char str1[10] = {"%"}, str2[10],str4[5];

    printf("Digite o tamanho da vertor: ");
    scanf("%d", &tam);
    scanf("%c", str4); // Para tirar o buffer \n


// Param: 1 onde eu quero armazenar, 2:Formatação para converter esse conteúdo para str, 3: Arquivo que vai ser armazenado
    // sprintf(str2, "%d[^\n]", tam); // Essa função printa o conteúdo em uma variável

    snprintf(str2, 10, "%d[^\n]", tam); // Essa é uma função mais aprimorada que serve para dizer no segundo parâmetro qual a capacidade que a string vai suportar

// E BOM SEMPRE FAZER UM VERIFICAÇÃO PARA NÃO EXERDER O LIMITE DO STRING

    strcat(str1, str2); // Concatena duas strings

    char palavras[tam];

    printf("Digite uma frase: ");
    scanf( str1, palavras);

    printf("%s\n", palavras);

    return 0;
}