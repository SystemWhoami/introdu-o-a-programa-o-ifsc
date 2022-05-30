#include <stdio.h>
#include <ctype.h>

int main(){
        char letra;
        printf("Digite uma letra:\n");
        printf(">> ");
        scanf("%s", &letra);
        switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                printf("é vogal\n");
                break;
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'f':
        case 'F':
        case 'g':
        case 'G':
        case 'h':
        case 'H':
        case 'j':
        case 'J':
        case 'l':
        case 'L':
        case 'm':
        case 'M':
        case 'n':
        case 'N':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 's':
        case 'S':
        case 't':
        case 'T':
        case 'v':
        case 'V':
        case 'x':
        case 'X':
        case 'z':
        case 'Z':
                printf("é consoante\n");
                break;
        case 'k':
        case 'K':
        case 'w':
        case 'W':
        case 'y':
        case 'Y':
                printf("é K, W ou Y e pode variar de acordo com a palavra\n");
                break;
        default:
                printf("caractere inválido\n");
                break;
        }
}
