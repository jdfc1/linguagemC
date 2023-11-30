// Faça um programa que leia dois valores inteiros representando, respectivamente, um valor
// de HORA e um de MIMUTOS e informe quantos minutos se passaram deste o início do dia.
// (in) Serão fornecidos dois números inteiros separados por um final de linha.
// (out) Seja x o total de minutos decorridos desde o início do dia, a sua saída
// deve estar no seguinte formato: x minutos.
// Perceba que a sua saída deve ser seguida de um final de linha.

#include <stdio.h>
#include <stdlib.h>

void main() {

    int a, b, x;
    scanf ("%d %d",&a,&b);
    x = a * 60 + b;
    printf ("%d minutos.\n", x);
    
}