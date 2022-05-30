#include <stdio.h>
/*
   Faça um algoritmo que leia vários números e apresente ao final o maior e o menor de todos.
   O sistema termina de ler os números quando o usuário digitar 0.
 */
int main(){
        int valor, maior=0, menor;
        printf("Digite vários números\n");
        do {
          printf(">> ");
          scanf("%d", &valor);
          printf("\n");
          maior = valor>maior ? valor:maior;
          menor = valor<menor ? valor:menor;
        } while(valor!=0);
        printf("O maior valor digitado foi de %d\n", maior);
        printf("O menor valor digitado foi de %d\n", menor);
}
