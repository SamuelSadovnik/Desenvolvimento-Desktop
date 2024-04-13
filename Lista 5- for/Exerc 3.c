#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
    int i, x, sn = 0;
    printf("Informe 10 valores:\n");

    for(i=0; i<10; i++){
        printf("Valor:\n");
        scanf("%i",&x);


        if(x>sn){
            sn = x;
        }
    }
    printf("Maior numero digitado eh: %d\n",sn);
}
