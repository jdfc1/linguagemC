// Faça um programa que leia 3 números inteiros e os imprima em ordem crescente.
// (in) 03 números inteiros separados por um final de linha.
// (out) Os 03 números lidos impressos em ordem crescente, cada um em uma linha.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    scanf ("%i %i %i", &a, &b, &c);

    if ((a < b) && (b < c) && (c > a)) {
        printf ("%i\n%i\n%i\n", a, b, c);
    }
    else if ((a > b) && (b < c) && (c < a)) {
        printf ("%i\n%i\n%i\n", b, c, a);
    }
    else if ((a < b) && (b > c) && (c < a)) {
        printf ("%i\n%i\n%i\n", c, a, b);
    }
    else if ((a < b) && (b > c) && (c > a)) {
        printf ("%i\n%i\n%i\n", a, c, b);
    }
    else if ((a > b) && (b < c) && (c > a)) {
        printf ("%i\n%i\n%i\n", b, a, c);
    }
    else if ((a > b) && (b > c) && (c < a)) {
        printf ("%i\n%i\n%i\n", c, b, a);
    }
    else if ((a <= b) && (b <= c) && (c >= a)) {
        printf ("%i\n%i\n%i\n", a, b, c);
    }
    else if ((a >= b) && (b <= c) && (c <= a)) {
        printf ("%i\n%i\n%i\n", b, c, a);
    }
    else if ((a <= b) && (b >= c) && (c <= a)) {
        printf ("%i\n%i\n%i\n", c, a, b);
    }
    else if ((a = b) && (b = c) && (c = a)) {
        printf ("%i\n%i\n%i\n", a, b, c);
    }
}
