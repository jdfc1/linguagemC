// Faça uma função recursiva que receba um número inteiro positivo par
// N e imprima todos os números pares de 0 até N em ordem crescente. 
// (in) Um inteiro positivo N.
// (out) Uma sequência de números de 0 à N linha à linha. ex 9 --- 0 2 4 6 8

#include <stdio.h>
#include <stdlib.h>

int pares(int x) {

    return (x % 2 == 0);
    
}

int main() {

    int a;
    scanf("%d",&a);

    for (int i = 0; i <= a; i++){
        if (pares(i)) {
            printf("%d\n",i);
        }
    }

}