// Escreva um programa que, dado o diâmetro de uma bola e as 3 dimensões de uma caixa
// (altura, largura e profundidade), diz se a bola de boliche cabe dentro da caixa ou não.
// A primeira linha da entrada contém um inteiro N (1 <= N <= 10.000) que indica o diâmetro
// da bola de boliche. A segunda linha da entrada contém 3 números inteiros separados por
// um espaço cada: a altura A (1 <= A <= 10.000), seguida da largura L (1 <= L <= 10.000)
// e da profundidade P (1 <= P <= 10.000).
// Seu programa deve imprimir uma única linha, contendo a letra 'S' caso a bola de
// boliche caiba dentro da caixa ou 'N' caso contrário.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int di, a,b,c; // 3   2,3,5 

    scanf ("%i",&di);

    scanf ("%i %i %i",&a,&b,&c);
    
    if ( (di >= 1) && (di <= 10000) && (a >= 1) && (a <= 10000) && 
         (b >= 1) && (b <= 10000) && (c >= 1) && (c <= 10000) ) {	
        
		if ((a <= b) && (a <= c) && (di <= a)){
            printf("S");
        }
        else if ((b <= a) && (b <= c) && (di <= b)) {
            printf("S");
        }
        else if ((c <= a) && (c <= b) && (di <= c)) {
            printf("S");
        }
        else {
            printf("N");
        }
    }
}