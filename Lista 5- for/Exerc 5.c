#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int quantidade, numero, maior, menor, i;

    printf("Digite a quantidade de numeros a serem digitados: ");
    scanf("%d", &quantidade);


    printf("Digite o 1o numero: ");
    scanf("%d", &numero);
    maior = menor = numero;

    for (i = 2; i <= quantidade; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);


        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior numero digitado: %d\n", maior);
    printf("O menor numero digitado: %d\n", menor);

    system("pause");
}



