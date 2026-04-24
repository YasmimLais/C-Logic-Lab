#include <stdio.h>

int main() {
    double S = 0.0;
    int numerador = 1;

    for (int denominador = 1; denominador <= 50; denominador++) {
        S += (double)numerador / denominador;
        numerador += 2; 
    }

    printf("O valor de S e: %.4lf\n", S);
    return 0;
}
