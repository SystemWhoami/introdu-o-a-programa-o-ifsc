#include <stdio.h>
#define max 100

int main(){
        int n[max];
        int auxmaior=0;
        int auxmenor=999999999;
        printf("Digite um número:\n");
        for(int i=0; i<max; i++) {
                printf(">> ");
                scanf("%d", &n[i]);
                printf("\n");
        }
        for(int i=0; i<max; i++) {
                if(n[i]>=auxmaior) {
                        auxmaior=n[i];
                }
                if(n[i]<=auxmenor) {
                        auxmenor=n[i];
                }

        }
        printf("Maior número digitado: %d\n", auxmaior);
        printf("Menor número digitado: %d\n", auxmenor);

}
