#include <stdio.h>

int main(){
        float tanque, val;
        char escolha;
        float e=5.99;
        float d=6.589;
        float g=6.99;
        printf("Digite a capacidade do tanque:\n");
        printf(">> ");
        scanf("%f", &tanque);
        printf("Escolha o combustivel:\n");
        printf("e - Etanol;\n");
        printf("d - Diessel;\n");
        printf("g - Gasolina;\n");
        scanf("%s", &escolha);
        switch (escolha) {
        case 'e':
                val = tanque*e;
                printf("o valor gasto para encher o tanque é de R$%.2f\n", val);
                break;
        case 'D':
                val = tanque*d;
                printf("o valor gasto para encher o tanque é de R$%.2f\n", val);
                break;
        case 'G':
                val = tanque*g;
                printf("o valor gasto para encher o tanque é de R$%.2f\n", val);
                break;

        }
}
