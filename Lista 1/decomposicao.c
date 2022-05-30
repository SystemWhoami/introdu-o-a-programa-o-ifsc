#include <stdio.h>
#include <math.h>

int main(){
        int t;
        printf("digite o tempo de decomposição da massa\n");
        printf(">> ");
        scanf("%d", &t);
        float q = 2048*pow(2, -0.5*t);
        printf("A massa da substância é de %.2fg", q);
}
