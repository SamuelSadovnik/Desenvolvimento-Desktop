#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
    int x, P1, P2, soma, mult;

        for(x=1000;x<=9999;x++){
                P2 = x%100;
                P1 = x/100;
                    soma =  P1 + P2;
                    mult = soma * soma;


                if(mult == x){
                printf("%i + %i = %i -> %i * %i = %i \n\n", P1, P2, soma, soma, soma, mult);
            }
    }
    system("pause");
}
