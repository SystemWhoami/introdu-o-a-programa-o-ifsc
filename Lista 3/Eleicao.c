#include <stdio.h>

int main (){
        char nome1[100], nome2[100], nome3[100], nome4[100];
        int nV1, nV2, nV3, nV4;

        printf("Informe o nome do 1° candidato:\n");
        printf(">> ");
        scanf("%s", nome1);
        printf("Informe o numero de votos para o 1° candidato:\n");
        printf(">> ");
        scanf("%d",&nV1);

        printf("Informe o nome do 2° candidato:\n");
        printf(">> ");
        scanf("%s", nome2);
        printf("Informe o numero de votos para o 2° candidato:\n");
        printf(">> ");
        scanf("%d",&nV2);

        printf("Informe o nome do 3° candidato:\n");
        printf(">> ");
        scanf("%s", nome3);
        printf("Informe o numero de votos para o 3° candidato:\n");
        printf(">> ");
        scanf("%d",&nV3);

        printf("Informe o nome do 4° candidato:\n");
        printf(">> ");
        scanf("%s", nome4);
        printf("Informe o numero de votos para o 4° candidato:\n");
        printf(">> ");
        scanf("%d",&nV4);
        printf("\n");
        printf("\n");

        if(nV1 > nV2) {

                if(nV1 > nV3) {

                        if(nV1 > nV4) {
                                printf("candidato: %s Votos: %d ", nome1, nV1);
                        }else{
                                printf("candidato: %s Votos: %d ", nome4, nV4);
                        }

                }else{
                        if(nV3 > nV4) {
                                printf("candidato: %s Votos: %d ", nome3, nV3);
                        }else{
                                printf("candidato: %s Votos: %d ", nome4, nV4);
                        }
                }

        }else{

                if(nV2 > nV3) {

                        if(nV2 > nV4) {
                                printf("candidato: %s Votos: %d ", nome2, nV2);
                        }else{
                                printf("candidato: %s Votos: %d ", nome4, nV4);
                        }

                }else{

                        if(nV3 > nV4) {
                                printf("candidato: %s Votos: %d ", nome3, nV3);
                        }else{
                                printf("candidato: %s Votos: %d ", nome4, nV4);
                        }
                }
        }
}
}
