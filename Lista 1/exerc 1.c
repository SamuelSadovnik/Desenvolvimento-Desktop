//bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main () {
    float num1, num2, soma, sub, mult, divi, potencia, raiz;
    printf("Informe primeiro valor:\n");
    scanf("%f",&num1);
    printf("Informe segundo valor:\n");
    scanf("%f",&num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    divi = num1 / num2;
    potencia = pow(num1,2);
    raiz = sqrt(num2);

    printf("A soma de %.1f + %.1f = %.1f\n",num1, num2, soma);
    printf("A subtracao de %.1f - %.1f = %.1f\n",num1, num2, sub);
    printf("A multiplicao de %.1f * %.1f = %.1f\n",num1, num2, mult);
    printf("A divisao de %.1f / %.1f = %.1f\n",num1, num2, divi);
    printf("O %.1f elevado ao quadrado = %.1f\n",num1, potencia);
    printf("A raiz de %.1f = %.1f\n",num2, raiz);
    system("pause");
}
