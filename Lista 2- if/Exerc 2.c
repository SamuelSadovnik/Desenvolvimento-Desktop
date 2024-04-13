#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int id;
    printf("Digite sua idade\n");
    scanf("%i",&id);

    if(id >= 18 && id <= 65){
        printf("Seu voto eh obrigatorio\n");
    }else{
        printf("Seu voto eh opcional/nao obrigatorio\n");
    }
    system("pause");
}
