#include <stdio.h>
int main()
{
    int a, b, c, raiz1, raiz2;
    scanf("%d %d %d", &a, &b, &c);

    int Delta = b*b -(4*a*c);

    if (Delta == 0){
        raiz1 = (-b) / (2*a);
        raiz2 = (-b) / (2*a);
    }
    if (Delta > 0){
        raiz1 = (-b + Delta ) / (2*a);
        raiz2 = (-b - Delta ) / (2*a);
    }

    printf("Raiz 1: %d\nRaiz 2: %d", raiz1, raiz2);
    
    return 0; 
}