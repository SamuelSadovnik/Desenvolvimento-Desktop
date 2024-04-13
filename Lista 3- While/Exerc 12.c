#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {

    int numero = 1;
    int count = 0;

    printf("Os cinco primeiros multiplos de 3 sao:\n");
    while (count < 5) {
        if (numero % 3 == 0) {
            printf("%d\n", numero);
            count++;
        }
        numero++;
    }

    system("pause");
}
