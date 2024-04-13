#include<stdio.h>
#include<stdlib.h>

int main () {
    float valor, imposto, distri;
    printf("Informe o valor do veiculo\n");
    scanf("%f",&valor);

    imposto = valor * 0.28;
    distri = valor * 0.45;
    float total = valor + imposto + distri;

    printf("O valor total do carro eh %.0f\n", total);

    system("pause");



}

