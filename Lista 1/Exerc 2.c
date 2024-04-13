#include<stdio.h>
#include<stdlib.h>

int main () {
    float num1, an, su;
    printf ("Informe o valor\n");
    scanf("%f",&num1);

    an = num1 - 1;
    su = num1 + 1;

    printf("O Antecessor de %.1f = %.1f\n",num1,an);
    printf("O Sucessor de %.1f = %.1f\n",num1,su);

    system("pause");

}

