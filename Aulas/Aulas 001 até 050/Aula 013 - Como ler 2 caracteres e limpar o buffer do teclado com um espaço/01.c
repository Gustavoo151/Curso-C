#include <stdio.h>

int main() {
    char a, b;
    
    printf("Digite duas letras: ");
    scanf("%c%c", &a, &b); // Se não adicionar o espaço entre os dois %c%c vai dar problema com buffer, e esse comando desconsidera o ENTER, o TAB e o ESPAÇO

    // buffer do teclado = > Armazena a letra no buffer, para caso queira apagar e colocar outra no lugar, Exemplo se eu colocar duas variáveis para receber um valore cada uma e digitar a tecla F ele irá salvar o F, mas se eu apertar F e der enter ele vai edicionar na primeira variável F e na segunda /n . 
    
    //Para resolver isso é só colocar um espaço entre o %c%c no scanf ficando assim %c %c.

    // Não é recomendado usar a função fflush(), por dois motivos o primeiro porquê essa função só funcionar no sistema operacional windows e segundo porquê essa função não funciona em todos os casos.

    printf("Primeira letra: %c\nSegunda linha: %c", a,b);

return 0;
}