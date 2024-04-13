#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>


void calcular_pascoa(int ano, int *dia_pascoa, int *mes_pascoa) {
    // C�lculo do N�mero �ureo (G)
    int G = ano % 19 + 1;

    // C�lculo do S�culo (C)
    int C = ano / 100 + 1;

    // C�lculo das Corre��es (X e Z)
    int X = (3 * C) / 4 - 12;
    int Z = (8 * C + 5) / 25 - 5;

    // C�lculo do Epacta (E)
    int E = (11 * G + 20 + Z - X) % 30;
    if ((E == 25 && G > 11) || E == 24) {
        E += 1;
    }

    // C�lculo da Lua Cheia
    int N = 44 - E;
    if (N < 21) {
        N += 30;
    }

    // C�lculo do Domingo (D)
    int D = (5 * ano) / 4 - (X + 10);
    N += 7 - ((D + N) % 7);

    // C�lculo do M�s e Dia da P�scoa
    if (N > 31) {
        *mes_pascoa = 4; // Abril
        *dia_pascoa = N - 31;
    } else {
        *mes_pascoa = 3; // Mar�o
        *dia_pascoa = N;
    }
}

int main() {
    int ano;

    // Solicitar ao usu�rio o ano desejado
    printf("Digite o ano para calcular a data da P�scoa: ");
    scanf("%d", &ano);

    // Chamar a fun��o para calcular a P�scoa
    int dia_pascoa, mes_pascoa;
    calcular_pascoa(ano, &dia_pascoa, &mes_pascoa);

    // Imprimir a data da P�scoa no formato especificado
    printf("A data da P�scoa em %d �: %d de %s\n", ano, dia_pascoa, (mes_pascoa == 3) ? "Mar�o" : "Abril");

    return 0;
}
