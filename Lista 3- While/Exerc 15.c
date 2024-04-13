#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>


int main() {
    int saque, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    notas100 = notas50 = notas20 = notas10 = notas5 = notas2 = notas1 = 0;

    while (saque > 0) {
        if (saque >= 100) {
            notas100++;
            saque -= 100;
        } else if (saque >= 50) {
            notas50++;
            saque -= 50;
        } else if (saque >= 20) {
            notas20++;
            saque -= 20;
        } else if (saque >= 10) {
            notas10++;
            saque -= 10;
        } else if (saque >= 5) {
            notas5++;
            saque -= 5;
        } else if (saque >= 2) {
            notas2++;
            saque -= 2;
        } else {
            notas1++;
            saque -= 1;
        }
    }


    printf("Quantidade de notas de cada valor:\n");
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    system("pause");
}
