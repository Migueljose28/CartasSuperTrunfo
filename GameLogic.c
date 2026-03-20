#include <stdio.h>
#include <string.h>
#include "Deck.h"
#include "GameLogic.h"

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
void compare_attr( char name_attr[], float value1, float value2, char city1[], char city2[], int is_smaller_win){
    printf("\nComparação de Cartas (Atributo: %s)\n", name_attr);
    printf("Carta 1 - %s: %.2f\n", city1, value1);
    printf("Carta 2 - %s: %.2f\n", city2, value2);

    if (value1 == value2) {
        printf("Empate!\n");
        return;
    }

    if (is_smaller_win) {
        if (value1 < value2)
            printf("Vencedor: %s\n", city1);
        else
            printf("Vencedor: %s\n", city2);
    } else {
        if (value1 > value2)
            printf("Vencedor: %s\n", city1);
        else
            printf("Vencedor: %s\n", city2);
    }
}


void add_decks(Deck cartas[]){
// Área para entrada de dados
    for (int i = 0; i < 2; i++){
        printf("### Carta %d ###\n", (i + 1));
        printf("Estado: ");
        scanf(" %c", &cartas[i].state_char);
        printf("Codigo: ");
        scanf(" %s", &cartas[i].code);
        getchar();
        
        printf("Nome da Cidade: ");
        fgets(cartas[i].city, sizeof(cartas[i].city), stdin);
        cartas[i].city[strcspn(cartas[i].city, "\n")] = 0; // Retirando Enter

        printf("População: ");
        scanf(" %d", &cartas[i].quantity_of_people);
        printf("Area: ");
        scanf(" %f", &cartas[i].area);
        printf("PIB: ");
        scanf("%f", &cartas[i].pib);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &cartas[i].number_points_of_tourism);

        printDeck(&cartas[i]);
    }
}

void compare_both_deck_complete(Deck *c, Deck *c2) {
    printf("Comparação de Cartas:\n");
    
    printf("População: Carta %d venceu (%d)\n", 
        (c->quantity_of_people > c2->quantity_of_people) ? 1 : 2,
        c->quantity_of_people > c2->quantity_of_people
    );
    printf("Área: Carta %d venceu (%d)\n",
        (c->area > c2-> area) ? 1 : 2,
        c->area > c2->area
    );

    printf("PIB: Carta %d venceu (%d)\n",
        (c->pib > c2->pib) ? 1 : 2, c->pib > c2->pib
    );
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
        (c->number_points_of_tourism > c2->number_points_of_tourism) ? 1 : 2,
        c->number_points_of_tourism > c2->number_points_of_tourism
    );

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
        (populational(c) < populational(c2))? 1 : 2,
        populational(c) < populational(c2)
    );

    printf("PIB per Capita: Carta %d venceu (%d)\n",
        (pibToCapita(c) > pibToCapita(c2)) ? 1 : 2,
        pibToCapita(c) > pibToCapita(c2)
    );

    printf("Super Poder: Carta %d venceu (%d)\n", 
        (superPower(c) > superPower(c2) ? 1 : 2),
        superPower(c) > superPower(c2)
    );

}
