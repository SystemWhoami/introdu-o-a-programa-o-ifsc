#include <stdio.h>

int main(){
        int n, triangulo, a, b, c;
        printf("Digite um número: \n");
        printf(">> ");
        scanf("%d", &n);
        for(int i=0; triangulo<n; i++) {
                triangulo= i*(i+1)*(i+2);
                a=i;
                b=i+1;
                c=i+2;
        }
        if(triangulo==n) {
                printf("%d = %dx%dx%d", n, a, b, c);
        }
        else{
                printf("Seu número não é triangular\n");
        }
}
