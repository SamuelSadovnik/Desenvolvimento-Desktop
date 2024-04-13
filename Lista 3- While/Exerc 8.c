#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;


    printf("Digite os numeros (digite 0 para parar):\n");
    scanf("%d", &numero);
    while (numero != 0) {
        if (numero > 0) {
            positivos += numero;
        } else {
            negativos++;
        }
        scanf("%d", &numero);
    }

    printf("A soma dos numeros positivos eh: %d\n", positivos);
    printf("A quantidade de numeros negativos eh: %d\n", negativos);

    return 0;
}
