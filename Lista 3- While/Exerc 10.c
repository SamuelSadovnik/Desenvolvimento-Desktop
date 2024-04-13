#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int n, m;

    printf("Digite a altura (n) e a largura (m) do retângulo: ");
    scanf("%d %d", &n, &m);

    int i = 0, j = 0;

    while (i < n) {
        j = 0;
        while (j < m) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    system("pause");
}







