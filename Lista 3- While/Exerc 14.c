#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int numero, divisor = 1, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Voce digitou um numero negativo(digite novamente um positivo):\n");
        return 1;
    }

    printf("Os divisores de %d (exceçao dele proprio) sao:\n", numero);
    while (divisor < numero) {
        if (numero % divisor == 0) {
            printf("%d ", divisor);
            soma += divisor;
        }
        divisor++;
    }

    printf("\nA soma dos divisores de %d (exceçao dele proprio) e: %d\n", numero, soma);

    return 0;
}
