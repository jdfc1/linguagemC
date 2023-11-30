// Sabe-se que anos bissextos são os anos que possuem 366 dias no
// calendário, esse dia representa o acrescimo de 1 dia em Fevereiro,
// que deixa de ter 28 dias, e passa a ter 29.
// (in) Dois inteiros, representando um ano inicial, e um ano final.
// (out)Todos os anos bissextos entre os dois anos dados, inclusive.
// Se não houver anos bissextos, imprimir "-1", sem as aspas.
// Obs: a saida deve ser seguida de uma quebra de linha.

#include <stdio.h>
#include <stdlib.h>

int verifica(int a) {

    if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))  {
        return 1;
    }
        return 0;
}

int main() {

    int anoInicial;
    int anoFinal;
    int resultado;

    scanf("%d %d", &anoInicial, &anoFinal);

    for (int i = anoInicial; i <= anoFinal; i++) {

        if (verifica(i)) {
            resultado = printf("%d\n",i);
        }
    }

    if (resultado <= 1) {
        printf("-1\n");
    }

    return 0;
}