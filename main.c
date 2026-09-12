#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include "includes/rede.h"
#include "includes/conectividade.h"
#include "includes/latencia.h"
#include "includes/perda.h"
#include "includes/ip.h"
#include "includes/monitoramento.h"

#include "includes/util.h"


void calcularTaxaPerda();


int main() {

    int opcao;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD modo;
    GetConsoleMode(hConsole, &modo);
    modo |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hConsole, modo);

    do {

        system("cls");

        printf("\033[33m");

        printf("\n");
        printf("========================================\n");
        printf("       MONITOR DE REDE - PI II-A\n");
        printf("========================================\n");
        printf("\n");

        printf("\033[93m");

        printf("  1 - Informacoes de rede\n");
        printf("  2 - Testar conectividade\n");
        printf("  3 - Medir latencia\n");
        printf("  4 - Calcular perda de pacotes\n");
        printf("  5 - Identificar tipo de IP\n");

        printf("\033[34m");

        printf("  6 - Monitoramento completo\n");

        printf("\033[31m");

        printf("  0 - Sair\n");

        printf("\033[0m");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                mostrarInformacoesRede();
                break;

            case 2:
                testarConectividade();
                break;

            case 3:
                medirLatencia();
                break;

            case 4:
                calcularPerdaPacotes();
                break;

            case 5:
                identificarTipoIP();
                break;

            case 6:
                monitoramentoCompleto();
                break;

            case 0:
                printf("\nEncerrando o monitor de rede...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}


// FUNCAO: Calcular taxa de perda

void calcularTaxaPerda() {

    int enviados;
    int perdidos;
    float taxa;

    printf("\n");
    printf("----------------------------------------\n");
    printf("        CALCULO DE PERDA DE PACOTES\n");
    printf("----------------------------------------\n\n");

    printf("Quantidade de pacotes enviados: ");
    scanf("%d", &enviados);

    printf("Quantidade de pacotes perdidos: ");
    scanf("%d", &perdidos);

    if (enviados > 0 && perdidos >= 0 && perdidos <= enviados) {

        taxa = ((float) perdidos / enviados) * 100;

        printf("\nPacotes enviados: %d\n", enviados);
        printf("Pacotes perdidos: %d\n", perdidos);
        printf("Taxa de perda: %.2f%%\n", taxa);

    } else {

        printf("\nValores invalidos.\n");
    }
}