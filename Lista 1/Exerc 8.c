#include<stdio.h>
#include<stdlib.h>

int main() {
    float n1, n2, n3, media;
    printf("Informe as 3 notas:\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    media = (n1*2 + n2*3 + n3*5)/10;

    printf("A media ponderada eh %f\n",media);



    system("pause");



}
