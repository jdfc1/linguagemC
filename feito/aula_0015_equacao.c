// Toda vez que Ambrósio vai calcular as raízes de uma equação do segundo grau, esquece
// de algum detalhe e calcula errado. Para evitar esquecimentos, resolveu fazer um
// programa que calcula as raízes da equação de segundo grau.
// (in) Consiste dos números reais a, b e c, que correspondem aos coeficientes
// da equação de segundo grau (ax²+bx+c=0).

// Caso existam as raízes da equação, consiste de dois números reais formatados
// com duas casas decimais, representando as mesmas.
// Caso as raízes não existam, o sistema deve mostrar a mensagem
// (não existem raízes reais): NRR
// Caso não seja uma equação de segundo grau, o sistema deve mostrar a
// mensagem (não é uma equação do segundo grau): NEESG
// calcule 2x² +3x -5 = 0 - os resultados serão 1.00 -2.50 serão dados como certo.

#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c,delta,raiz,x1,x2;
    scanf ("%f %f %f",&a,&b,&c);

    delta = b * b - (4 * a * c);
    raiz = sqrt(delta); //sqrt raiz, pow elevado

    x1 = (-b + raiz) / (2*a);
    x2 = (-b - raiz) / (2*a);

    if (a==0) {
        printf ("NEESG");
    }
    else if (delta >= 0) {
        printf ("%.2f\n%.2f",x1,x2);
    }
    else if (delta < 0) {
        printf ("NRR");
    }
}
