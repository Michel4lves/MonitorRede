#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void testarConectividade() {

    limparTela();

    char destino[100];
    char comando[150];

    printf("\n");
    printf("----------------------------------------\n");
    printf("        ANALISE DE CONECTIVIDADE\n");
    printf("            LATENCIA E PERDA\n");
    printf("----------------------------------------\n\n");

    obterDestino(destino);

    #ifdef _WIN32
        sprintf(comando, "ping -n 10 %s", destino);
    #else
        sprintf(comando, "ping -c 10 %s", destino);
    #endif

    printf("\nTestando conexao com %s...\n\n", destino);

    system(comando);

    aguardarRetorno();
}