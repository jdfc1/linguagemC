/* Você irá receber uma string contendo letras e dígitos. Sua missão é imprimir a quantidade de dígitos
que aparecem na string.
(in) Uma linha com até 200 caracteres contendo letras e números
(out) Uma linha contendo um número inteiro indicando a quantidade de dígitos encontrados.
Exemplos: abcde1dfe2ahd3akj2, Saída - 4 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para usar string
#include <locale.h> // permitir strings
#include <ctype.h> // permite verificações de strings

int verificar(char valor[201]){
    
    int tamanho = strlen(valor);
    int cont = 0;

    for (int i = 0; valor[i] != '\0'; i++) {
        if (isdigit(valor[i])) {
            cont++;
        }
    }
    return cont;
}

int main() {

    char entra[201]; // abcde1dfe2ahd3akj2 - 4

    fgets(entra, sizeof(entra), stdin);
    int tam = strlen(entra);

    if (entra[tam - 1] == '\n') { // Remover o letra de nova linha do final da string
        entra[tam - 1] = '\0';    // nulo
        tam--; // for 
    }

    printf("%d", verificar(entra));

    return 0;

}