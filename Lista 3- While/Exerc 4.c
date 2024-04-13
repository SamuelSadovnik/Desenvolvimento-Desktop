#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int cont = 0;
    int numero;
    int maior = 0;

    printf("Digite 10 Numeros:\n");

    while (cont < 10) {
        printf("Numero %d: ", cont + 1);
        scanf("%d", &numero);

        if (cont == 0 || numero > maior) {
            maior = numero;
        }

        cont++;
    }

    printf("O maior numero eh: %d\n", maior);

    system("pause");
}
