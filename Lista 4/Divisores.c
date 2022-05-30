#include <stdio.h>

int main(){
        int a;
        printf("Digite um número:\n");
        printf(">> ");
        scanf("%d", &a);
        printf("Divisores: \n");
        for(int i=a; i>0; i--) {
                if (a%i==0) {
                        printf("%d ", i);
                }
        }
}
