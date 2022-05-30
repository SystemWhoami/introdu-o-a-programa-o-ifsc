#include <stdio.h>
/*
   Fernando tem 1,50m e cresce 2cm por ano.
   Seu irmão Marcos tem 1,20m e cresce 4cm por ano.
   Faça um algoritmo para calcular em quantos anos Marcos será mais alto que Fernando.
 */
int main(){
        float fernando = 1.50;
        float marcos = 1.20;
        int anos;
        while(marcos<fernando) {
                anos++;
                marcos+=0.04;
                fernando+=0.02;
        }
        printf("Em %d anos, Marcos será mais alto que Fernando", anos);
}
