#include <stdio.h>
#include <string.h>

// Função auxiliar para ler strings com espaços e remover o \n do final
void ler_linha(char *dest, int tam) {
    if (fgets(dest, tam, stdin)) {
        dest[strcspn(dest, "\n")] = '\0'; // remove o \n do final
    }
}

int main() {
    // Dados da primeira carta
    char estado1[20], codigo1[10], cidade1[40];
    int populacao1, pontos1;
    float area1, pib1;

    // Dados da segunda carta
    char estado2[20], codigo2[10], cidade2[40];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira cidade: ");
    ler_linha(estado1, sizeof(estado1));

    printf("Digite o codigo da carta 1: ");
    ler_linha(codigo1, sizeof(codigo1));

    printf("Digite o nome da cidade: ");
    ler_linha(cidade1, sizeof(cidade1));

    printf("Digite a populacao: ");
    scanf("%d", &populacao1); getchar();

    printf("Digite a area (km2): ");
    scanf("%f", &area1); getchar();

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1); getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1); getchar();

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda cidade: ");
    ler_linha(estado2, sizeof(estado2));

    printf("Digite o codigo da carta 2: ");
    ler_linha(codigo2, sizeof(codigo2));

    printf("Digite o nome da cidade: ");
    ler_linha(cidade2, sizeof(cidade2));

    printf("Digite a populacao: ");
    scanf("%d", &populacao2); getchar();

    printf("Digite a area (km2): ");
    scanf("%f", &area2); getchar();

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2); getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2); getchar();

    // Exibição dos dados das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}