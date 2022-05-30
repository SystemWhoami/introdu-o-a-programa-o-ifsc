#include <stdio.h>

int main(){
  int val;
  printf("Informe um valor inteiro em Reais:\n");
  printf(">> ");
	scanf("%d", &val);

	int v100 = val / 100;
	val = val - v100 * 100;

	int v50 = val / 50;
	val = val - v50 * 50;

	int v20 = val / 20;
	val = val - v20 * 20;

	int v10 = val / 10;
	val = val - v10 * 10;

	int v5 = val / 5;
	val = val - v5 * 5;

	printf("O número de notas de 100 é: %d\n", (v100));
	printf("O número de notas de 50 é: %d\n", (v50));
	printf("O número de notas de 20 é: %d\n", (v20));
	printf("O número de notas de 10 é: %d\n", (v10));
	printf("O número de notas de 5 é: %d\n", (v5));

}
