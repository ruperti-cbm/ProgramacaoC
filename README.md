#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Objetivo: No nível Novato, você deve criar as cartas representando as cidades, utilizando scanf para a entrada de dados e printf para exibir as informações

int main(){

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1[30] = "sergipe";
    char cardcode1[10] = "A01";
    char cidade1[30] = "Aracajú";
    int populacao1 = 602757; 
    int pontosturistic1 = 24;
    float area1 = 182; 
    float pib1 = 18405.678;

    char estado2[30] = "Bahia"; 
    char cardcode2[10] = "B02";
    char cidade2[30] = "Salvador";
    int populacao2 = 2570.000; 
    int pontosturistic2 = 15;
    float area2 = 693; 
    float pib2 = 62954.000;
    
 // Área para a entrada de dados das propriedades das cidades

    printf("Digite o código da carta 1: \n");
    scanf("%s", &cardcode1);
    printf("Digite o código da carta 2: \n");
    scanf("%s", &cardcode2);
    printf("Digite o Estado 1: \n");
    scanf("%s", &estado1);
    printf("Digite o Estado 2: \n");
    scanf("%s", &estado2);
    printf("Digite o cidade 1: \n");
    scanf("%s", &cidade1);
    printf("Digite o cidade 2: \n");
    scanf("%s", &cidade2);
    printf("Digite a população 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a população 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a área 1: \n");
    scanf("%f", &area1);
    printf("Digite a área 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB 1: \n");
    scanf("%f", &pib1);
    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos 1: \n");
    scanf("%d", &pontosturistic1);
    printf("Digite a quantidade de pontos turísticos 2: \n");
    scanf("%d", &pontosturistic2);

  // Área para a exibição dos dados das cidades cadastradas

    printf("Código da carta: %s \n", cardcode1);
    printf("Estado: %s - Cidade: %s \n", estado1, cidade1);
    printf("População: %d - Área: %f - PIB: %f \n", populacao1, area1, pib1);
    printf("Quantidade de pontos turísticos: %d \n", pontosturistic1);

    printf("Código da carta: %s \n", cardcode2);
    printf("Estado: %s - Cidade: %s \n", estado2, cidade2);
    printf("População: %d - Área: %f - PIB: %f \n", populacao2, area2, pib2);
    printf("Quantidade de pontos turísticos: %d \n", pontosturistic2);

    return 0;
}
