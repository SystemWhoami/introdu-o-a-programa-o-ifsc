#include <stdio.h>

int main(){
        int a, b, aux;
        printf("Digite um valor(A):\n");
        printf(">> ");
        scanf("%d", &a);
        printf("Digite outro valor(B):\n");
        printf(">> ");
        scanf("%d", &b);
        printf("antes da troca A = %d e B = %d\n", a, b);
        aux=b;
        b=a;
        a=aux;
        printf("depois da troca A = %d e B = %d\n", a, b);
}
