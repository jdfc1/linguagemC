// Faça um programa que leia um valor representando o gasto realizado por um
// cliente do restaurante COMABEM e imprima o valor total a ser pago,
// considerando os 10% do garçom.
// (in) Consiste de um número real representando o valor gasto do cliente.
// (out) Consiste de um número real com duas casas decimais representando
// (out) o total a ser pago considerando os 10% do garçom.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    float w;
    scanf ("%i", &a); // x eh igual a 50
    w = a * 1.1; // aplicando 10% , * 1.1
    printf ("%.2f", w);
    return 0;
}