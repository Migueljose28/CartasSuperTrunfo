#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
    char state_char, code[10], city[50];
    float PIBperCapita, populational, area, pib;
    int quantity_of_people, number_points_of_tourism;

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
    scanf("%f", &pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &number_points_of_tourism);

    populational = (float) quantity_of_people / area;
    PIBperCapita = (float) ( pib * 1000000000 ) / quantity_of_people;

  // Área para exibição dos dados da cidade
    printf("Estado: %c\n", state_char);
    printf("Codigo: %s\n", code);
    printf("Nome da Cidade: %s\n", city);
    printf("população: %d\n", quantity_of_people);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", number_points_of_tourism);
    printf("Populacional: %.2f hab/km²\n", populational);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita);

    return 0;
}
