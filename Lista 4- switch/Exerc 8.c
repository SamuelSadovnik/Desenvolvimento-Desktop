int main(){
    int cod;
    char resp, op;
    float saldo=0, valor;
    printf("Qual o numero da conta que deseja movimentar\n");
    scanf("%i",&cod);
    do{
        printf("Escolha operacao desejada:\n");
        printf("D - deposito\n");
        printf("S - saque\n");
        printf("C - consulta saldo\n");
        scanf("%s",&op);
        switch(op){
            case 'D':
            case 'd':
                printf("Qual valor sera depositado\n");
                scanf("%f",&valor);
                saldo = saldo + valor;
                break;
            case 'S':
            case 's':
                printf("Qual valor sera retirado\n");
                scanf("%f",&valor);
                if(valor > saldo){
                    printf("Saldo insuficiente\n");
                }else{
                    saldo = saldo - valor;
                }
                break;
            case 'C':
            case 'c':
                printf("Saldo em conta: %.2f\n", saldo);
                break;
            default:
                printf("Opcao Invalida\n");
                break;
        }
        printf("Deseja efetuar nova operacao? S / N\n");
        scanf("%s",&resp);
        system("cls");
    }while(resp == 's' || resp == 'S');
}
