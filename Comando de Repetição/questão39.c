#include <stdio.h>

int main() {
    int n1 = 1, n2 = 1, proximo;

    printf("Os 10 primeiros termos da serie de Fibonacci:\n");

    for (int i = 1; i <= 10; i++) {
        // Mostra o termo atual
        printf("%d ", n1);

        // Calcula o próximo termo
        proximo = n1 + n2;
        
        // Atualiza os valores
        n1 = n2;
        n2 = proximo;
    }

    printf("\n");
    return 0;
}
