#include <stdio.h>

int main()
{
    int lado;
    int triangulo[3];

    for (int i = 0; i < 3; i++){ // Recebe três valor correspondentes ao lados
      scanf("%d", &lado);
      triangulo[i] = lado;  
    }

    int ladosIguais = 0;
    for (int i = 0; i < 3; i++){ 
        if(triangulo[i] == triangulo[i+1]){
            ladosIguais++;
        } 
    }

    if(ladosIguais == 1 && ladosIguais == 2) // 2 ladosIguais ou 3 ladosIguais 
        printf("Escaleno e isoseles");
    else if (ladosIguais == 1)
        printf("É isoseles");
    else 
        printf("Escaleno");
    
    return 0; 
}