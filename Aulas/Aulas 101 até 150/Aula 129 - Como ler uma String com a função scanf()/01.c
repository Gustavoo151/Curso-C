#include <stdio.h> 
/*
        Aula 129: Lendo uma string com a função scanf()
        scanf("%80[^\n]", str);

*/
int main(){

    char palavras[] = {"Oi vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    scanf("%80[^\n]", palavras);  // Essa modificação no scanf vai fazer com que tudo que for digitado seja armazenado até que a tecla enter seja apertada
    // O 80 antes do [] serve para dizer quantos caracteres ela pode ler no máximo
     // Não precisar usar & para passar dados para uma string. Não precisa pois a palavra (palavras) já é um ponteiro.

    printf("%s\n\n", palavras );  // Por padrão o C só até o espaço. Por exemplo: José Gustavo, só ficaria José

    return 0;
}