#include <stdio.h>

int main(){
        int vel, multa;
        printf("Qual a velocidade do veículo:\n");
        printf(">> ");
        scanf("%d", &vel);
        if (vel>60) {
                printf("Multado!\n");
                multa = 10*(vel-60);
                printf("A multa do veículo é de R$%d\n", multa);
        }
        else{
                printf("velocidade permitida.\n");
        }
}
