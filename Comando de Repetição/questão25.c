#include <stdio.h>

int main(){

    for (int i = 14; i < 31; i++){
        if (i % 2 == 0)
            printf("%d| ", i);
    }

    return 0; 
}