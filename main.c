#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include "includes/rede.h"
#include "includes/conectividade.h"
#include "includes/ip.h"
#include "includes/monitoramento.h"
#include "includes/rota.h"

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
        printf("De: Lucas Cousen, Michel Alves & Rogerio Cantarelli\n");
        printf("\n");

        printf("\033[93m");

        printf("  1 - Informacoes de rede\n");
        printf("  2 - Testar conectividade\n");
        printf("  3 - Rastrear rota\n");
        printf("  4 - Identificar tipo de IP\n");

        printf("\033[34m");

        printf("  5 - Monitoramento completo\n");

        printf("\033[31m");

        printf("  0 - Sair\n");

        printf("\033[0m");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);



        // MENU

        switch (opcao) {

            case 1:
                mostrarInformacoesRede();
                break;

            case 2:
                testarConectividade();
                break;

            case 3:
                rastrearRota();
                break;
            
            case 4:
                identificarTipoIP();
                break;
            
            case 5:
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