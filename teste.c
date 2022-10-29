#include <stdio.h>

//@param: Indicando os vair vai receber dois ponteioros
void mundarNume(int vector[8],int *valor1, int *valor2){ 
    

    

    if(*valor2 == 1){  // Usando * para acessar o valor do ponteiro
        printf("Valor2\n");
        scanf("%d", &*valor2);
        printf("%d\n", *valor2 - 1);
        printf("%d\n", vector[*valor2]);
        //*valor2 = 3;   // Passando 3 pore referemcia para a variável valor2
    }
   
}


int main(){
    int *valo1;
    int *valo2;
    int vector[8] = {1,2,3,4,5,6};
    valo1 = 1;
    valo2 = 1;

    mundarNume(vector, &valo1, &valo2);


    

    return 0;
}