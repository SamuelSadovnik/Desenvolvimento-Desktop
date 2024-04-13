#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int n, i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero inteiro positivo para N.\n");
        return 1;
    }

    i = 1;

    printf("Os primeiros %d numeros naturais impares sao:\n", n);
    while (n > 0) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            n--;
        }
        i++;
    }

    system("pause");
}
