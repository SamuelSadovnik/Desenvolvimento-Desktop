#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    float x, y, result;
    char op;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    printf("Digite um valor para y: ");
    scanf("%f", &y);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = x + y;
            printf("Resultado: %.2f\n", result);
            break;
        case '-':
            result = x - y;
            printf("Resultado: %.2f\n", result);
            break;
        case '*':
            result = x * y;
            printf("Resultado: %.2f\n", result);
            break;
        case '/':
                result = x / y;
                printf("Resultado: %.2f\n", result);
            break;
        default:
            printf("Operacao invalida.\n");
    }

    system("pause");
}
