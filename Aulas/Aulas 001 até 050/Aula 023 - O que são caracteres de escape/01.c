#include <stdio.h>

/*  Caracteres de escape 
    Quebra de linha -> \n 
    Tabulação       -> \t 
    Aspa dupla      -> \"
    Aspa simples    -> \'
    Contra barra    -> \\ 
*/

int main(){

    printf("\n\nMensagem teste\n\n");  // Usando \n
    printf("\tMensagem teste\n");  // Usando \t ele coloca um tabulação para alinhar o texto
    printf("\"Mensagem teste\"\n");  // Usando \"" para usar aspa dupla
    

    return ;
}