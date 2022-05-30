#include <stdio.h>

int main(){
        float n1, n2, n3, media;
        int faltas, resultado;
        printf("Digite as 3 notas do aluno:\n");
        printf(">> ");
        scanf("%f", &n1);
        printf(">> ");
        scanf("%f", &n2);
        printf(">> ");
        scanf("%f", &n3);
        printf("Digite o número de faltas do aluno\n");
        printf(">> ");
        scanf("%d", &faltas);
        media = (n1+n2+n3)/3;
        if(media>=6) {
                if(faltas<21) {
                        printf("Aprovado!\n");
                }
                else{
                        printf("Reprovado por falta!\n");
                }
        }
        else{

                if (faltas>=21) {
                        printf("Reprovado por média e falta!\n");
                }
                else{
                        printf("Reprovado por média!\n");
                }
        }
}
