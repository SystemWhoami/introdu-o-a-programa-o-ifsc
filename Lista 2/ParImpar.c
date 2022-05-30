#include <stdio.h>

int main(){
        int a;
        printf("Digite um número:\n");
        printf(">> ");
        scanf("%d", &a);
        if(a%2==0) {
                printf("O número digitado é par!\n");
        }
        else{
                printf("O número digitado é impar!\n");

        }
}
