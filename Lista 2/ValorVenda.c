#include <stdio.h>

int main(){
        float val, valvenda;
        printf("Digite o valor do produto:\n");
        printf(">> ");
        scanf("%f", &val);
        if(val<100) {
                valvenda = val +((val/100)*40);
        }
        else{
                valvenda = val +((val/100)*30);
        }
        printf("O valor de venda do produto é de R$%.2f\n", valvenda);
}
