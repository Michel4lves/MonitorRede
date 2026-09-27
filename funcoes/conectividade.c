#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void testarConectividade() {

    limparTela();

    char destino[100];
    char comando[150];

    printf("\033[33m");

    printf("\n");
    printf("----------------------------------------\n");
    printf("        ANALISE DE CONECTIVIDADE\n");
    printf("            LATENCIA E PERDA\n");
    printf("----------------------------------------\n\n");

    printf("\033[0m");

    obterDestino(destino);

    #ifdef _WIN32
        sprintf(comando, "ping -n 10 %s", destino);
    #else
        sprintf(comando, "ping -c 10 %s", destino);
    #endif

    printf("\033[31m");

    printf("\nTestando conexao com %s...\n\n", destino);

    printf("\033[0m");

    system(comando);

    aguardarRetorno();
}