#include <stdio.h>
#include <stdlib.h>

void obterDestino(char destino[]) {

    printf("Digite o endereco IP ou dominio: ");
    scanf("%99s", destino);
}


void limparTela() {

    system("cls");
}


void aguardarRetorno() {

    char opcao;

    printf("\n");
    printf("----------------------------------------\n");
    printf("Digite 'r' para retornar ao menu: ");

    do {

        scanf(" %c", &opcao);

    } while (opcao != 'r' && opcao != 'R');
}