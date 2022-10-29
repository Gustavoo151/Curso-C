#include <stdio.h>

/*   tipo double
     %lf
*/

int main(){
    float x = 3.1415;  // Não da para usar long para aumentar memoria é só usar double

    double y =  3.14152352342342345; // O double tem um precisão maior

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);

    return 0;
}