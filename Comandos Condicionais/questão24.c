/*Questao 24. ˜ Escreva um programa que calcule o Valor a Pagar pela conta de energia eletrica ´
para uma determinada Classe Consumidora. Veja as informac¸oes a seguir: ˜
a. O programa deve receber como dados de entrada: o tipo da Classe Consumidora, (conforme
definido na Tabela 1) e o Consumo em quilowatts/hora (KW h);
b. O calculo do Valor do Fornecimento ( ´ V F), em Reais (R$), e definido pela seguinte f ´ ormula: ´
V F = Consumo ∗ T arif a, onde a tarifa e definida na Tabela 1, conforme a classe consumidora; ´
c. O Valor a Pagar (V P) e definido pela seguinte f ´ ormula: ´ V P = V F + ICMS, onde a taxa de
ICMS e calculada aplicando uma al ´ ´ıquota de 30% ao valor do fornecimento (ICMS = 0.3 ∗ V F).
Tabela 1: Tarifa de cada Classe consumidora.
Classe Consumidora Tarifa (R$)
A 0.5
B 0.8
C 1.0*/

#include <stdio.h>;

int main(){

    float valorFornecido, consumo, kw, taxaClasse[3] = {0.5, 0.8, 1.0};
    char tipoClasse;

    printf("Digite a sua classe: ");
    scanf("%c", &tipoClasse);

    


  

    return 0;
}