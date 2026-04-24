#include <stdio.h>

int main(){

    long long somaTermos = 0 , numeroTermos = 0, media;

    for (int i = 13; i < 73; i++){

        if (i % 2 == 0){
            somaTermos += i;
            numeroTermos++;
        }

    }

    media = somaTermos / numeroTermos;
    printf("%lld", media);

    return 0;

}
