#include <stdio.h>

int calculadora(int *a, int *b, int *parametro) {
    int res = 0;
    if (*parametro == 0)
        res = *a + *b;
    else if (*parametro == 1)
        res = *a - *b;
    else if (*parametro == 2) {
        if (*b != 0) // Prevenção contra divisão por zero
            res = *a / *b;
        else
            res = 0;
    } 
    else if (*parametro == 3)
        res = *a * *b;

    return res;
}

int main() {
    int x, y;
    
    printf("Digite dois números: ");
    if (scanf("%d %d", &x, &y) != 2) return 1;

    for (int i = 0; i < 4; i++) {
        int resultado = calculadora(&x, &y, &i);
        printf("Operação %d: %d\n", i, resultado);
    }

    return 0;
}
