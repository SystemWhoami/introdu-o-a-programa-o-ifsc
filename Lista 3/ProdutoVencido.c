#include <stdio.h>

int main(){
        int diaH, mesH, anoH, diaV, mesV, anoV;
        printf("Digite a data de válidade do produto:\n");
        printf("Dia: ");
        scanf("%d", &diaV);
        printf("Mês: ");
        scanf("%d", &mesV);
        printf("Ano: ");
        scanf("%d", &anoV);
        printf("\n\n");
        printf("Digite a data de hoje:\n");
        printf("Dia: ");
        scanf("%d", &diaH);
        printf("Mês: ");
        scanf("%d", &mesH);
        printf("Ano: ");
        scanf("%d", &anoH);
        if(anoH>anoV) {
                printf("O produto está vencido\n");
        }
        else{
                if (anoH<=anoV) {
                        if(mesH>=mesV) {
                          if (diaH>diaV) {
                                  printf("O produto está vencido\n");
                          }
                          else{
                                  printf("O produto não está vencido\n");
                          }
                        }
                        else{
                                if (mesH<=mesV) {
                                        if (diaH>diaV) {
                                                printf("O produto está vencido\n");
                                        }
                                        else{
                                                printf("O produto não está vencido\n");
                                        }
                                }
                        }
                }
        }
}
