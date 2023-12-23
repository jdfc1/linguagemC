// Hoje à noite, o cinema da cidade será inaugurado com uma promoção: crianças até 10 anos e idosos com
// mais de 60 anos não pagarão ingresso. Além disso, em homenagem ao mês dos pais que se aproxima,
// adultos do sexo masculino com mais de 25 e menos de 35 anos também terão gratuidade.
// Escreva um programa que receba como entrada a idade e o sexo de cada pessoa que foi ao cinema,
// até que a idade informada seja 111, e exiba quantas não pagaram ingresso.

// (in)Valores inteiros representando as idades, e valores String (as iniciais M ou F, maiúsculas ou não)
// indicando os sexos
// (out) um valor inteiro ex.: 14 f 32 F 60 m 26 M 111 == 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para usar string
#include <limits.h> // para usar o long int
#include <locale.h> // permitir strings
#include <ctype.h> 

int main() {

    int idade;
    char sexo[2];
    int qtd = 0;

    do {

        idade = 0; 
        scanf("%d", &idade);

        if (idade != 111) {

            scanf("%s", sexo);

            if (idade <= 10 || (idade > 60 && idade < 111)) {
                qtd++;
            }
            else if (idade >= 26 && idade < 35) {
                if (strcmp(sexo, "m") == 0 || strcmp(sexo, "M") == 0) {
                    qtd++;
                }
            }

        }

    } while (idade != 111);

    printf("%d", qtd);
    

    return 0;
}