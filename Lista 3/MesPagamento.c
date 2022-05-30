#include <stdio.h>

int main(){
        int matricula;
        printf("Digite final do seu número de matrícula:\n");
        printf(">> ");
        scanf("%d", &matricula);
        if(matricula==0 || matricula==1 || matricula==2) {
                printf("Pagamento até 10/fevereiro");
        }
        else{
                if(matricula==3 || matricula==4 || matricula==5) {
                        printf("Pagamento até 10/abril\n");
                }
                else{
                        if(matricula==6 || matricula==7) {
                                printf("Pagamento até 10/junho\n");
                        }
                        else{
                                printf("Pagamento até 10/agosto\n");
                        }
                }
        }
}
