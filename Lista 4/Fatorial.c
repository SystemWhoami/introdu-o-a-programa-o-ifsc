#include <stdio.h>

int main(){
        int n;
        printf("Digite um número:\n");
        printf(">> ");
        scanf("%d", &n);
        for(int i=n-1; i>0; i--) {
                n=n*i;
        }
        printf("N!=%d\n", n);
}
