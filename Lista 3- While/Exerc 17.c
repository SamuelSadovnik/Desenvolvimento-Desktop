#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
int num_habitantes, codigo, consumo, total_residencial = 0, total_comercial = 0, total_industrial = 0;
float kwh, consumo_medio = 0.0, maior_consumo = 0.0, menor_consumo = 999999.0;

printf("Digite o numero de habitantes da cidade: ");
scanf("%d", &num_habitantes);
printf("Digite o valor do kWh: ");
scanf("%f", &kwh);

int i = 1;
while (i <= num_habitantes) {
        printf("Habitante %d:\n", i);
        printf("Digite o consumo do mes (em kWh): ");
        scanf("%d", &consumo);
        printf("Digite o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1:
                total_residencial += consumo;
                break;
            case 2:
                total_comercial += consumo;
                break;
            case 3:
                total_industrial += consumo;
                break;
            default:
                printf("Codigo de consumidor invalido.\n");
        }

        if (consumo > maior_consumo) {
            maior_consumo = consumo;
        }
        if (consumo < menor_consumo) {
            menor_consumo = consumo;
        }

        consumo_medio += consumo;
        i++;
    }

    consumo_medio /= num_habitantes;

    printf("\nMaior consumo: %.2f kWh\n", maior_consumo);
    printf("Menor consumo: %.2f kWh\n", menor_consumo);
    printf("Consumo medio: %.2f kWh\n", consumo_medio);
    printf("\nTotal de consumo por categoria de consumidor:\n");
    printf("Residencial: %d kWh\n", total_residencial);
    printf("Comercial: %d kWh\n", total_comercial);
    printf("Industrial: %d kWh\n", total_industrial);

    system("pause");
}
