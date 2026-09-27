#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"
#include "../includes/ip.h"


void monitoramentoCompleto() {

    limparTela();

    char destino[100];
    char comando[150];

    printf("\n");
    printf("========================================\n");
    printf("        MONITORAMENTO COMPLETO\n");
    printf("========================================\n");

    // -------------------------------------
    // 1 - Informacoes da rede
    // -------------------------------------

    printf("\n");
    printf("----------------------------------------\n");
    printf("        INFORMACOES DA REDE\n");
    printf("----------------------------------------\n\n");

    system("ipconfig /all");


    // 2 - Solicitar destino

    printf("\n");
    printf("----------------------------------------\n");
    printf("          DESTINO DO TESTE\n");
    printf("----------------------------------------\n\n");

    obterDestino(destino);


    // 3 - Identificar tipo de IP

    printf("\n");
    printf("----------------------------------------\n");
    printf("          TIPO DE ENDERECO\n");
    printf("----------------------------------------\n\n");

    mostrarTipoIP(destino);


    // 4 - Testar conectividade

    printf("\n");
    printf("----------------------------------------\n");
    printf("        TESTE DE CONECTIVIDADE\n");
    printf("            LATENCIA E PERDA\n");
    printf("----------------------------------------\n\n");

    sprintf(comando, "ping -n 10 %s", destino);

    system(comando);


    // Final

    printf("\n");
    printf("========================================\n");
    printf("      MONITORAMENTO FINALIZADO\n");
    printf("========================================\n");

    aguardarRetorno();
}