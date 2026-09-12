#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void mostrarInformacoesRede() {

    limparTela();

    printf("\n");
    printf("----------------------------------------\n");
    printf("        INFORMACOES DE REDE\n");
    printf("----------------------------------------\n\n");

    system("ipconfig");

    aguardarRetorno();
}