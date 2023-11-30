// faça um programa que identifique números primos
// (in) um número inteiro como entrada 
// (out) mostre (o número) para dizer que é primo e (Não é primo) para dizer que não é um número primo

// dica: o número primo tem que ser divisivel por 1 e por ele mesmo e ser maior do que 1.
//    x % 1 == 0    &&     x % x == 0

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x;
    int i;
    int cont = 0;
    // 5
    scanf("%d",&x);

    if (x < 1) {
        printf("não é primo\n");
    }
    else {

        for (i = 1; i <= x; i++) {
            if (x % i == 0) {
                cont++; //2
            }
        }
        if (cont == 2) {
            printf("o número: %d é primo\n", x);
        }
        else {
            printf("não é primo\n");
        }
    }

    

}