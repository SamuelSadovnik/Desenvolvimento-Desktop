#include<stdio.h>
#include<stdlib.h>

int main () {
    float dist, gasto, media;
    printf("Informe a distancia percorrida\n");
    scanf("%f",&dist);
    printf("Informe o total gasto\n");
    scanf("%f",&gasto);

    media = dist / gasto;

    printf("A media de consumo = %f\n",media);


    system("pause");
}
