#include <stdio.h>
#include <string.h>

typedef struct {
    char estado [30];
    char codigo [5];
    char cidade [50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    carta c1, c2;

    printf("--- cadastro da carta 1  --- \n");
    printf("estado: "); 
    scanf("%s", c1.estado);
    printf("codigo: ");
    scanf("%s", c1.codigo);
    printf("cidade: ");
    scanf("%[^\n]s", c1.codigo);
    printf("area (km²): ");
    scanf("%f", &c1.area);
    prinf("pib (em bilhoes): ");
    scanf("%d", &c1.pib);
    scanf("%if", &c1.pib);
    printf("ponto turisticos: ");
    scanf("%d", &c1.pontos_turisticos);

    
    // cadastro carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: ");
    scanf("%s", c2.estado);
    printf("Código: ");
    scanf("%s", c2.codigo);
    printf("Cidade: "); 
    scanf(" %[^\n]s", c2.cidade);
    printf("População: "); 
    scanf("%lu", &c2.populacao);
    printf("Área (km²): "); 
    scanf("%f", &c2.area);
    printf("PIB (em bilhões): "); 
    scanf("%lf", &c2.pib);
    printf("Pontos Turísticos: "); 
    scanf("%d", &c2.pontos_turisticos);
     // Lógica de Comparação (Exemplo: População)
    printf("\n--- Comparação: Popu\n");
    printf("Carta 1 (%s): %lu\n", c1.cidade, c1.populacao);
    printf("Carta 2 (%s): %lu\n", c2.cidade, c2.populacao);

    if (c1.populacao > c2.populacao) {
        printf("Resultado: CARTA 1 VENCEU!\n");
    } else if (c2.populacao > c1.populacao) {
        printf("Resultado: CARTA 2 VENCEU!\n");
    } else {
        printf("Resultado: EMPATE!\n");
    }

    return 0;
}
  

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
