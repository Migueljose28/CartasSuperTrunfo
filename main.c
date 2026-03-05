#include <stdio.h>
#include <string.h>
#include "Deck.h"

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
    Deck cartas[2];

    // Área para entrada de dados
    for (int i = 0; i < 2; i++){
        printf("Estado: ");
        scanf(" %c", &cartas[i].state_char);
        printf("Codigo: ");
        scanf(" %s", &cartas[i].code);
        getchar();
        printf("Nome da Cidade: ");
        fgets(cartas[i].city, sizeof(cartas[i].city), stdin);
        printf("População: ");
        scanf(" %d", &cartas[i].quantity_of_people);
        printf("Area: ");
        scanf(" %f", &cartas[i].area);
        printf("PIB: ");
        scanf("%f", &cartas[i].pib);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &cartas[i].number_points_of_tourism);


        printDeck(&cartas[0]);
    }
    compareDecks(&cartas[0], &cartas[1]);

    return 0;
}

