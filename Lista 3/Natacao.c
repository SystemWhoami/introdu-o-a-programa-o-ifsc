#include <stdio.h>

int main(){
        int idade;
        printf("Digite a idade do nadador\n");
        printf(">> ");
        scanf("%d", &idade);
        if(idade<=10) {
                printf("Infantil\n");
        }
        else{
                if(idade>=11 && idade<=17) {
                        printf("Juventil\n");
                }
                else{
                        if(idade>=18 && idade<=64) {
                          printf("Adulto\n");
                        }
                        else{
                          printf("Sênior\n");
                        }
                }
        }
}
