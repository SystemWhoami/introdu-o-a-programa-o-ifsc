#include <stdio.h>

int main(){
        int anoA, anoB;
        printf("Digite a idade da pessoa A:\n");
        printf(">> ");
        scanf("%d", &anoA);
        printf("Digite a idade da pessoa B:\n");
        printf(">> ");
        scanf("%d", &anoB);
        if(anoA==anoB) {
                printf("As pessoas tem a mesma idade\n");
        }
        else{
                if (anoA<anoB) {
                        printf("A pessoa A é a mais velha\n");
                }
                else{
                        printf("A pessoa B é a mais velha\n");
                }
        }
}
