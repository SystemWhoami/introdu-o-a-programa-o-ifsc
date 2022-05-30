#include <stdio.h>
#include <math.h>

int main(){
        float base, altura;
        printf("Digite o tamanho da base: \n");
        printf(">> ");
        scanf("%f", &base);
        printf("Digite o tamanho da altura: \n");
        printf(">> ");
        scanf("%f", &altura);
        float area = base*altura;
        float perimetro = 2*(base+altura);
        printf("A área do quadrado é %.2f e o seu perímetro é %.2f", area, perimetro);
}
