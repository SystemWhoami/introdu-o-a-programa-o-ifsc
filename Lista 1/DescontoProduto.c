#include <stdio.h>

int main(){
        float produto;
        int porcentagem;
        printf("Digite o valor(R$) do produto:\n");
        printf(">> ");
        scanf("%f", &produto);
        printf("Digite o valor do desconto(%):\n");
        printf(">> ");
        scanf("%d",&porcentagem);
        float valDesconto = (produto/100)*porcentagem;
        float descontado = produto-valDesconto;
        printf("O valor do desconto é de R$%.2f\n", valDesconto);
        printf("O valor após o desconto é de R$%.2f\n", descontado);
}
