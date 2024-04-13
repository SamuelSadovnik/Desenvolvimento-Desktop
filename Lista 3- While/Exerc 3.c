#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int cont = 0;
    int soma = 0;
    int num;

    printf("Digite 10 numeros:\n");

    while (cont < 10) {
        printf("Numero %d: ", cont + 1);
        scanf("%d", &num);

        soma += num;
        cont++;
    }

    double media = (double)soma / 10;

    printf("A soma dos numeros eh: %d\n", soma);
    printf("A media dos numeros eh: %.1f\n", media);

    system("pause");
}
