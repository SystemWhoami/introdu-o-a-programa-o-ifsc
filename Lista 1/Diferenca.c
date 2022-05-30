#include <stdio.h>

int main(){
        int a, b;
        printf("Digite um número:\n");
        printf(">> ");
        scanf("%d", &a);
        printf("Digite outro número:\n");
        printf(">> ");
        scanf("%d", &b);
        int diferenca = a-b;
        printf("A diferença entre os 2 números é %d", diferenca);
}
