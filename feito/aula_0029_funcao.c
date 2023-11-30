// faça um programa que some os dois valores.
// (in) dois valores inteiros, seguidos por um final de linha.
// (out) a soma dos dois numeros.

// (extra) escreva seu código usando funções.

#include <stdio.h>
#include <stdlib.h>

// função recebe dois argumentos

int multiplicacao(int a, int b) {
    return a * b;
}


int main() {

    int x,y,resultado;

    scanf("%d %d",&x,&y);
    
    resultado = multiplicacao(x,y);

    printf("A multiplicação é: %d\n",resultado);
}
