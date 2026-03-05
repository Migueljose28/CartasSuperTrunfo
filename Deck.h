#ifndef DECK_H
#define DECK_H

typedef struct {
    char state_char, code[10], city[50];
    float area, pib;
    unsigned int quantity_of_people, number_points_of_tourism;
} Deck;

void printDeck(Deck *c);
void compareDecks(Deck *c, Deck *c2);
float pibToCapita(Deck *c);
float populational(Deck *c);
float superPower(Deck *c);

#endif // !DECK_H
