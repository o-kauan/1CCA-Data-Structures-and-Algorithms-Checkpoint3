# include <stdio.h>

void exibir_menu(){
    printf("\n=========================\n");
    printf("SISTEMA CAIXA ELETRONICO");
    printf("\n=========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("=========================\n");
}

int main (){
    int opcao;
    float saldo = 1000.0;

    do {
        exibir_menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        while (getchar() != '\n');
        if (opcao < 0 || opcao > 3) {
            printf("Opcao Invalida!\n");
        }

    
    } while (opcao != 0);

    return 0;
}