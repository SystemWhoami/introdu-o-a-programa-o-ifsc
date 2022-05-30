#include <stdio.h>

int main(){
        float a, b, produto;
        printf("Digite um número:\n");
        printf(">> ");
        scanf("%f", &a);
        printf("Digite outro número:\n");
        printf(">> ");
        scanf("%f", &b);
        for(int i=0; i<a ; i++) {
                produto = produto+b;
        }
        printf("O valor do produto entre %.1f e %.1f = %.1f\n", a, b, produto);
}
a
