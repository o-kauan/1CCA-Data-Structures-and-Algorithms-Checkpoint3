#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.0;
    float valor;

    do {
        printf("\n=========================\n");
        printf("SISTEMA CAIXA ELETRONICO");
        printf("\n=========================\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Realizar Saque\n");
        printf("3 - Realizar Deposito\n");
        printf("0 - Sair\n");
        printf("=========================\n");
        
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        while (getchar() != '\n');

        if (opcao < 0 || opcao > 3) {
            printf("Opcao Invalida!\n");
            continue;
        }

        switch(opcao) {
            case 1:
                printf("=======================\n");
                printf("    CONSULTAR SALDO\n");
                printf("Saldo atual: %.2f\n", saldo);
                break;
                
            case 2:
                printf("=======================\n");
                printf("     REALIZAR SAQUE    \n");
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
             
                if (valor > saldo) {
                    printf("Saldo insuficiente!\n");
                } else if (valor <= 0) {
                    printf("Valor invalido!\n");
                } else {
                    saldo -= valor;
                    printf("Processando saque...\n");
                    printf("Saque realizado com sucesso!\n");
                    printf("Saldo atual: %.2f\n", saldo);
                }
                break;
                
            case 3:
                printf("=======================\n");
                printf("   REALIZAR DEPOSITO   \n");
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);
             
                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado com sucesso!\n");
                    printf("Saldo atual: %.2f\n", saldo);
                } else {
                    printf("Valor invalido!\n");
                }
                break;
                
            case 0:
                printf("=======================\nSAINDO\n=======================\n");
                printf("Volte sempre!\n");
                break;
        }
        
    } while (opcao != 0);

    return 0;
}
