/* Faça um progrma para ler uma string e um caracter qualquer e imprima as posições (índices) de onde ocorre
o caracter na string. Por exemplo, seja a string "abracadabra!!!" e o caracter 'a', então a sua saída deve ser:
'0 3 5 7 10 -1' O valor -1 indica o final, ou seja, não existem mais ocorrências. Caso não exista nenhuma
ocorrência, deve ser impresso o valor -1. Considere também que o 0 representa o índice do primeiro caracter em
uma string. (in) Você receberá duas linhas. A primeira linha contém a string e a segunda linha contém um caracter.
O tamanho máximo da string é 50. (out) Imprima os índices, sendo um por linha. */ 

#include <stdio.h>
#include <string.h>

int main(void) {
    
    char word[51];
    char letra;

    // Leitura da string
    fgets(word, sizeof(word), stdin); 
    int tam = strlen(word);

    if (word[tam - 1] == '\n') {  // Remover o letra de nova linha do final da string
        word[tam - 1] = '\0'; 
        tam--;
    }

    scanf("%c", &letra);

    int encontrou = 0; 

    for (int i = 0; i < tam; i++) { 
        if (word[i] == letra) {
            printf("%d\n", i);
            encontrou = 1;
        }
    }
    
    if (!encontrou) { // Se não encontrou, imprimir -1
        printf("-1\n");
    }
    else{
        printf("-1\n");
    }
    

    return 0;
}
