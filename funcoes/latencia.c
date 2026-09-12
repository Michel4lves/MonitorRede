#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void medirLatencia() {

    limparTela();

    char destino[100];
    char comando[150];

    printf("\n");
    printf("----------------------------------------\n");
    printf("            LATENCIA\n");
    printf("----------------------------------------\n\n");

    obterDestino(destino);

    sprintf(comando, "ping -n 4 %s", destino);

    printf("\nMedindo latencia para %s...\n\n", destino);

    system(comando);

    printf("\nA latencia minima, maxima e media sao apresentadas pelo comando acima.\n");

    aguardarRetorno();
}