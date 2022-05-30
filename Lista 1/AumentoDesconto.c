#include <stdio.h>

int main(){
        float salario;
        printf("Digite o valor do sálario(R$):\n");
        printf(">> ");
        scanf("%f", &salario);
        float aumento = salario+((salario/100)*20);
        float desconto = aumento-((aumento/100)*10);
        printf("Salario inícial: R$%.2f\n", salario);
        printf("Sálario após aumento de 20%: R$%.2f\n", aumento);
        printf("Sálario líquido(após desconto de 10%% de impostos): R$%.2f\n", desconto);
}
