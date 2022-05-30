#include <stdio.h>

int main(){
        float val;
        printf("Digite o valor gasto:\n");
        printf(">> ");
        scanf("%f", &val);
        if(val>=200) {
                val = val-((val/100)*15);
        }
        printf("O valor a pagar é de R$%.2f.", val);
}
