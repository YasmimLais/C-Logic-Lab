/*Questao 19. ˜ Escreva um algoritmo que recebe tres valores inteiros e mostre o valor do maior ˆ
numero digitado pelo usu ´ ario. */


#include <stdio.h>

int main()
{
    int x, ordem[3];
    
    // Recebe os 3 numeros
    for (int i = 0; i < 3; i++){
        scanf("%d", &x);
        ordem[i] = x;
    }    
    
    for (int i = 0; i < 3; i++){
        
        if (ordem[i] > ordem[i+1]){
            int aux = ordem[i];
            ordem[i] = ordem[i+1];
            ordem[i+1] = aux;
        }
        
    }
       
    for (int i = 1; i < 4; i++){
        printf("O ");
    } 
    
    
        

    return 0;
}
