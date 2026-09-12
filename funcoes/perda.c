#include <stdio.h>
#include <stdlib.h>

#include "../includes/util.h"

void calcularPerdaPacotes() {

    limparTela();

    char destino[100];
    char comando[150];

    int enviados;
    int perdidos;
    float taxa;

    printf("\n");
    printf("----------------------------------------\n");
    printf("        PERDA DE PACOTES\n");
    printf("----------------------------------------\n\n");

    obterDestino(destino);

    sprintf(comando, "ping -n 10 %s", destino);

    printf("\nEnviando 10 pacotes para %s...\n\n", destino);

    system(comando);

    printf("\n");
    printf("Agora informe os dados apresentados pelo ping.\n\n");

    printf("Quantidade de pacotes enviados: ");
    scanf("%d", &enviados);

    printf("Quantidade de pacotes perdidos: ");
    scanf("%d", &perdidos);

    if (enviados > 0 && perdidos >= 0 && perdidos <= enviados) {

        taxa = ((float) perdidos / enviados) * 100;

        printf("\n========================================\n");
        printf("        RESULTADO DA PERDA\n");
        printf("========================================\n");

        printf("Pacotes enviados: %d\n", enviados);
        printf("Pacotes perdidos: %d\n", perdidos);
        printf("Taxa de perda: %.2f%%\n", taxa);

    } else {

        printf("\nValores invalidos.\n");
    }

    aguardarRetorno();
}