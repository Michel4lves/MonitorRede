#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void mostrarInformacoesRede() {

    limparTela();

    printf("\033[33m");

    printf("\n");
    printf("----------------------------------------\n");
    printf("        INFORMACOES DE REDE\n");
    printf("----------------------------------------\n\n");

    printf("\033[0m");

#ifdef _WIN32

    system("ipconfig");

#else

    system("ip addr");

#endif

    aguardarRetorno();
}