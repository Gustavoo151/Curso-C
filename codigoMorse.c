#include <stdio.h>

void adicionarLetra(){

}

/*FALTA FAZER:
    -> A PILHA
    -> A FUNÇÃO QUE TRANSFORMA MORSE EM CARACTERE
    -> FUNÇÃO DO MENU
    -> RECEBE MORSE ATÉ QUE USUARIO DIGITE UM VALOR
    */

char codigoMorse[36][10] =  {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "----"};


typedef struct no{
    char morse[10];
    struct No *proximo;
}No;


int numLetra(char letra){
        if( 'a'  || ".-")
            return 0;
        else if( 'b' || "-...")
            return 1;
        else if ('c' || "-.-.")
            return 2;
        else if ('d' || "-..")
            return 3;
        else if ('e' || ".")
            return 4;
        else if ('f' || "..-.")
            return 5;
        else if ('g' || "--.")
            return 6;
        else if ('h' || "....")
            return 7;
        else if ('i' || "..")
            return 8;
        else if ('j' || ".---")
            return 9;
        else if ('k' || "-.-")
            return 10;
        else if ('l' || ".-..")
            return 11;
        else if ('n' || "--")
            return 12;
        else if ('m' || "-.")
            return 13;
        else if ('o' || "---")
            return 14;
        else if ('p' || ".--.")
            return 15;
        else if ('q' || "--.-")
            return 16;
        else if ('r' || ".-.")
            return 17;
        else if ('s' || "...")
            return 18;
        else if ('t' || "-")
            return 19;
        else if ('u' || "..-")
            return 20;
        else if ('v' || "...-")
            return 21;
        else if ('w' || ".--")
            return 22;
        else if ('x' || "-..-")
            return 23;
        else if ('y' || "-.--")
            return 24;
        else if ('z' || "--..")
            return 25;
        else if ('1' || ".----")
            return 26;
        else if ('2' || "..---")
            return 27;
        else if ('3' || "...--")
            return 28;
        else if ('4' || "....-")
            return 29;
        else if ('5' || ".....")
            return 30;
        else if ('6' || "-....")
            return 31;
        else if ('7' || "--...")
            return 32;
        else if ('8' || "---..")
            return 33;
        else if ('9' || "----.")
            return 34;
        else if ('0' || "----")
            return 35;
}


void imprimiMorse(char palavra[]){
    int i = 0;
    while(palavra[i] != '\0'){
        printf("%c = %s\n", palavra[i], codigoMorse[numLetra(palavra[i])]);
        i++;
    }
}


int main(){
    char palavra[100];
    
    printf("Digite um palavra para transformar em codigo morse: ");
    scanf("%s", palavra);

    imprimiMorse(palavra);

    return 0;
}