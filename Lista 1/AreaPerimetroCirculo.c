#include <stdio.h>
#include <math.h>

int main(){
        float raio;
        printf("Digite o tamanho do raio: \n");
        printf(">> ");
        scanf("%f", &raio);
        float area = M_PI*pow(raio,2);
        float perimetro = 2*M_PI*raio;
        printf("A área do círculo é %.2f e o seu perímetro é %.2f", area, perimetro);
}
