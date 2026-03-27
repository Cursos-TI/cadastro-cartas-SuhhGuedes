#include <stdio.h>

// Desafio Super Trunfo - Paísesint main() {
    // Variáveis para a Carta 1
    char estado1, codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Variáveis para a Carta 2
    char estado2, codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
// Tema 1 - Cadastro das cartas
 // Cadastro da Carta 1
    printf("--- Cadastro Carta 1 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro Carta 2 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos2);
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
    // Cálculos de Densidade, PIB per Capita e Super Poder
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 / (float)populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1.0 / densidade1);

    
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / (float)populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0 / densidade2);


    
    // Exibição dos Resultados das Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

        // Na densidade, o menor valor vence (resultado 1 se carta 1 for menor)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

 
