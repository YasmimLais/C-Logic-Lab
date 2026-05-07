#include <stdio.h>

int main()
{
    int n = 3; 
    int k = 1;
    int i;    

    for(i = 1; i <= n; i++){
        k *= 2; 
        printf("Resultado de 2 elevado a %d: %d\n", i, k);
    }

    return 0;
}
