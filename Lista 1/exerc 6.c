#include<stdio.h>
#include<stdlib.h>


int main () {
    float peso, altura, imc;

    printf("Insira seu peso\n");
    scanf("%f", &peso);

    printf("Insira sua altura\n");
    scanf("%f", &altura);

    float potencia = pow(altura, 2);
    imc = peso / potencia;

    printf("Este eh o seu IMC %.1f\n",imc);

    system("pause");


}


