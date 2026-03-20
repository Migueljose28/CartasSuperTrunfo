#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "Deck.h"

void compare_attr(
    char name_attr[],
    float value1,
    float value2,
    char city1[],
    char city2[],
    int is_smaller_win
);
void add_decks(Deck cartas[]);
void compare_both_deck_complete(Deck *c, Deck *c2);

#endif
