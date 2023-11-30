// No frigorífico do senhor Ambrósio, existem n bois. Cada boi traz preso em seu
// pescoço um cartão contendo seu número de identificação e seu peso. Faça um programa
// que escreva a identificação e o peso do boi mais gordo e do mais magro.
// Considere que os bois não têm pesos iguais.
// (in) Um inteiro N indicando a quantidade de bois do frigorifico, depois N 
// identificadores e pesos de cada boi. Os identificadores são números inteiros.
// Os pesos de cada boi são números reais.
// (out) Duas linhas escritas: (Gordo: id: i1 peso: p1Kg), (Magro: id: i2 peso: p2Kg)
// O peso deve ser formatado em duas casas decimais.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x,id;
    float peso,pesomaior=0,pesomenor=32760;

    scanf ("%d",&x);
    int i, gordo, magro;

    for (i=0; i<x; i++){
        scanf ("%d", &id);
        scanf ("%f", &peso);
    //  1100      1000
    if (peso > pesomaior){
        pesomaior = peso; // pesomaior1100
        gordo = id; // gordo: 888
    }
    //  1100      800
    if (peso < pesomenor){
        pesomenor = peso; // pesomenor800
        magro = id; // magro101
    }

    }
    printf ("Gordo: id: %d peso: %.2fKg\n", gordo,pesomaior);
    printf ("Magro: id: %d peso: %.2fKg\n", magro,pesomenor);
}