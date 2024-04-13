#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int num;

    printf("Digite um numero. (digite um número negativo quando quiser parar): ");
    scanf("%d", &num);

    while(num >= 0) {
        printf("voce digitou: %d\n", num);

        printf("Digite outro numero. (digite um número negativo quando quiser parar): ");
        scanf("%d", &num);
    }

    printf("voce digitou um numero negativo. O programa vai ser encerrado.\n");

    system("pause");
}

