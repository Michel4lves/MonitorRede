#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void rastrearRota() {

    limparTela();

    char destino[100];
    char comando[150];

    printf("\033[33m");

    printf("\n");
    printf("----------------------------------------\n");
    printf("          RASTREAMENTO DE ROTA\n");
    printf("----------------------------------------\n\n");

    printf("\033[0m");

    obterDestino(destino);

#ifdef _WIN32

    sprintf(comando, "tracert %s", destino);

#else

    sprintf(comando, "traceroute %s", destino);

#endif

    printf("\033[31m");

    printf("\nRastreando rota para %s...\n\n", destino);

    printf("\033[0m");

    system(comando);

    aguardarRetorno();
}