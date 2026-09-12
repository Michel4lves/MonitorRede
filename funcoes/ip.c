#include <stdio.h>
#include <string.h>

#include "../includes/util.h"
#include "../includes/ip.h"


void identificarTipoIP() {

    limparTela();

    char endereco[100];

    printf("\n");
    printf("----------------------------------------\n");
    printf("          TIPO DE ENDERECO IP\n");
    printf("----------------------------------------\n\n");

    obterDestino(endereco);

    mostrarTipoIP(endereco);

    aguardarRetorno();
}


void mostrarTipoIP(char endereco[]) {

    if (ehIPv4(endereco)) {

        printf("Tipo de endereco: IPv4\n");

    } else if (strchr(endereco, ':') != NULL) {

        printf("Tipo de endereco: IPv6\n");

    } else {

        printf("Tipo de endereco: Dominio ou formato nao identificado\n");
    }
}


int ehIPv4(char endereco[]) {

    int i;
    int possuiPonto = 0;

    for (i = 0; endereco[i] != '\0'; i++) {

        if (endereco[i] == '.') {

            possuiPonto = 1;

        } else if (endereco[i] < '0' || endereco[i] > '9') {

            return 0;
        }
    }

    if (possuiPonto == 1) {
        return 1;
    }

    return 0;
}