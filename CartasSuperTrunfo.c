#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[3];
  char codigo1[4];
  char cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  char estado2[3];
  char codigo2[4];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");

  printf("Estado. Ex.: MG: ");
  scanf("%s", estado1);

  printf("Codigo da Carta. Ex: A01: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf("%s", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km²): ");
  scanf("%f", &area1);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\n=== Cadastro da Carta 2 ===\n");

  printf("Estado. Ex.: SP: ");
  scanf("%s", estado2);

  printf("Codigo da Carta. Ex: B02: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf("%s", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km²): ");
  scanf("%f", &area2);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  printf("\n=== Carta 1 ===\n");

  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %f km²\n", area1);
  printf("PIB: %f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  printf("\n=== Carta 2 ===\n");

  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %f km²\n", area2);
  printf("PIB: %f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);


return 0;
} 
