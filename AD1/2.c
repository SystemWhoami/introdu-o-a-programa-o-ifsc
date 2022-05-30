#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        srand(time(NULL));
        int cpu= rand()%3+1;
        int player;
        printf("============================ Pedra-Papel-Tesoura ============================\n");
        printf("1 | Pedra\n");
        printf("2 | Papel\n");
        printf("1 | Tesoura\n");
        printf(">> ");
        scanf("%d", &player);
        switch (player) {
        case 1:
                switch (cpu) {
                case 1:
                        printf("Computador jogou: Pedra\n");
                        printf("Você jogou: Pedra\n");
                        printf("Empate\n");
                        break;
                case 2:
                        printf("Computador jogou: Papel\n");
                        printf("Você jogou: Pedra\n");
                        printf("Computador Ganhou: Papel embrulha Pedra\n");
                        break;

                case 3:
                        printf("Computador jogou: Tesoura\n");
                        printf("Você jogou: Pedra\n");
                        printf("Você Ganhou: Pedra quebra Tesoura\n");
                        break;
                }

                break;
        case 2:
                switch (cpu) {

                case 1:
                        printf("Computador jogou: Pedra\n");
                        printf("Você jogou: Papel\n");
                        printf("Você Ganhou: Papel embrulha Pedra\n");
                        break;
                case 2:
                        printf("Computador jogou: Papel\n");
                        printf("Você jogou: Papel\n");
                        printf("Empate\n");
                        break;

                case 3:
                        printf("Computador jogou: Tesoura\n");
                        printf("Você jogou: Papel\n");
                        printf("Computador Ganhou: Tesoura corta Papel\n");
                        break;
                }
                break;
        case 3:
                switch (cpu) {
                case 1:
                        printf("Computador jogou: Pedra\n");
                        printf("Você jogou: Tesoura\n");
                        printf("Computador Ganhou: Pedra quebra Tesoura\n");
                        break;

                case 2:
                        printf("Computador jogou: Papel\n");
                        printf("Você jogou: Tesoura\n");
                        printf("Você Ganhou: Tesoura corta Papel\n");
                        break;
                case 3:
                        printf("Computador jogou: Tesoura\n");
                        printf("Você jogou: Tesoura\n");
                        printf("Empate\n");
                        break;
                }
                break;
        }

}
