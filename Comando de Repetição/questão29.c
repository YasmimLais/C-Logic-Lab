#include <stdio.h>

int main(){

    for(int i = 0; i < 5; i++){
        int numero;
        scanf("%d", &numero);

        if ( numero > 100 && numero < 200)
            printf("Voce digitou um numero entre 100 e 200");
        else
            printf("Voce digitou um numero fora da faixa entre 100 e 200");
    }

    return 0;
}