#include <stdio.h>

int main(){
        float val;
        printf("Digite o valor total das suas vendas:\n");
        printf(">> ");
        scanf("%f", &val);
        if(val=>30000) {
                printf("Parabéns, você superou a meta do mês!\n", );
        }
        else{
                printf("Infelizmente você não alcançou a meta do mês\n", );
        }
}
