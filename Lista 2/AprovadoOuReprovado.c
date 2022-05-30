#include <stdio.h>

int main(){
        float n1, n2, n3;
        printf("Digite as 3 notas do aluno:\n");
        printf(">> ");
        scanf("%f", &n1);
        printf(">> ");
        scanf("%f", &n2);
        printf(">> ");
        scanf("%f", &n3);
        float media = (n1+n2+n3)/3;
        if(media>=6) {
                printf("Aprovado!");
        }
        else{
                printf("Reprovado!");
        }
}
