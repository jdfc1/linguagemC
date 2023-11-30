// Converter uma temperatura dada em graus Fahrenheit para graus Celsius.
// (in) A temperatura em Fahrenheit é dada como um número real.
// (out) Um número real, formatado com duas casas decimais, seguido de um final de linha.
// ex. 45 7.22
// Ou, se você quiser uma regra simples para conversão, pode subtrair 32 do valor
// em Fahrenheit e dividir o resultado por 1,8 

#include <stdio.h>
#include <stdlib.h>

int main() {

    float fah;
    scanf ("%f", &fah);

    int calculo=(fah-32);
    float resul=(calculo/1.8);

    printf ("%1.2f Celsius\n",resul);
}


