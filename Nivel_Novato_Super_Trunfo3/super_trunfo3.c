#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados das duas cartas ****
    //-----------------------------------------------------------//Exemplo de duas cartas(carta1, carta2):
    char estado1[3], estado2[3];                                 // Estado representado por uma letra de A a H           //A                    //B
    char codigo1[4], codigo2[4];                                 // Código da carta no formato "A01", "B03", etc.        //A01                  //B02
    char nome1[100], nome2[100];                                 // Nome da cidade                                       //Rio de Janeiro       //Sao Paulo
    unsigned long int populacao1, populacao2;                    // População da cidade                                  //17219679             //45973194
    float area1, area2;                                          // Área da cidade em km²                                //43750                //248219
    float pib1, pib2;                                            // PIB da cidade em bilhões de reais                    //680                  //950
    int pontosTuristicos1, pontosTuristicos2;                    // Número de pontos turísticos                          //200                  //610
    float densidadePopulacional1, densidadePopulacional2;        // Densidade populacional em hab/km²                    //populacao1 / area1   //populacao2 / area2
    float pibPerCapita1, pibPerCapita2;                          // PIB per capita em reais                              //pib1 / populacao1    //pib2 / populacao2
    float superPoder1, superPoder2;                              // Super poder 1                                        //populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1)
                                                                 // Super poder 2                                        //populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2)

    // Leitura das informações para a primeira carta ***
    printf("Digite as informações para a Carta 1:\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar();
    fgets(nome1, sizeof(nome1), stdin);  // Para ler o nome da cidade com espaços *

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura das informações para a segunda carta ***
    printf("\nDigite as informações para a Carta 2:\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();
    fgets(nome2, sizeof(nome2), stdin);  // Para ler o nome da cidade com espaços *

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcular a Densidade Populacional (população / área) **
    densidadePopulacional1 = (float)populacao1 / area1;
    densidadePopulacional2 = (float)populacao2 / area2;

    // Calcular o PIB per Capita (PIB / população) **
    pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1e9 / populacao1) : 0.0;  // Multiplicando PIB por 1 bilhão para obter o valor real
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1e9 / populacao2) : 0.0;

    // Calcular o Super Poder (soma de todos os atributos) **
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    printf("\n*** EXIBINDO RESULTADOS: ***\n");

    // Exibição dos resultados para a Carta 1 ***
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos resultados para a Carta 2 ***
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparar os atributos das cartas e exibir o vencedor
    printf("\n*** Comparação de Cartas: ***\n");

    // Comparar População
    printf("\nPopulação: ");
    printf("Carta 1 venceu (%d)\n", (populacao1 > populacao2) ? 1 : 0);

    // Comparar Área
    printf("Área: ");
    printf("Carta 1 venceu (%d)\n", (area1 > area2) ? 1 : 0);

    // Comparar PIB
    printf("PIB: ");
    printf("Carta 1 venceu (%d)\n", (pib1 > pib2) ? 1 : 0);

    // Comparar Pontos Turísticos
    printf("Pontos Turísticos: ");
    printf("Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Comparar Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    printf("Carta 1 venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);

    // Comparar PIB per Capita
    printf("PIB per Capita: ");
    printf("Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    // Comparar Super Poder
    printf("Super Poder: ");
    printf("Carta 1 venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 0);

    //Função main:
    //Realiza o cadastro de duas cartas e as exibe.

    //Base: 
    //#include <stdio.h> int main(){};
    //char, unsigned long int, int, float, printf, scanf, getchar, fgets, sizeof, stdin;
    //(=), (/), (*), (!=), (?), (:), (+), (>), (<).

    return 0;
}