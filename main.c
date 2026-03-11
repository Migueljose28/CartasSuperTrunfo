#include <stdio.h>
#include <string.h>
#include "Deck.h"

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
void compare_attr(Deck *c, Deck *c2) {
    printf("\nComparação de Cartas (Atributo: População):\n");
    
    printf("Carta 1 - %s (%c): (%d)\n", c->city, c->state_char, c->quantity_of_people);
    printf("Carta 2 - %s (%c): (%d)\n", c2->city, c2->state_char, c2->quantity_of_people);
    if (c->quantity_of_people > c2->quantity_of_people) {
        printf("Resultado: Carta 1 (%s) venceu!\n", c->city); 
    }
    else {
        printf("Resultado: Carta 2 (%s) venceu!\n", c2->city);
    };

};


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
        cartas[i].city[strcspn(cartas[i].city, "\n")] = 0; // Retirando Enter

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
    compare_attr(&cartas[0], &cartas[1]);


    return 0;
}
