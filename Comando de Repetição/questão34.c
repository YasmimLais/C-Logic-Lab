#include <stdio.h>

int main() {
    
    int dentro = 0;
    long long numeroDentro[10]; 
    
    int fora = 0;
    long long numeroFora[10];
    
    long long numero;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%lld", &numero);

        if (numero >= 10 && numero <= 50) {
            numeroDentro[dentro] = numero;
            dentro++;
        } else {

            numeroFora[fora] = numero;
            fora++;
        }
    }


    printf("\nQuantidade no intervalo [10...50]: %d\n", dentro);
    printf("Valores: ");
    for (int i = 0; i < dentro; i++) {
        printf("%lld%s", numeroDentro[i], (i == dentro - 1) ? "" : ", ");
    }

    printf("\n\nQuantidade fora do intervalo: %d\n", fora);
    printf("Valores: ");
    for (int i = 0; i < fora; i++) {
        printf("%lld%s", numeroFora[i], (i == fora - 1) ? "" : ", ");
    }
    
    printf("\n");
    return 0;
}
