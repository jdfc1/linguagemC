// Faça um programa que leia três notas (valores reais) de um aluno, calcule sua média
// aritmética e imprima uma mensagem dizendo se o aluno foi aprovado, reprovado
// ou deverá fazer prova final. O critério de aprovação é o seguinte:
// Aprovado (média >= 7);
// Reprovado (média < 3);
// Prova final ( 3 <= média < 7).
// (in) 03 números reais separados por um final de linha.
// (out) Uma mensagem que pode ser: aprovado, reprovado, prova final:
// Dependendo da situação do aluno. A saída deve terminar com uma quebra de linha.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, m;
    scanf ("%f %f %f",&n1,&n2,&n3);

    m = (n1 + n2 + n3)/3;

    if (m >= 7) {
        printf ("aprovado");
    }
    else if (m < 3) {
        printf ("reprovado");
    }
    else if ((m >= 3) || (m < 7)) {
        printf ("prova final");
    }
}
