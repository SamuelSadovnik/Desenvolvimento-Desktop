#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>


void calcular_pascoa(int ano, int *dia_pascoa, int *mes_pascoa) {
    // Cálculo do Número Áureo (G)
    int G = ano % 19 + 1;

    // Cálculo do Século (C)
    int C = ano / 100 + 1;

    // Cálculo das Correções (X e Z)
    int X = (3 * C) / 4 - 12;
    int Z = (8 * C + 5) / 25 - 5;

    // Cálculo do Epacta (E)
    int E = (11 * G + 20 + Z - X) % 30;
    if ((E == 25 && G > 11) || E == 24) {
        E += 1;
    }

    // Cálculo da Lua Cheia
    int N = 44 - E;
    if (N < 21) {
        N += 30;
    }

    // Cálculo do Domingo (D)
    int D = (5 * ano) / 4 - (X + 10);
    N += 7 - ((D + N) % 7);

    // Cálculo do Mês e Dia da Páscoa
    if (N > 31) {
        *mes_pascoa = 4; // Abril
        *dia_pascoa = N - 31;
    } else {
        *mes_pascoa = 3; // Março
        *dia_pascoa = N;
    }
}

int main() {
    int ano;

    // Solicitar ao usuário o ano desejado
    printf("Digite o ano para calcular a data da Páscoa: ");
    scanf("%d", &ano);

    // Chamar a função para calcular a Páscoa
    int dia_pascoa, mes_pascoa;
    calcular_pascoa(ano, &dia_pascoa, &mes_pascoa);

    // Imprimir a data da Páscoa no formato especificado
    printf("A data da Páscoa em %d é: %d de %s\n", ano, dia_pascoa, (mes_pascoa == 3) ? "Março" : "Abril");

    return 0;
}
