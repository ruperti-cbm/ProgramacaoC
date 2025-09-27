// Desafio Super Trunfo - Estados - P/ Qualquer Cidade - Tema 3 - Versão finalizada

#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[30], estado2[30];
    char cardcode1[10], cardcode2[10];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    int pontosturistic1, pontosturistic2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // Entrada de dados das cidades
    printf("Digite o código da carta 1: \n");
    scanf("%s", cardcode1);
    printf("Digite o código da carta 2: \n");
    scanf("%s", cardcode2);
    printf("Digite o Estado 1: \n");
    scanf("%s", estado1);
    printf("Digite o Estado 2: \n");
    scanf("%s", estado2);
    printf("Digite a cidade 1: \n");
    scanf("%s", cidade1);
    printf("Digite a cidade 2: \n");
    scanf("%s", cidade2);
    printf("Digite a população 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite a população 2: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área 1 (km²): \n");
    scanf("%f", &area1);
    printf("Digite a área 2 (km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB 1 (bilhões): \n");
    scanf("%f", &pib1);
    printf("Digite o PIB 2 (bilhões): \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos 1: \n");
    scanf("%d", &pontosturistic1);
    printf("Digite a quantidade de pontos turísticos 2: \n");
    scanf("%d", &pontosturistic2);

    // Cálculos de cidades aleatórias
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superpoder1 = populacao1 + area1 + pib1 + pontosturistic1 + pibpercapita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + pontosturistic2 + pibpercapita2 + (1 / densidade2);

    // Exibição dos dados das cartas
    printf("\n CARTA 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cardcode1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturistic1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n CARTA 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cardcode2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturistic2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    
    // Comparação entre as cartas
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturistic1 > pontosturistic2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}