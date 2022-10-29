#include <stdio.h>
#include <stdlib.h>

/*
        Aula 133: Como descobrir o tamanho de uma String?
*/

int main(){

    int i, tam = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagen C?"};

    printf("Digite algo: ");
    // scanf("%20[^\n]", palavras);
    // gets(palavras); 
    fgets(palavras, 55, stdin); 

    i = 0;
    while(palavras[i] != '\0'){
        if(palavras[i] ==  '\n')
            palavras[i] = '\0';
        i++;
    }


    i = 0;
    while(palavras[i] != '\0') { 
        // printf("%d = %d\n", i, palavras[i]); 
        // printf("%d = %c\n", i, palavras[i]);
        tam ++;
        i ++;  
    }
    printf("Tamnho: %d\n", tam);  // Sempre é impresso um a mais pq o \n conta

    return 0;
}