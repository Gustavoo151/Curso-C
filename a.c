#include <stdio.h>
#include <string.h>


void campolimpo(char campo[][10]){
    for(int k=0;k<10;k++){
        for(int l=0;l<10;l++){
            campo[k][l] = 126;
        }
    }
}


void imprimecampo(char campo[][10]){
    for(int k=0;k<10;k++){
        for(int l=0;l<10;l++)
            printf("%c ",campo[k][l]); 
        printf("\n");
    }
}


void colocabarco(char campo[][10]){
    int tipobarco, locallinha, localcoluna;

    printf("qual o tipo de barco 1,2 ou 3 ?\n");
    scanf("%d",&tipobarco);
    printf("em que linha e colula para colocar o barco ? \n");
    scanf("%d", &locallinha);
    printf("em que coluna colocar o barco?\n");
    scanf("%d",&localcoluna);

    printf("o barco foi colocado em em %d %d\n",locallinha,localcoluna);
    campo[locallinha -1][localcoluna-1] = 35;
    
    if(tipobarco == 1){
        for (int i=0;i<3;i++){
            if (campo[locallinha+i][localcoluna-1] == 35)
                printf("esse lugar esta ocupado. \n");
            else
                campo[locallinha+i][localcoluna-1] = 35;
        }
    }
    else
        printf("%d\n",tipobarco);


    if(tipobarco == 2){
        for(int i = 0; i < 3 ; i++){
            if (campo[locallinha-1][localcoluna-1] == 35)
                printf("esse lugar esta ocupado. \n");
            else{
                campo[locallinha][localcoluna-1] = 35;
                campo[locallinha][localcoluna] = 35;
                campo[locallinha][localcoluna-2] = 35;
            }
        }
    }
    printf("%d\n",tipobarco);
}


int main(){
    char campo[10][10];
    campolimpo(campo);
    colocabarco(campo);
    imprimecampo(campo);

    return 0;
}