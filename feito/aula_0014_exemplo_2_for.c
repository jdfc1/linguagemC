#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
            //      10
    for (int i = a; i >= 0; i--){ // 9
        for (int i = a; i >= 0; i--){ // 9 8 7 
        printf("%d ",i);
        }
    a--;
    printf("\n");
    }

}