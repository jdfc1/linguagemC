#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para usar string
#include <limits.h> // para usar o long int
#include <locale.h> // permitir strings characteres 

int main() {

    setlocale(LC_ALL, "Portuguese");

    // comparar strings 

     
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
 

    return 0;
}