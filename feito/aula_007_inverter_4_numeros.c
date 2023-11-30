// Faça um programa que inverta um número inteiro com quatro algarismos.
// Você receberá um único número inteiro com quatro algarismos.
// (saída) Você deve imprimir o número invertido seguido de um final de linha.
// Importante: 
// se o número dado for 3000 por exemplo, o invertido dele deve ser 3 e não 0003.
// se o número dado for 1234 por exemplo, o invertido dele deve ser 3 e não 4321.
// 1234 % 10 = 123,4 = 4
// 1234 / 10 = 123,4 = 123

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, x, y, w, z;

    scanf ("%i", &a); // x eh igual a 1234

    x = a % 10; // % 1234 = 4 como resultado
    b = a / 10; // = 123
    y = b % 10; // % 123  = 3 como resultado
    c = b / 10; // = 12
    w = c % 10; // % 12 = 2 como resultado
    z = c / 10; // achei 1

    if (w == 0){
        printf ("%i",z);
    }
    else{
        printf("%i%i%i%i",x,y,w,z);
    }
    return 0;
}