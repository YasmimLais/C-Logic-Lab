/*Quest˜ ao 14. Fac¸a um algoritmo que recebe um valor inteiro e mostra se o valor ´ e zero, positivo
ou negativo. */


#include <stdio.h>

int main()
{
    int x;
   scanf("%d", &x);
   
   if( x == 0)
        printf("X é igual a zero\nValor de x: %d", x);
    else if ( x > 0)
        printf("X é positivo\nValor de x: %d", x);
    else
        printf("X é negativo\nValor de x: %d", x);
   
  
        

    return 0;
}
