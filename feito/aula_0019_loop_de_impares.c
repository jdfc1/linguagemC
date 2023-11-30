// Faça um programa que imprima todos os números
// ímpares entre dois números dados.
// (in) Dois números inteiros, A e B, separados
// por um final de linha.
// (out) Todos os números ímpares maiores ou
// iguais a A e menores ou iguais a B.
// separados por um final de linha.

#include <stdio.h>
#include <stdlib.h>
// 10 / 2 = 5
// 9 % 2 = 1
// 7 % 2 = 1
int main() {
    
    int a,b; 
    scanf("%d %d",&a,&b);

    for (a; a <= b; a++){
        if (a % 2 == 1) {
            printf("%d\n",a);
        }
    }
    
}

