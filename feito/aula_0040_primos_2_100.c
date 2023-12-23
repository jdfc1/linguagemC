// faça um programa que identifique os números primos de
// 2 a 100
// (in) não é preciso de nenhuma entrada. 
// (out) mostre quais são os números primos de 2 a 100
// dica: o número primo tem que ser divisivel por 1 e por
// ele mesmo e ser maior do que 1.

#include <stdio.h>
#include <stdlib.h>

int eh_primo(int n) {
    
    int i, cont = 0;;

    if (n < 1) {
        return 0;
    }
    else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                cont++; 
            }
        }
        if (cont == 2) {
            return 1;
        }
        else {
            return 0;
        }
    }

}

int main() {
    
    for (int i = 2; i <= 100; i++) {
        if (eh_primo(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}