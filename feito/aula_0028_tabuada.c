// Faça uma tabuada de multiplicação. onde o número N que será indicado pelo usuário
// multiplique de 0 até 10 mostrando o resultado
// (in) número inteiro
// (out) tabuada completa do 0 ao 10

#include <stdio.h>
#include <stdlib.h>

int main(){

	int x;
	int i;
	int res; 

	scanf("%d",&x);

	for (i = 0; i <= 10; i++){
		res = x * i;
		printf("[ %d x %d = %d ]\n", x, i, res);
	}
    
}