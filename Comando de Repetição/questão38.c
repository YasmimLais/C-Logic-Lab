#include <stdio.h>

int main() {
    double x, S = 0.0;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= 20; i++) {
        if (x - i == 0) {
            printf("Erro: Divisao por zero no termo %d!\n", i);
            continue; 
        }
        S += 1.0 / (x - i);
    }

    printf("O valor de S (20 termos) e: %.4lf\n", S);
    return 0;
}
