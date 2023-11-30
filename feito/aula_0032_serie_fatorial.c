// Faça um programa que calcule e escreva a soma dos n primeiros termos da série:
// 1! / 1 - 2! / 3 + 3! / 7 - 4! / 15 + 5! / 31 ...
// Um inteiro n indicando a quantidade de termos da série

#include <stdio.h>
#include <stdlib.h>

long long fatorial(int x) {

    long long valor = 1;

    for (int i = 1; i <= x; i++) {
        valor *= i;
    }
    return valor;
    
}

int main() {

    int x; 
    double somador = 0;
    double auxiliar = 0;
    double num = 1;

    scanf("%d",&x);

    double numerador = 1; // + 1
    double denominador = 1; // x * 2 + 1 = y

    for (int i = 1; i <= x; i++) {
        auxiliar = (fatorial(numerador) / denominador) * num;

        num = num * (-1);
        numerador++;
        denominador = denominador * 2 + 1;  

        somador = somador + auxiliar;
    }   

    printf("%8.2f\n", somador);

    return 0;
    
}