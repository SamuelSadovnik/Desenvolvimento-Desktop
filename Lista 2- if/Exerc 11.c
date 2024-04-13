#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main() {
    char nomeMunicipio[50];
    int eleitoap, votomaisvot;

    printf("Digite o nome do municipio: ");
    scanf("%s", nomeMunicipio);
    printf("Digite a quantidade de eleitores aptos: ");
    scanf("%d", &eleitoap);
    printf("Digite o número de votos do candidato mais votado: ");
    scanf("%d", &votomaisvot);

    if (eleitoap > 20000 && votomaisvot <= eleitoap * 0.5) {
        printf("O municipio de %s tera segundo turno nas eleicoes para prefeito.\n", nomeMunicipio);
    } else {
        printf("O municipio de %s nao tera segundo turno nas eleicoes para prefeito.\n", nomeMunicipio);
    }

    system("pause");
}

