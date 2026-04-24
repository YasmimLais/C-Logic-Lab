#include <stdio.h>

int main() {
    int k, n;
    long long resultado = 1;

    printf("Digite o valor da base: ");
    scanf("%d", &k);

    printf("Digite o valor da expoente: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        resultado *= k;}

    printf("Resultado: %lld\n", resultado);

    return 0;
}
