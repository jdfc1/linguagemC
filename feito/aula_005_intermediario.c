// Faça um programa que leia 3 números inteiros e imprima o valor intermediário 
// (entre o menor e o maior número).
// Suponha que os números são diferentes. Consiste de 3 números inteiros.
// Consiste do número inteiro cujo valor é o intermediário entre os valores de entrada.
// ex. entrada( 8, 2, 5 ) => saída (5)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c; // 8 2 5 
    scanf ("%i %i %i",&a,&b,&c);

    if ((a < b) && (b < c) && (c > a)) {
        printf ("%i",b);
    }
    else if ((a > b) && (b > c) && (c < a)) {
        printf ("%i",b);
    }
    else if ((a > b) && (b < c) && (c > a)) {
        printf ("%i",a);
    }
    else if ((a < b) && (b > c) && (c < a)) {
        printf ("%i",a);
    }
    else if ((a > b) && (b < c) && (c < a)) {
        printf ("%i",c);
    }
    else if ((a < b) && (b > c) && (c > a)) {
        printf ("%i",c);
    }
    else {
        printf ("error");
    }
    return 0;
}