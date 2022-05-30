#include <stdio.h>
#include <string.h>
/*
   Em uma eleição para presidente existem 3 candidatos.
   Os votos são informados através dos códigos 1, 2, 3 para os respectivos candidatos;
   4 para voto nulo; e 5 voto em branco.
   Escreva um algoritmo que calcule:
   a) Total de votos para cada candidato;
   b) Total de votos nulos;
   c) Total de votos em branco;
   d) Candidato Vencedor ou se houve empate;
   e) Percentual de votos brancos e nulos sobre o total.
   Como critério de parada, tem-se o código de votação 0
 */
void calcularVotos(int tam, int *votos){
        char vencedor[20];
        float a=0, b=0, c=0, branco=0, nulo=0;
        for(int i=0; i<tam; i++) {
                switch (votos[i]) {
                case 1:
                        a++;
                        break;
                case 2:
                        b++;
                        break;
                case 3:
                        c++;
                        break;
                case 4:
                        nulo++;
                        break;
                case 5:
                        branco++;
                        break;
                }
        }
        if(a>b && a>c){
          strcpy(vencedor, "Candidato A");
        }
        else{
          if(b>a && b>c){
            strcpy(vencedor, "Candidato B");
          }
          else{
            if(c>a && c>b){
              strcpy(vencedor, "Candidato C");
            }
            else{
              strcpy(vencedor, "Empate");
            }
          }
        }
        float soma = a+b+c+nulo+branco;
        float percentualNulo = (100*nulo)/soma;
        float percentualBranco = (100*branco)/soma;
        printf("Contagem de Votos\n");
        printf("Candidato A: %.0f\n", a);
        printf("Candidato B: %.0f\n", b);
        printf("Candidato C: %.0f\n", c);
        printf("Nulo: %.0f\n", nulo);
        printf("Branco: %.0f\n", branco);
        printf("Percentual de votos nulos: %.0f%\n", percentualNulo);
        printf("Percentual de votos Branco: %.0f%\n", percentualBranco);
        printf("Vencedor: %s\n", vencedor);
}
void contagemVotos(int tam, int *votos){
        int aux=1;
        printf("URNA ELEITORAL\n");
        printf("1 | Candidato A;\n");
        printf("2 | Candidato B;\n");
        printf("3 | Candidato C;\n");
        printf("4 | Nulo;\n");
        printf("5 | Branco;\n");
        printf("0 | Sair;\n");
        for(int i=0; i<aux; i++) {
                printf(">> ");
                scanf("%d", &votos[i]);
                while (votos[i]<0 || votos[i]>5) {
                        printf("Voto não identificado!\n");
                        printf("Tente Novamente\n");
                        printf(">> ");
                        scanf("%d", &votos[i]);
                }
                aux = votos[i]!=0 ? aux+1:0;
                tam++;
        }
        calcularVotos(tam, votos);
}

int main(){
        int tam;
        int votos[tam];
        contagemVotos(tam, votos);
}
