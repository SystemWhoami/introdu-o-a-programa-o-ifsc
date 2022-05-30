#include <stdio.h>
/*
   A equação de Pell permite encontrar a parte inteira da raiz quadrada de um número simplesmente
   subtraindo inteiros ímpares e contando o número de subtrações efetuadas.
   Exemplo: Calcular a parte inteira da raiz quadrada de 15
   15 – 1 = 14
   14 – 3 = 11
   11 – 5 = 6
   Como 6 é menor que o próximo número ímpar (7), a sequência para
   aqui. Como foram realizadas 3 subtrações, então a resposta é 3.
   Faça um algoritmo para encontrar a parte inteira da raiz quadrada de
   um número usando a Equação de Pell.
 */
int main(){
  int valor, aux=1, sub, pell=0;
  printf("Digite um número:\n");
  printf(">> ");
  scanf("%d", &valor);
  while(aux<=sub){
    sub=valor-aux;
    valor=sub;
    aux+=2;
    pell++;
  }
  printf("A parte inteira da raiz é %d", pell);
}
