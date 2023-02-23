#include <stdio.h>
#include <stdlib.h>

void enderecoCopia(int *num){
    printf("O endereco de X e: %p\n", num);
}


int main()
{
    int x;
    int *ptr;
    ptr = &x;

    printf("O endereco de X e: %p\n", ptr);
    enderecoCopia(&x);

    return 0;
}