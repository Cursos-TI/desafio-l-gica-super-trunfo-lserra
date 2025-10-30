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

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    // Menu para escolha do primeiro atributo
    printf("===[ Super Trunfo: Comparacao de Cartas ]===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("[1] - Populacao\n");
    printf("[2] - Area\n");
    printf("[3] - PIB\n");
    printf("[4] - Pontos Turisticos\n");
    printf("[5] - Densidade Demografica\n");
    printf(">> Digite sua opcao: ");
    scanf("%d", &atributo1);

    // Se atributo invalido, entao abandonar programa
    if (atributo1 < 1 || atributo1 > 5) {
        printf("===> Atributo invalido!\n");
        return 1; // Encerra o programa com código de erro
    }

    // Menu dinâmico para escolha do segundo atributo (sem repetir o primeiro)
    printf("Escolha o segundo atributo:\n");
    switch (atributo1) {
        case 1:
            printf("[2] - Area\n");
            printf("[3] - PIB\n");
            printf("[4] - Pontos Turisticos\n");
            printf("[5] - Densidade Demografica\n");
            break;
        case 2:
            printf("[1] - Populacao\n");
            printf("[3] - PIB\n");
            printf("[4] - Pontos Turisticos\n");
            printf("[5] - Densidade Demografica\n");
            break;
        case 3:
            printf("[1] - Populacao\n");
            printf("[2] - Area\n");
            printf("[4] - Pontos Turisticos\n");
            printf("[5] - Densidade Demografica\n");
            break;
        case 4:
            printf("[1] - Populacao\n");
            printf("[2] - Area\n");
            printf("[3] - PIB\n");
            printf("[5] - Densidade Demografica\n");
            break;
        case 5:
            printf("[1] - Populacao\n");
            printf("[2] - Area\n");
            printf("[3] - PIB\n");
            printf("[4] - Pontos Turisticos\n");
            break;
        default:
            printf("===> Atributo invalido!\n");
            return 1;
    }

    printf(">> Digite sua opcao: ");
    scanf("%d", &atributo2);

    // Verifica se os atributos são diferentes
    if (atributo1 == atributo2) {
        printf("\n===> Atencao: os atributos de comparacao devem ser diferentes!\n");
        return 1;
    }

    // Atribuição dos valores do primeiro atributo
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("===> Atributo invalido!\n"); return 1;
    }

    // Atribuição dos valores do segundo atributo
    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("===> Atributo invalido!\n"); return 1;
    }

    // Exibição dos valores
    printf("\nComparacao entre: %s e %s\n", nomePais1, nomePais2);
    printf("--------------------------------------\n");
    printf("** Atributo 1 (%d): %.2f vs %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    printf("** Atributo 2 (%d): %.2f vs %.2f\n", atributo2, valor2_carta1, valor2_carta2);

    // Comparação dos atributos
    int vitoria1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    int vitoria2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

    printf("\nResultado por atributo:\n");
    printf("--------------------------------------\n");
    printf("** Atributo 1: %s venceu!\n", (valor1_carta1 == valor1_carta2) ? "Empate!" : (vitoria1 ? nomePais1 : nomePais2));
    printf("** Atributo 2: %s venceu!\n", (valor2_carta1 == valor2_carta2) ? "Empate!" : (vitoria2 ? nomePais1 : nomePais2));

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("--------------------------------------\n");
    printf("** %s: %.2f\n", nomePais1, soma1);
    printf("** %s: %.2f\n", nomePais2, soma2);

    // Resultado final
    printf("\nResultado Final: \n");
    printf("--------------------------------------\n");
    printf("** %s e o vencedor!\n", (soma1 == soma2) ? "Empate!" : ((soma1 > soma2) ? nomePais1 : nomePais2));

    return 0;
}
