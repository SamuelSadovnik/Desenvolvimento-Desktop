#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
    int sup, inf, i;

    printf("Informe o limite maximo do intervalo: \n");
    scanf("%i",&sup);
    printf("Informe o limite minimo do intervalo: \n");
    scanf("%i",&inf);

    for(i=inf;i<=sup;i++){
    printf("Todos os numeros naturais presentes no intervalo sao %i\n",i);
}
    system("pause");
}
