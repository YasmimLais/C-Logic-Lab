#include <stdio.h>

int main(){

    int idade, adultos = 0 ;
    for(int i = 0; i < 10; i++){
        
        scanf("%d", &idade);
        
        if(idade >= 18)
            idade++;
    }

    printf("A Quantidade de pessoas maiores de 18: %d", adultos);
    
    return 0;
}