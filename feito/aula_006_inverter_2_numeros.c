// Faça um programa que inverta um número inteiro com dois algarismos.
// (in) Você receberá um único número inteiro com dois algarismos.
// (out) Você deve imprimir o número invertido seguido de um final de linha.
// (out) Não é preciso imprimir o 0 mais a esquerda. 
// (out) Por exemplo, se o número digitado for 30, basta que você imprima 3 e não 03.
// 25 % 10 = 2,5 = 5
// 25 / 10 = 2,5 = 2

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, w, z;
    scanf ("%i", &a); // x eh igual a 52

    w = a % 10; // % 25 = 5 como resultado
    z = a / 10; // achei 2

    if (w == 0) {
        printf ("%i",z);
    }
    else{
        printf("%i%i",w,z);
    }
    return 0;
}