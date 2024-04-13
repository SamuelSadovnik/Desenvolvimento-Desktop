#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    float a, m, d, idade;

    printf("Digite quantos anos voce tem : ");
    scanf("%f",&a);
    printf("Digite quantos meses voce tem : ");
    scanf("%f",&m);
    printf("Digite quantos dias voce tem : ");
    scanf("%f",&d);

    idade = (a * 365 ) + (m * 30) + d;

    printf("Sua idade em dias e: %.0f\n",idade);


    system ("PAUSE");
}
