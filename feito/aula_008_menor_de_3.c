// Faça um programa que leia 3 números inteiros e imprima o menor deles.
// (entrada) 03 números inteiros separados por um final de linha.
// (saída) o menor dos números digitados.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    scanf ("%i %i %i",&a,&b,&c);

    if ((a <= b) && (b <= c) && (c >= a)) {
        printf ("%i",a);
    }
    else if ((a >= b) && (b >= c) && (c <= a)) {
        printf ("%i",c);
    }
    else if ((a >= b) && (b <= c) && (c >= a)) {
        printf ("%i",b);
    }
    else if ((a <= b) && (b >= c) && (c <= a)) {
        printf ("%i",c);
    }
    else if ((a >= b) && (b <= c) && (c <= a)) {
        printf ("%i",b);
    }
    else if ((a <= b) && (b >= c) && (c >= a)) {
        printf ("%i",a);
    }
    else if ((a == b) && (b == c) && (c == a)) {
        printf ("%i",a);
    }
    return 0;
}