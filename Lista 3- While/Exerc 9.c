#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>


int main() {
    float renda;
    int opcao;

    while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("1. Calcular imposto de renda\n");
        printf("2. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:

                printf("\nDigite a renda mensal: ");
                scanf("%f", &renda);


                float imposto;
                if (renda <= 1637.11) {
                    imposto = 0;
                } else if (renda <= 2453.50) {
                    imposto = (renda - 1637.11) * 0.075;
                } else if (renda <= 3271.38) {
                    imposto = (2453.50 - 1637.12) * 0.075 + (renda - 2453.50) * 0.15;
                } else if (renda <= 4087.65) {
                    imposto = (2453.50 - 1637.12) * 0.075 + (3271.38 - 2453.51) * 0.15 + (renda - 3271.38) * 0.225;
                } else {
                    imposto = (2453.50 - 1637.12) * 0.075 + (3271.38 - 2453.51) * 0.15 + (4087.65 - 3271.39) * 0.225 + (renda - 4087.65) * 0.275;
                }


                printf("O imposto de renda a ser pago e: %.2f\n", imposto);
                break;
            case 2:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Tente Novamente.\n");
        }
    }

   system("pause");
}
