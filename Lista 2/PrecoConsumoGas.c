#include <stdio.h>

int main(){
        float gas, val;
        printf("Digite a quantia de gás consumido:\n");
        printf(">> ");
        scanf("%f", &gas);
        if(gas<=10) {
                val = 15*gas;
        }
        else if(gas>10) {
                val = 15*gas+20;
        }
        printf("O valor a ser pago é de %.2f", val);
}
