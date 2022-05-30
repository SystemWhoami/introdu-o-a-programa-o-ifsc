#include <stdio.h>
/*
   Faça um algoritmo que leia o peso e a altura de várias pessoas até que seja digitado um valor negativo para o último peso.
   Após a leitura dos dados, o algoritmo deve informar o peso e a altura média dos valores lidos.
 */
int main(){
        int tamA, tamP;
        float altura, peso, somaA, somaP, mediaA, mediaP;
        printf("Digite a altura das pessoas:\n");
        do {
                printf(">>" );
                scanf("%f", &altura);
                printf("\n");
                somaA += altura;
                tamA++;
        } while(altura>=0);

        printf("Digite o peso das pessoas:\n");
        do {
                printf(">>" );
                scanf("%f\n", &peso);
                printf("\n");
                somaP += peso;
                tamP++;
        } while(peso>=0);
        mediaA = somaA/tamA;
        mediaP = somaP/tamP;
        printf("A altura média das pessoas é de %.2f\n", mediaA);
        printf("O peso médio das pessoas é de %.2f\n", mediaP);
}
