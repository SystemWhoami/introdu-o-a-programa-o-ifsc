#include <stdio.h>

int main(){
        float salario;
        int porcentagem;
        printf("Digite o valor do sálario(R$):\n");
        printf(">> ");
        scanf("%f", &salario);
        printf("Digite o valor de aumento do sálario(%):\n");
        printf(">> ");
        scanf("%d", &porcentagem);
        float aumento = salario * (100 + porcentagem) / 100;
        printf("Salario inícial: R$%.2f\n", salario);
        printf("Sálario após aumento de %d\%: R$%.2f\n", porcentagem, aumento);
}
