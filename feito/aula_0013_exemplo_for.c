// Escreva um programa em que o usuario indicará 2 números e o programa irá imprimir todo
// o intervalo entre esses dois números. Um ao lado do outro separados por uma virgula. 
// (in) dois números inteiros
// (out) imprimir o intervalo entre os números indicados pelo usuário.
// (extra) no final do programa finalize com "e, ponto final." ex. (19 e 20.)

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b; // 10 20

    scanf ("%i %i",&a, &b);
    
    for ( int i = a ; i <= b ; i++ ) {
        if (i == b) {
            printf("%d.\n",i);
        }
        else if (i == b-1) {
            printf("%d e ",i);
        }
        else{
            printf("%d, ",i);
        }
    }

    

}