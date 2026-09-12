#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void testarConectividade() {

    limparTela();

    char destino[100];
    char comando[150];

    printf("\n");
    printf("----------------------------------------\n");
    printf("        TESTE DE CONECTIVIDADE\n");
    printf("----------------------------------------\n\n");

    obterDestino(destino);

    sprintf(comando, "ping -n 4 %s", destino);

    printf("\nTestando conexao com %s...\n\n", destino);

    system(comando);

    aguardarRetorno();
}