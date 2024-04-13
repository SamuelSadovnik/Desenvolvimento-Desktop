#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>


int main() {
    int x = 1;

    printf("Numeros pares de 1 a 50:\n");
    while (x <= 50) {
        if (x % 2 == 0) {
            printf("%d \n", x);
        }
        x++;
    }

    system("pause");
}




