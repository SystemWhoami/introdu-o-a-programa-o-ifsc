#include <stdio.h>
/*
   Faça um algoritmo que leia altura e o sexo (M/F) de várias pessoas,
   até que seja digitado X para o último sexo lido.
   Ao final, apresentar a altura média das pessoas do sexo feminino e do sexo masculino.
 */

int main(){
        int tamM, tamF;
        float masc, fem, somaM, somaF, mediaM, mediaF;
        printf("Digite a altura das pessoas do sexo masculino:\n");
        do {
                printf(">>" );
                scanf("%f", &masc);
                printf("\n");
                somaM += masc;
                tamM++;
        } while(masc>0);

        printf("Digite a altura das pessoas do sexo feminino:\n");
        do {
                printf(">>" );
                scanf("%f\n", &fem);
                printf("\n");
                somaF += fem;
                tamF++;
        } while(fem>0);
        mediaF = somaF/tamF;
        mediaM = somaM/tamM;
        printf("A altura média das pessoas de sexo masculino é de %.2f\n", mediaM);
        printf("A altura média das pessoas de sexo feminino é de %.2f\n", mediaF);
}
