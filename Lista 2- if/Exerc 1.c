#include<stdio.h>
#include<stdlib.h>

int main() {
    float x, positiv, negativ;

    printf("Informe um numero:\n");
    scanf("%f",&x);

    positiv = x * 3;
    negativ = pow(x,2);

    if (x > 0) {
        printf("O numero eh positivo e seu triplo eh: %.1f\n",positiv);
    }else{
        printf("O numero eh negativo e ele ao quadrado eh: %.1f\n",negativ);
    }

    system("pause");

}
