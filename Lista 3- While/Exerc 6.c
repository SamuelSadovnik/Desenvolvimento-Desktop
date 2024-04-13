#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    float altura, soma_altura_mulheres = 0, soma_altura_homens = 0;
    int contador_mulheres = 0, contador_homens = 0, i = 0;
    char sexo;

    while (i < 10) {
        printf("Informe a altura da pessoa %d: ", i+1);
        scanf("%f", &altura);
        printf("Informe o sexo da pessoa %d (m ou f): ", i+1);
        scanf(" %c", &sexo);

        if (sexo == 'f') {
            soma_altura_mulheres += altura;
            contador_mulheres++;
        } else if (sexo == 'm') {
            soma_altura_homens += altura;
            contador_homens++;
        } else {
            printf("Por favor, informe 'm' para masculino ou 'f' para feminino.\n");
            continue;
        }

        i++;
    }

    if (contador_mulheres > 0) {
        float media_mulheres = soma_altura_mulheres / contador_mulheres;
        printf("A media de altura das mulheres eh: %.2f\n", media_mulheres);
    } else {
        printf("N foram inseridos dados de mulheres.\n");
    }

    if (contador_homens > 0) {
        float media_homens = soma_altura_homens / contador_homens;
        printf("A media de altura dos homens eh: %.2f\n", media_homens);
    } else {
        printf("N foram inseridos dados de homens.\n");
    }

    system("pause");
}
