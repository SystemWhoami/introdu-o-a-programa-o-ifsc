#include <stdio.h>

int main(){
        int anos;
        float salario, bonus;
        printf("Digite quantos anos de casa vc tem:\n");
        printf(">> ");
        scanf("%d", &anos);
        printf("Digite o valor do seu salário:\n");
        printf("%f", &salario);
        if(anos<3) {
                bonus = (salario/100)*50;
        }
        else{
                bonus = (salario/100)*75;
        }
        printf("o valor do seu bônus será de R$%.2f", bonus);
}
