#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>


int main() {
    int respostasPositivas = 0;
    char resposta;

    printf("Responda as seguintes perguntas com 's' para Sim e 'n' para nao.\n");
    printf("Telefonou para a vitima?: ");
    scanf(" %c", &resposta);
    if (resposta == 's') {
        respostasPositivas++;
    }

    printf("Esteve no local do crime?: ");
    scanf(" %c", &resposta);
    if (resposta == 's') {
        respostasPositivas++;
    }

    printf("Mora perto da vitima?: ");
    scanf(" %c", &resposta);
    if (resposta == 's') {
        respostasPositivas++;
    }

    printf("Devia para a vitima?: ");
    scanf(" %c", &resposta);
    if (resposta == 's') {
        respostasPositivas++;
    }

    printf("Ja trabalhou com a vitima?: ");
    scanf(" %c", &resposta);
    if (resposta == 's') {
        respostasPositivas++;
    }

    if (respostasPositivas == 2) {
        printf("vc eh suspeito.\n");
    } else if (respostasPositivas >= 3 && respostasPositivas <= 4) {
        printf("vc eh cúmplice.\n");
    } else if (respostasPositivas == 5) {
        printf("vc eh o assassino.\n");
    } else {
        printf("vc eh inocente.\n");
    }

    system("pause");
}
