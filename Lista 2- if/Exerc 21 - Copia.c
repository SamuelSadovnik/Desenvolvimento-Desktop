#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int A, B, C;
    float delta, x1, x2;

    printf("Digite os valores de A, B e C para a equacao de segundo grau Ax^2 + Bx + C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {

        delta = B*B - 4*A*C;

        if (delta < 0) {
            printf("Nao ha raizes reais.\n");
        } else {

            printf("O valor de Delta e: %.2f\n", delta);


            if (delta == 0) {
                x1 = -B / (2.0 * A);
                printf("Ha uma raiz real: x = %.2f\n", x1);
            } else {

                x1 = (-B + sqrt(delta)) / (2.0 * A);
                x2 = (-B - sqrt(delta)) / (2.0 * A);
                printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
            }
        }
    }
    system("pause");
}
