#include <stdio.h>

int main() {
    double S = 0.0;

    for (int i = 1; i <= 10; i++) {
        S += 1.0 / i;
    }

    printf("O valor de S e: %.4lf\n", S);
    return 0;
}
