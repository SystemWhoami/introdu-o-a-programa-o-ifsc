#include <stdio.h>
#define max 5

int main(){
        int n[max];
        int auxmaior=0;
        printf("Digite um número:\n");
        for(int i=0; i<max; i++) {
                printf(">> ");
                scanf("%d", &n[i]);
                printf("\n");
        }
        for(int i=0; i<max; i++) {
                auxmaior=n[i];
                if(n[i]>=auxmaior) {
                }
        }
        printf("Maior número digitado: %d\n", auxmaior);

}
