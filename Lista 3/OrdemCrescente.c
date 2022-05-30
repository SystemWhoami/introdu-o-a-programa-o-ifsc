#include <stdio.h>

int main(){
        int a, b, c, maior, medio, menor;
        printf("Digite 3 números:\n");
        printf(">> ");
        scanf("%d", &a);
        printf(">> ");
        scanf("%d", &b);
        printf(">> ");
        scanf("%d", &c);
        if(a>c && a>b) {
                maior=a;
                if(b>c) {
                        medio=b;
                        menor=c;
                }
                else{
                        medio=c;
                        menor=b;
                }

        }
        else{
                if(b>a && b>c) {
                        maior=b;
                        if(a>c) {
                                medio=a;
                                menor=c;
                        }
                        else{
                                medio=c;
                                menor=a;
                        }

                }
                else{
                        maior=c;
                        if(a>b) {
                                medio=a;
                                menor=b;
                        }
                        else{
                                medio=c;
                                menor=b;
                        }
                }
        }
        printf("a ordem crescente dos números é: %d, %d e %d\n", menor, medio, maior);
}
