#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>


int main() {
    int n;

    printf("Digite um valor para n (Positivo): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um valor inteiro positivo para n.\n");
        return 1; //
    }

    int linha = n;

    while (linha > 0) {
        int asteriscos = linha;

        while (asteriscos > 0) {
            printf("*");
            asteriscos--;
        }

        printf("\n");

        linha--;
    }

    system("pause");
}
