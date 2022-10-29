/*
2) Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.
*/

#include <stdio.h>

int main(){

    int senha = 123456, dados_senha_user;

    printf("Digite sua senha: ");
    scanf("%d", &dados_senha_user);

    while (dados_senha_user != senha){
        printf("Senha inválida.\nDigite a senha novamente: ");
        scanf("%d", &dados_senha_user);
    }
    printf("Acesso Permitido.\n");

    return 0;
}