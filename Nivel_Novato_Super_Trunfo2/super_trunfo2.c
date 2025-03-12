#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados das duas cartas ****
    //-----------------------------------------------------------//Exemplo de duas cartas(carta1, carta2):
    char estado1, estado2;                                       // Estado representado por uma letra de A a H           //A                    //B
    char codigo1[5], codigo2[5];;                                // Código da carta no formato "A01", "B03", etc.        //A01                  //B02
    char cidade1[50], cidade2[50];                               // Nome da cidade                                       //Rio de Janeiro       //Sao Paulo
    int populacao1, populacao2;                                  // População da cidade                                  //17219679             //45973194
    float area1, area2;                                          // Área da cidade em km²                                //43750                //248219
    float pib1, pib2;                                            // PIB da cidade em bilhões de reais                    //680                  //950
    int pontosTuristicos1, pontosTuristicos2;                    // Número de pontos turísticos                          //200                  //610
    float densidade1, densidade2;                                // Densidade populacional em hab/km²                    //populacao1 / area1   //populacao2 / area2
    float pibPerCapita1, pibPerCapita2;                          // PIB per capita em reais                              //pib1 / populacao1    //pib2 / populacao2

    // Leitura das informações para a primeira carta ***
    printf("Digite as informações para a Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);  // Para ler o nome da cidade com espaços *

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura das informações para a segunda carta ***
    printf("\nDigite as informações para a Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);  // Para ler o nome da cidade com espaços *

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 1 **
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1e9 / populacao1; // Multiplicando PIB por 1 bilhão para obter o valor real

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 2 **
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1e9 / populacao2; // Multiplicando PIB por 1 bilhão para obter o valor real

    printf("\n*** EXIBINDO RESULTADOS: ***\n");

    // Exibição dos resultados para a Carta 1 ***
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: %.0f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.0f hab/km²\n", densidade1);
    printf("PIB per Capita: %.0f reais\n", pibPerCapita1);

    // Exibição dos resultados para a Carta 2 ***
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.0f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.0f hab/km²\n", densidade2);
    printf("PIB per Capita: %.0f reais\n", pibPerCapita2);

    //Função main:
    //Realiza o cadastro de duas cartas e as exibe.

    //Base: 
    //#include <stdio.h> int main(){};
    //char, int, float, printf, scanf, getchar, fgets, sizeof, stdin;
    //=, /.

    return 0;
}