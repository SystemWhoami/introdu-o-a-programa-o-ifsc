#include <stdio.h>
/*
   Faça um algoritmo que leia vários números não-negativos e que apresente ao final o maior de todos.
   O sistema termina de ler os números quando o usuário digitar qualquer número negativo.
 */
int main(){
  int valor, maior=0;
  printf("Digite vários números\n");
  while (valor>=0) {
    printf(">> ");
    scanf("%d", &valor);
    printf("\n");
    maior = valor>maior ? valor:maior;
  }
  printf("O maior valor digitado foi de %d\n", maior);
}
