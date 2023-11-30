// Faça um prgrama que mostre quantas cédulas é necessária na hora de passar o troco.
// (in) O usuário deve digitar o valor do saldo.
// (out) O programa irá contabilizar as cédulas que serão liberadas do caixa.

#include <stdio.h>
#include <math.h>

int main() {

    int saldo;

    scanf("%d",&saldo);

    int nota200 = 0; // 1
    int nota100 = 0; // 1
    int nota50 = 0; 
    int nota20 = 0; // 1
    int nota10 = 0; // 1
    int nota5 = 0; // 1
    int nota2 = 0; 
    int moeda1 = 0;  // 1

    while (saldo >= 200 && saldo <= 10000) { 
        nota200++;
        saldo -= 200; // 189
    }
    while (saldo >= 100 && saldo < 200) {
        nota100++;
        saldo = saldo - 100; // 89
    }
    while (saldo >= 50 && saldo < 100) {
        nota50++; 
        saldo = saldo - 50; // 39
    }
    while (saldo >= 20 && saldo < 50) {
        nota20++; 
        saldo = saldo - 20;
    }
    while (saldo >= 10 && saldo < 20){
        nota10++;
        saldo = saldo - 10;
    }
    while (saldo >= 5 && saldo < 10){
        nota5++;
        saldo = saldo - 5;
    }
    while (saldo >= 2 && saldo < 5){
        nota2++;
        saldo = saldo - 2; 
    }
    while (saldo >= 1 && saldo < 2){
        moeda1++;
        saldo = saldo - 1;
    }

    // operador ternário
    printf(nota200 != 0 ? "%d cédulas de 200\n" : "" ,nota200);
    printf(nota100 != 0 ? "%d cédulas de 100\n" : "" ,nota100);
    printf(nota50 != 0 ? "%d cédulas de 50\n" : "" ,nota50);
    printf(nota20 != 0 ? "%d cédulas de 20\n" : "" ,nota20);
    printf(nota10 != 0 ? "%d cédulas de 10\n" : "" ,nota10);
    printf(nota5 != 0 ? "%d cédulas de 5\n" : "" ,nota5);
    printf(nota2 != 0 ? "%d cédulas de 2\n" : "" ,nota2);
    printf(moeda1 != 0 ? "%d moedas de 1\n" : "" ,moeda1);
   
}
