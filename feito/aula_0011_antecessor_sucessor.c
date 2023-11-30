// Faça um programa que leia um número inteiro e imprima o seu antecessor 
// (inteiro anterior) e o seu sucessor (inteiro posterior).
// (in) um número inteiro.
// (out) apresentar o anterior e o sucessor, separados por um espaço.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, posterior, anterior;

    scanf ("%d", &valor);

    posterior = (valor + 1);
    anterior = (valor - 1);

    printf ("%d %d", anterior,posterior);
}
