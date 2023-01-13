#include <stdio.h>

int main(){

    char color[] = {"Ñ@#$9 876543210?!abc;:+=-,_"};

    int tam = sizeof(color) / sizeof(color[0]);

    for (int i = 0; i < 28; i++){
        printf("%c", color[i]);
        if (i%5 == 0)
                printf("\n");
        for (int k = 0; k < 28; k++){
            printf("%c", color[-k]);
            
        }  
    }

    return 0;
}
