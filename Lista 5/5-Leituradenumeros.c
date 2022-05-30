#include <stdio.h>
/*
   Faça um algoritmo que leia vários números e informe quantos desses números foram digitados entre 100 e 200.
   Quando o valor 0 (zero) for lido o algoritmo deverá parar sua execução.
 */
int main(){
        int valor, cont=0;
        printf("Digite um número:\n");
        do {
                printf(">> ");
                scanf("%d", &valor);
                printf("\ns");
                if (valor>100 && valor<200) {
                        cont++;
                }
        } while(valor!=0);
        printf("O numero de valores digitados entre 100 e 200 foi de %d\n", cont);
}
