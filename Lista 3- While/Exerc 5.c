#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

#include <stdio.h>

int main() {
    int numero, multiplicador = 1;

    printf("Digite um numero para mostrar sua tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);

    while (multiplicador <= 10) {
        printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        multiplicador++;
    }

    system("pause");
}
