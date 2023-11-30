// declaração de vetores <tipo> <nome> [<tamanho>] = {<v1>, ..., <vn>}

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int vector[5] = {100, 15, 20, 17, 9};

    float res;

    for (int i = 0; i < 5; i++){
        res += vector[i];
    }
    
    printf("Resultado: %1.2f\n", res / 5);
    
}