#include <stdio.h>
#include "Deck.h"

float pibToCapita(Deck *c) {
    return (float) ( c->pib * 1000000000 ) / c->quantity_of_people;
}

float populational(Deck *c) {
    return (float) c->quantity_of_people / c->area;
}

float superPower(Deck *c) {
    return c->quantity_of_people + c->area + c->pib + c->number_points_of_tourism + pibToCapita(c) - populational(c); 
}

void printDeck(Deck *c) {
    // Área para exibição dos dados da cidade
    printf("Estado: %c\n", c->state_char);
    printf("Codigo: %s\n", c->code);
    printf("Nome da Cidade: %s\n", c->city);
    printf("população: %d\n", c->quantity_of_people);
    printf("Area: %.2f km²\n", c->area);
    printf("PIB: %.2f bilhões de reais\n", c->pib);
    printf("Numero de pontos turisticos: %d\n", c->number_points_of_tourism);
    printf("Populacional: %.2f hab/km²\n", populational(c));
    printf("PIB per Capita: %.2f reais\n", pibToCapita(c));
    printf("Super Poder %.2f\n\n", superPower(c));
}


