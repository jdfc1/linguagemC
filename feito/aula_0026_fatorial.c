// Escreva um programa em que o usuário digita um número inteiro e como resposta obtem o fatorial.
// (in) um número inteiro seguido por um final de linha.
// (out) calcular o fatorial do número indicado. ex 5! -> 120
// o fatorial do número 5 é a multiplicação de 5 pelos seus antecessores, ou seja, (5⋅4⋅3⋅2⋅1). 

#include <stdio.h>

int main(){

    int n; 
    int valor=1;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        valor = valor * i;
        
    }

    printf("%d\n",valor);

    return 0;

}