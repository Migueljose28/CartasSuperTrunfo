#include <stdio.h>
#include <string.h>
#include "Deck.h"
#include <stdbool.h>
#include "GameLogic.h"

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
    Deck cartas[2];
    bool gameIsOn = true;
    int option, option2;

    while (gameIsOn) {
        printf("\n### Menu Interativo ###\n");
        printf("0 - Sair\n");
        printf("1 - Atribuir as cartas\n");
        printf("2 - Comparar todos atributos das cartas\n");
        printf("3 - Comparar atributo especifico\n");
        scanf("%d", &option);

        switch (option) {
            case 0:
                gameIsOn = false;
                break;
            case 1:
                add_decks(cartas);
                break;
            case 2: 
                compare_both_deck_complete(&cartas[0], &cartas[1]);
                break;
            case 3:
                printf("Escolha um atributo especifico:\n");
                printf("0 - Voltar\n");
                printf("1 - Area\n");
                printf("2 - PIB\n");
                printf("3 - Ponto turisticos\n");
                printf("4 - Super Poder\n");
                printf("5 - Densidade População\n");
                printf("6 - PIB per capital\n");
                scanf("%d", &option2);
                
                switch (option2) {
                    case 0:
                        break;

                    case 1:
                        compare_attr(
                            "Área",
                            cartas[0].area,
                            cartas[1].area,
                            cartas[0].city,
                            cartas[1].city,
                            0
                        );
                        break;

                    case 2:
                        compare_attr(
                            "PIB",
                            cartas[0].pib,
                            cartas[1].pib,
                            cartas[0].city,
                            cartas[1].city,
                            0
                        );
                        break;

                    case 3:
                        compare_attr(
                            "Pontos Turísticos",
                            cartas[0].number_points_of_tourism,
                            cartas[1].number_points_of_tourism,
                            cartas[0].city,
                            cartas[1].city,
                            0
                        );
                        break;

                    case 4: {
                        float poder1 = superPower(&cartas[0]);
                        float poder2 = superPower(&cartas[1]);

                        compare_attr(
                            "Super Poder",
                            poder1,
                            poder2,
                            cartas[0].city,
                            cartas[1].city,
                            0
                        );
                        break;
                    }

                    case 5: {
                        float dens1 = populational(&cartas[0]);
                        float dens2 = populational(&cartas[1]);

                        compare_attr(
                            "Densidade Populacional",
                            dens1,
                            dens2,
                            cartas[0].city,
                            cartas[1].city,
                            1 // menor vence
                        );
                        break;
                    }

                    case 6: {
                        float pibpc1 = pibToCapita(&cartas[0]);
                        float pibpc2 = pibToCapita(&cartas[1]);

                        compare_attr(
                            "PIB per capita",
                            pibpc1,
                            pibpc2,
                            cartas[0].city,
                            cartas[1].city,
                            0
                        );
                        break;
                    }

                    default:
                        printf("Opção inválida!\n");
                        break;
                }
                break;            
        } 
    }


    return 0;
}
