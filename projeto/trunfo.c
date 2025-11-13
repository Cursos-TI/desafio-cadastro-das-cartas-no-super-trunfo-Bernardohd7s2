#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char codigo1[4];
    char estado1[8];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da carta 2
    char codigo2[4];
    char estado2[8];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("=== Cadastro de Cartas Super Trunfo - Tema: Países ===\n");

    // Cadastro da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a letra de um estado(ex: A a H): ");
    scanf("%s", &estado1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a letra de um estado(ex: A a H): ");
    scanf("%s", &estado2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1 - Código: %s\n", codigo1);
    printf("Estado: %s \n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - Código: %s\n", codigo2);
    printf("Estado: %s \n",estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
