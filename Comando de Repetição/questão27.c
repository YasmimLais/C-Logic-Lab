#include <stdio.h>

int main(){

    for(int i = 15; i < 31; i++){
        int resultado = i*i;
        printf("O quadrado de %d: %d\n", i, resultado);
    }
    
    return 0;
}