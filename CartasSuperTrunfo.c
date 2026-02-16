#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state_char;
  char code[10];
  char city[50];
  int quantity_of_people;
  float area, PIB;
  int number_points_of_tourism;

  // Área para entrada de dados
  printf("Estado: ");
  scanf("%c", &state_char);
  printf("Codigo: ");
  scanf("%s", &code);
  getchar();
  printf("Nome da Cidade: ");
  fgets(city, sizeof(city), stdin);
  printf("População: ");
  scanf("%d", &quantity_of_people);
  printf("Area: ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &PIB);
  printf("Numero de pontos turisticos: ");
  scanf("%d", &number_points_of_tourism);

  // Área para exibição dos dados da cidade
  printf("Estado: %c\n", state_char);
  printf("Codigo: %s\n", code);
  printf("Cidade: %s\n", city);
  printf("população: %d\n", quantity_of_people);
  printf("Area: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", PIB);
  printf("Numero de pontos turisticos: %d\n", number_points_of_tourism);
 
return 0;
} 
