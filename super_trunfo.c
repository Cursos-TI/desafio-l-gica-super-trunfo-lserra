//
// Created by Laercio Serra (laercio.serra@gmail.com) on 28/10/2025.
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Niveis: novato, aventureiro e mestre
//
#include <stdio.h>
#include <string.h>

// Tamanho máximo para strings
#define TAM_CODIGO 4
#define TAM_NOME 50

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Declaração das variáveis da Carta 1
    char estado1[TAM_CODIGO];
    char codigo1[TAM_CODIGO];
    char nomeCidade1[TAM_NOME];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Declaração das variáveis da Carta 2
    char estado2[TAM_CODIGO];
    char codigo2[TAM_CODIGO];
    char nomeCidade2[TAM_NOME];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Área para entrada de dados
    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf(">> Digite o Estado (A-H): ");
    scanf(" %s", estado1);

    printf(">> Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf(">> Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf(">> Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf(">> Digite a Area (em km): ");
    scanf("%f", &area1);

    printf(">> Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf(">> Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf(">> Digite o Estado (A-H): ");
    scanf(" %s", estado2);

    printf(">> Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf(">> Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf(">> Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf(">> Digite a Area (em km): ");
    scanf("%f", &area2);

    printf(">> Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf(">> Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados calculados
    printf("\n==[ Indicadores calculados ]==\n");
    printf("** Carta 1 - %s (%s): Densidade = %.2f hab/km, PIB per Capita = %.2f reais\n",
        nomeCidade1, estado1, densidade1, pibPerCapita1);
    printf("** Carta 2 - %s (%s): Densidade = %.2f hab/km, PIB per Capita = %.2f reais\n",
        nomeCidade2, estado2, densidade2, pibPerCapita2);

    // Comparação baseada em PIB per Capita
    printf("\n==[ Comparacao de cartas (Atributo: PIB per Capita) ]==\n");
    printf("** Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
    printf("** Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

    // Estrutura de decisão para determinar a vencedora
    if (pibPerCapita1 > pibPerCapita2) {
        printf("===> Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("===> Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("===> Resultado: Empate!\n");
    }

    return 0;
}