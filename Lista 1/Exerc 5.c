#include<stdio.h>
#include<stdlib.h>

int main () {
    float num1, num2;

    printf("Informe o valor em reais:\n");
    scanf("%f", &num1);
    printf("Informe a cotacao atual do dolar:\n");
    scanf("%f", &num2);

    float realdolar = num1 * num2;

    printf("O valor em dolar e %.0f\n",realdolar);

    system("pause");

}
