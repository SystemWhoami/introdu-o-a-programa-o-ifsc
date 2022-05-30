#include <stdio.h>
#define max 5

int main(){
        int peso[max];
        int altura[max];
        int mediapeso, mediaaltura;
        for(int i=1; i<max+1; i++) {
                printf("Digite o peso da %dª pessoa:\n", i);
                printf(">> ");
                scanf("%d", &peso[i]);
                printf("\n");
                mediapeso += peso[i];
        }
        for(int i=1; i<max+1; i++) {
                printf("Digite a altura da %dª pessoa:\n", i);
                printf(">> ");
                scanf("%d", &altura[i]);
                printf("\n");
                mediaaltura += altura[i];
        }
        mediapeso = mediapeso/max;
        mediaaltura = mediaaltura/max;
        printf("A média de peso as pessoas é de: %dKg\n", mediapeso);
        printf("A média de altura as pessoas é de: %dM\n", mediaaltura);


}
