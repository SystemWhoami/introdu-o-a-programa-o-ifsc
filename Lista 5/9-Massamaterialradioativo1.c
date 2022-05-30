#include <stdio.h>
/*
   Na usina de Angra dos Reis, os técnicos analisaram a perda de massa de um material radioatvo.
   Sabendo-se que esse material perde 25% de sua massa a cada 30 segundos,
   faça um algoritmo que leia a massa de material em g e calcule em quanto tempo a massa do material se tornará menor que 0.1g.
 */
int main(){
        float massa;
        int tempo=0;
        printf("Digite o tamanho da massa radioativa(g):\n");
        printf(">> ");
        scanf("%f", &massa);
        do {
                massa -= (massa/100)*25;
                tempo+= 30;
        } while(massa>0.1);
        printf("O tempo que a massa demora para se tornar menor que 0.1g é de %d segundos\n", tempo);
}
