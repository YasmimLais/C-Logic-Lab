#include <stdio.h>

int main(){

    int numero, numeroMaior = 0;
    for (int i = 0; i < 5; i++){
        scanf("%d", &numero);
        if (numero > numeroMaior) numeroMaior = numero;
    }
    
    printf("%d", numeroMaior);
    return 0;
}
