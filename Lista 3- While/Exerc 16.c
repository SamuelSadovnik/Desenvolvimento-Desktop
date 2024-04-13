#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int numero, divisor = 2, primo = 1;

    printf("Digite um numero inteiro para verificar se ele eh primo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Por favor, insira um numero inteiro maior que 1.\n");
        return 1;
    }

    while (divisor <= numero / 2 && primo) {
        if (numero % divisor == 0) {
            primo = 0;
        }
        divisor++;
    }

    if (primo) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    system("pause");
}
