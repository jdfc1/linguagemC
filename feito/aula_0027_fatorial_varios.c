// Calcule os fatoriais de uma sequência de números dada.
// (in) O programa receberá uma sequência de inteiros n, onde 0<=n<=12.
// O programa encerra a sua execução quando o número n dado for -1.
// Para cada n, deve-se imprimir um inteiro k seguido de um final de linha,
// correspondendo ao fatorial.

#include <stdio.h>

int main(){

    int n;
    int i;
    int valor=1;

    while (n != (-1)) {
        
        scanf("%d",&n);

        if(n != (-1)) {

            if ((n > 0) && (n <= 12)) {
                for (i = 1; i <= n; i++) {
                    valor = valor * i;
                }
            }
            printf("%d\n",valor);
            valor = 1;
        
        }

    }
    
}