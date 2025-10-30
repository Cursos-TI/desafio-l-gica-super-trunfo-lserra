//
// Created by Laercio Serra (laercio.serra@gmail.com) on 28/10/2025.
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Niveis: novato, aventureiro e mestre
//
#include <stdio.h>

// Tamanho máximo para strings
#define TAM_NOME 50

int main() {
    // Dados da Carta 1
    char nomePais1[TAM_NOME] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2200.0; // em bilhões
    int pontosTuristicos1 = 45;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2
    char nomePais2[TAM_NOME] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780400.0;
    float pib2 = 500.0; // em bilhões
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu interativo
    printf("===[ Super Trunfo: Comparacao de Cartas ]===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("[1] - Populacao\n");
    printf("[2] - Area\n");
    printf("[3] - PIB\n");
    printf("[4] - Pontos Turisticos\n");
    printf("[5] - Densidade Demografica\n");
    printf(">> Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nComparacao entre: %s e %s\n", nomePais1, nomePais2);
            printf("------------------------------------\n");
            printf("::: Atributo: Populacao :::\n");
            printf("** %s: %d habitantes\n", nomePais1, populacao1);
            printf("** %s: %d habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("===> Resultado: %s venceu!\n", nomePais1);
            } else if (populacao1 < populacao2) {
                printf("===> Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("===> Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("\nComparacao entre: %s e %s\n", nomePais1, nomePais2);
            printf("------------------------------------\n");
            printf("::: Atributo: Area :::\n");
            printf("** %s: %.2f km\n", nomePais1, area1);
            printf("** %s: %.2f km\n", nomePais2, area2);
            if (area1 > area2) {
                printf("===> Resultado: %s venceu!\n", nomePais1);
            } else if (area1 < area2) {
                printf("===> Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("===> Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nComparacao entre: %s e %s\n", nomePais1, nomePais2);
            printf("------------------------------------\n");
            printf("::: Atributo: PIB :::\n");
            printf("** %s: %.2f bilhoes de reais\n", nomePais1, pib1);
            printf("** %s: %.2f bilhoes de reais\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("===> Resultado: %s venceu!\n", nomePais1);
            } else if (pib1 < pib2) {
                printf("===> Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("===> Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nComparacao entre: %s e %s\n", nomePais1, nomePais2);
            printf("------------------------------------\n");
            printf("::: Atributo: Pontos Turisticos :::\n");
            printf("** %s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("** %s: %d pontos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("===> Resultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("===> Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("===> Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("\nComparacao entre: %s e %s\n", nomePais1, nomePais2);
            printf("------------------------------------\n");
            printf("::: Atributo: Densidade Demografica :::\n");
            printf("** %s: %.2f hab/km\n", nomePais1, densidade1);
            printf("** %s: %.2f hab/km\n", nomePais2, densidade2);
            if (densidade1 < densidade2) {
                printf("==> Resultado: %s venceu!\n", nomePais1);
            } else if (densidade1 > densidade2) {
                printf("==> Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("===> Resultado: Empate!\n");
            }
            break;

        default:
            printf("===> Opcao invalida! Por favor, escolha um numero entre 1 e 5.\n");
            break;
    }

    return 0;
}