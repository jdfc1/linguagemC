// Escreva um programa que mostre em sequencia os 10 últimos segundos para o final do ano
// você pode usar as bibliotecas <time.h> com a função sleep para os segundos.
// (in) não precisa de nenhuma entrada.
// (out) ao termino dos 10 segundos imprima na tela (Feliz Ano Novo!)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {

    int countdown = 10;
    
    while (countdown > 0) {
        printf("%d\n", countdown);
        sleep(1);
        countdown--;
    }

    printf("Feliz Ano Novo!\n");

    return 0;
}
