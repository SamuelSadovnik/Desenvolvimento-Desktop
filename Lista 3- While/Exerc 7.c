#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int numero = 1;
    int soma = 0;

    while (numero <= 500) {
        if (numero % 2 != 0 && numero % 3 == 0) {
            soma += numero;
        }

        numero++;
    }

    printf("A soma dos numeros impares e multiplos de 3 de 1 a 500 eh: %d\n", soma);

    return 0;
}
