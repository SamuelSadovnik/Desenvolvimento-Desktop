#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    char escolha;
    float raio, base, altura, lado;

    printf("Escolha uma opção:\n");
    printf("C - area de um circulo\n");
    printf("R - area de um retangulo\n");
    printf("Q - area de um quadrado\n");
    scanf(" %c", &escolha);
    switch(escolha) {
        case 'C':
            printf("Digite o raio do círculo: ");
            scanf("%f", &raio);
            printf("Area do círculo: %.2f\n", 3.14 * (raio * raio));
            break;

        case 'R':
            printf("Digite a base do retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retângulo: ");
            scanf("%f", &altura);
            printf("Area do retângulo: %.2f\n", base * altura);
            break;

        case 'Q':
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            printf("Area do quadrado: %.2f\n", lado * lado);
            break;

        default:
            printf("Opção inválida.\n");
    }

    system("pause");
}
