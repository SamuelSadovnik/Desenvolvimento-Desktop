#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    float salario, novsala, aumento;
    int pa;

    printf("Digite o salario do colaborador: ");
    scanf("%f", &salario);

    if (salario <= 280.00) {
        pa = 20;
    } else if (salario <= 700.00) {
        pa = 15;
    } else if (salario <= 1500.00) {
        pa = 10;
    } else {
        pa = 5;
    }

    aumento = salario * pa / 100;
    novsala = salario + aumento;

    printf("Salario antes do reajuste: R$ %.1f\n", salario);
    printf("Percentual de aumento aplicado: %d%%\n", pa);
    printf("Valor do aumento: R$ %.1f\n", aumento);
    printf("Novo salario: R$ %.1f\n", novsala);

    system("pause");
}
