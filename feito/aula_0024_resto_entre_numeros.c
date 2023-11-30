// Escreva um programa leia 2 valores X e Y e que imprima todos os valores entre eles
// cujo resto da divisão dele por 5 for igual a 2 ou igual a 3
// (in) Contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.
// (out) Todos os inteiros entre x e y, um por linha, em ordem crescente, que satisfazem
// (out) o enunciado deste problema. ex. ( 10 18 ) > ( 12 13 17 )

#include <stdio.h>
#include <stdlib.h>

// % (modulo, percente)

int main() {

    int x,y;    // 20  10
    
    scanf ("%i %i",&x,&y);

    if (x < y) { 
        for (x; x < y; x++) {
            if ((x % 5 == 2) || (x % 5 == 3)) {
                printf("%d\n",x);
            }
        }
    }

    else if (y < x) {
        for (y; y < x; y++) {
            if ((y % 5 == 2) || (y % 5 == 3)) {
                printf("%d\n",y);
            }
        }
    }

}

    // if (x < y) {
    //     for (x; x < y; x++) { // menor
    //         if ( (x % 5 == 3) || (x % 5 == 2) ) {
    //             printf("%i\n",x);
    //         }
    //     }
    // }else if (y < x) {
    //     for (x; x > y; x--) { // maior
    //         if ( (x % 5 == 3) || (x % 5 == 2) ) {
    //                printf("%i\n",x);
    //         }
    //     }
    // }