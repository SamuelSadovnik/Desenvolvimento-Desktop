#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main(){

    char nome[20], sexo;
    int idade;

    printf("Insira o seu nome: ");
    scanf("%s", &nome);

    printf("Insira sua idade: ");
    scanf("%d%*c", &idade);
    printf("Insira o seu sexo: M - masculino F - feminino: ");
    scanf("%c", &sexo);
    if (tolower(sexo) == 'f' && idade <= 25)
        printf("%s: ACEITA", nome);
    else
        printf("%s: NAO ACEITA ", nome);

    printf("\n\n");
    system("pause");
    }

