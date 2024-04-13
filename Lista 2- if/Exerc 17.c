#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {

    int ht;
    float salhora, saltot;
    int hn = 40 * 4;
    int he;
    float salhe;


    printf("Digite o numero total de horas trabalhadas no mes:\n ");
    scanf("%d", &ht);
    printf("Digite o valor do salario por hora:\n ");
    scanf("%f", &salhora);
    if (ht > hn) {
        he = ht - hn;
        salhe = he * salhora * 1.5;
        saltot = (hn * salhora) + salhe;
    } else {

        saltot = ht * salhora;
    }


    printf("O salario total eh: R$ %.2f\n", saltot);

    system("pause");
}
