#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para usar string
#include <limits.h> // para usar o long int
#include <locale.h> // permitir strings characteres 

int main() {

    setlocale(LC_ALL, "Portuguese");

    // char string[7] = {'b', 'r', 'a', 's', 'i', 'l', ' '};
    // char string[] = {'b', 'r', 'a', 's', 'i', 'l', ' '};
    // char string[7] = {"Brasil "};
    // char string[] = {"Brasil "}; \0
    // char palavra1[] = "Brasil "; \0

    // %d - inteiro
    // %f - float
    // %c - caractere
    // %s - string
 
    int inteiro = 542;
    printf("Inteiro: %d\n", inteiro);

    long int longInt = 834567890999888;
    printf("Long Int: %ld\n", longInt);

    printf("Tamanho de long int em bits: %lu\n", sizeof(long int) * 8);
    printf("Intervalo de long int: de %ld a %ld\n", LONG_MIN, LONG_MAX);
    
    double pontoFlutuante = 3.14159265358;
    printf("Ponto Flutuante: %f\n", pontoFlutuante);

    char caractere = 'A';
    printf("Caractere: %c\n", caractere);

    char minhaString[] = "Hello, World!";
    printf("String: %s\n", minhaString);
    
    printf("\n");

    char palavra1[] = "Brasil ";

    for(int i = 0; i < 7; i++){
        printf("%c", palavra1[i]); 
    }

    printf("%s \n", palavra1);

    char palavra2[7] = "Campeao";
    int g = 0;

    // primeira forma

    char nova_string[14];
    
    for(int i = 0; i < 7; i++){
        nova_string[i] = palavra1[i];
    }

    int j = 0;

    for(int i = 7; i < 14; i++){
        nova_string[i] = palavra2[j];
        j++;
    }    
    
    for(int i = 0; i < 14; i++){
        printf("%c", nova_string[i]);
    }
    printf("\n");
    printf("%s\n", nova_string);
    
    // entrada de informação. primeiro modo
   
    // printf("\n");
/* 
    char word2[20];

    printf("digite o primeiro texto: \n");
    scanf("%20[^\n]s", word2);
    fflush(stdin); // entrada de dados padrão

    printf("Resultado: %s\n", word2);
 */

    // entrada de informação. segundo modo


/*     char tela1[10];
    printf("Digite algo aqui ");
    gets(tela1); // não limita string
    fflush(stdin); // entrada de dados padrão

    puts(tela1);
    puts("");
 */

    // entrada de informação. terceiro modo

   
/*    
    char tela2[10];
    printf("Digite algo aqui ");
    fgets(tela2, 10, stdin); // trabalha com limitação
    fflush(stdin);

    puts(tela2);
    puts("");
 */

    
    // copiar uma string para outra com strcpy

    /* char val[20] = "olá mundo";
    char destino[20]; 

    strcpy(destino, val); // copiar uma string para outra
    puts(val);
    puts(destino); */


    // tamanho string

    // char umastring[] = "Hello, World baby, brasil ";
    // printf("Tamanho da string: %lu\n", strlen(umastring));


    // juntar, unir, concatenar strings com strcat

   /*  char primeira[20] = "Canal do Primo ";
    char segunda[20] = "Programador!";

    strcat(primeira,segunda);

    puts(primeira);
    puts(""); */
    









    

    // comparar strings 

   /*   
    char note_book1[20] = {"primo"};
    
    char note_book2[20]; 
    
    int verificar;



    // primo\n <- fgets
    // primo\0
    // 012345

    printf("digite para comparar\n");
    fgets(note_book2, sizeof(note_book2), stdin);
    int tam = strlen(note_book2); //5 4
        
    // sizeof(string) como segundo argumento é garantir que
    // a função não ultrapasse os limites da sua string e cause um estouro de buffer.


    // fgets \n

    if (note_book2[tam - 1] == '\n') { // Remover o letra de nova linha do final da string
        note_book2[tam - 1] = '\0';    // nulo
        tam--; // for 
    }

    verificar = strcmp(note_book1, note_book2);

    if (verificar == 0){
        printf("iguais");
    }
    else {
        printf("diferentes");
    }
  */

    return 0;
}