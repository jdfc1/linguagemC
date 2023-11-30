// Escreva um programa que receba como entrada os vários valores da taxa de glicose de
// até que o valor informado seja 0, e calcule a glicose média observada naquele dia.
// Caso esse valor seja inferior a 110, o programa deve exibir a mensagem Glicose Normal.
// Caso seja 200 ou mais, a mensagem exibida deve ser Glicose Muito Alta.
// Nos demais casos, o programa deve exibir Glicose Alterada.
// (in) Vários valores inteiros, até que seja informado o zero.
// (out) Uma das seguintes mensagens: Glicose Normal, Glicose Alterada ou Glicose Muito Alta.
// 100 95 112 87 102 0  - glicose normal

#include <stdio.h>
#include <stdlib.h>

int main() {
    float taxa_glicose, soma_glicose = 0;
    int contador = 0;

    do {
        scanf("%f", &taxa_glicose);

        if (taxa_glicose != 0) {
            soma_glicose += taxa_glicose;
            contador++;
        }
    } while (taxa_glicose != 0);

    float media_glicose = soma_glicose / contador;

    if (media_glicose < 110) {
        printf("Glicose Normal");
    } else if (media_glicose >= 200) {
        printf("Glicose Muito Alta");
    } else {
        printf("Glicose Alterada");
    }

    return 0;
}