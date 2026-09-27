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

#ifdef _WIN32

    sprintf(comando, "tracert %s", destino);

#else

    sprintf(comando, "traceroute %s", destino);

#endif

    printf("\nRastreando rota para %s...\n\n", destino);

    system(comando);

    aguardarRetorno();
}