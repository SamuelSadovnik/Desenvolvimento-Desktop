#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
    int nlados;
    printf("Digite o numero de lados: (3,4,5,6)\n");
    scanf("%d",&nlados);

    switch(nlados){
    case 3:
        printf("Esta figura eh um Triangulo\n");
        break;
    case 4:
        printf("Esta figura eh um Quadrado ou Retangulo\n");
        break;
    case 5:
        printf("Esta figura eh um Pentagono\n");
        break;
    case 6:
        printf("Esta figura eh um Hexagono\n");
        break;
    default:
        printf("Valor invalido\n");
        break;
}
system("pause");
}
