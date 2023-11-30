//Faça um programa que leia 3 números inteiros e imprima um (e apenas um) dos seguintes números:
// 1 (Se todos os números são iguais)
// 2 (Se todos os números são diferentes)
// 3 (Se apenas dois números são iguais)
// (entrada) Consiste de 3 números inteiros.
// (saída) Consiste de um número indicando uma das 3 situações de
// igualdade entre os valores de entrada conforme demonstrado na descrição
// ex. (in) 8 8 8 => (out) 1

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    scanf ("%i %i %i",&a,&b,&c);

    if ((a == b) && (b == c) && (c == a)) {
        printf ("1");
    }
    else if ((a != b) && (b != c) && (c != a)) {
        printf ("2");
    }
    else if ((a < b) && (b > c) && (c = a)) {
        printf ("3");
    }
    else if ((a < b) && (b = c) && (c > a)) {
        printf ("3");
    }
    else if ((a > b) && (b = c) && (c > a)) {
        printf ("3");
    }
    else if ((a = b) && (b > c) && (c < a)) {
        printf ("3");
    }
    else if ((a > b) && (b < c) && (c = a)) {
        printf ("3");
    }
    else if ((a = b) && (b < c) && (c > a)) {
        printf ("3");
    }
    return 0;
}