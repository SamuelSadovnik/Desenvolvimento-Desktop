#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    int limite, i;

    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &limite);

    printf("Numeros impares menores que %d:\n", limite);
    for (i = 1; i < limite; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    system("pause");
}
