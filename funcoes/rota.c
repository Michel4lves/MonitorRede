#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void rastrearRota() {

    limparTela();

    char destino[100];
    char comando[150];

    printf("\n");
    printf("----------------------------------------\n");
    printf("          RASTREAMENTO DE ROTA\n");
    printf("----------------------------------------\n\n");

    obterDestino(destino);

    sprintf(comando, "tracert %s", destino);

    printf("\nRastreando rota para %s...\n\n", destino);

    system(comando);

    aguardarRetorno();
}