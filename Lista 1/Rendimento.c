#include <stdio.h>

int main(){
        float inicio, fim, combustivel;
        printf("Digite a quilometragem antes da viagem:\n");
        printf(">> ");
        scanf("%f", &inicio);
        printf("Digite a quilometragem depois da viagem:\n");
        printf(">> ");
        scanf("%f", &fim);
        printf("Digite a quantidade de combustivel gasta\n");
        printf(">> ");
        scanf("%f", &combustivel);
        float rendimento = combustivel/(fim-inicio);
        printf("O rendimento do seu carro é de %.2fL/Km.", rendimento);
}
