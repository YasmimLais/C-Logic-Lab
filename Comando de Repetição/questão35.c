#include <stdio.h>

int main(){
    
    int h = 0, n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        h += (1 + i);
    }

    printf("%d\n", h);
    return 0;
}
