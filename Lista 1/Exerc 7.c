#include<stdio.h>
#include<stdlib.h>


int main() {
    float n1, n2, n3, media;

    printf("Informe as 3 notas: ");
    scanf("%f,%f,%f",&n1,&n2,&n3);

    media = (n1 + n2 + n3) / 3;

    printf("A media das notas eh: %.1f\n",media);

    system("pause");



}
