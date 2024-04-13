#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
    int idade;
    float vpago = 100.0;

    printf("Informe qual a idade:\n");
    scanf("%d",&idade);

 switch (idade) {
        case 0 ... 9:
            vpago += 80.0;
            break;
        case 10 ... 30:
            vpago += 50.0;
            break;
        case 31 ... 39:
            printf("Para esta faixa etaria ficara o valor padrao de 100$\n");
            break;
        case 40 ... 60:
            vpago += 95.0;
            break;
        default:
            if (idade > 60) {
                vpago += 130.0;
            } else {
                printf("Idade inválida.\n");
            }
    }

    printf("Valor a ser pago: R$%.2f\n", vpago);
    system("pause");
}
