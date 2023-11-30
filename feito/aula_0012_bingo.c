// Você está organizando um bingo e deseja que cada número sorteado apareça no telão.
// Faça um programa que dado um número digitado imprima: 'O numero sorteado foi: X', 
// onde X é o número sorteado.
// (in) um número inteiro
// (out) A mensagem: 'O numero sorteado foi: X', onde x corresponde ao número digitado.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    scanf("%d", &numero);
    printf("O numero sorteado foi: %d\n", numero);
}
