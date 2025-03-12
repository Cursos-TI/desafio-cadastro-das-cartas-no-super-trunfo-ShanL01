#include <stdio.h>

// Definindo uma estrutura para armazenar os dados da carta
struct Carta {                                                                      //Exemplo de duas cartas(carta1, carta2):
    char estado;            // Estado representado por uma letra de A a H           //A              /B
    char codigoCarta[5];    // Código da carta no formato "A01", "B03", etc.        //A01            /B02
    char nomeCidade[50];    // Nome da cidade                                       //Rio de Janeiro /Sao Paulo
    int populacao;          // População da cidade                                  //17219679       /45973194
    float area;             // Área da cidade em km²                                //43750          /248219 
    float pib;              // PIB da cidade em bilhões de reais                    //680            /950
    int pontosTuristicos;   // Número de pontos turísticos                          //200            /610
};

// Função para cadastrar os dados de uma carta
void cadastrarCarta(struct Carta *carta) {
    printf("Digite os dados da carta:\n");
    
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta->estado);  // O espaço antes de %c é para consumir qualquer caractere pendente
    
    printf("Código da carta (exemplo: A01, B03): ");
    scanf("%s", carta->codigoCarta);
    
    printf("Nome da cidade: ");
    getchar();  // Para consumir o '\n' deixado pelo scanf anterior
    fgets(carta->nomeCidade, sizeof(carta->nomeCidade), stdin);
    
    printf("População: ");
    scanf("%d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta) {
    printf("\nCarta %s:\n", carta.codigoCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigoCarta);
    printf("Nome da Cidade: %s", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {

    //Definindo uma estrutura para o cadastramento e a exibição das cartas
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    cadastrarCarta(&carta1);
    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    cadastrarCarta(&carta2);
    printf("\n");

    // Exibir os dados das cartas cadastradas
    printf("Exibindo as cartas cadastradas:\n");

    // Exibir dados da primeira carta
    exibirCarta(carta1);

    // Exibir dados da segunda carta
    exibirCarta(carta2);

    //Estrutura Carta:
    //Define a estrutura que armazenará os dados de cada carta, como estado, código da carta, nome da cidade, população, área, PIB e pontos turísticos.

    //Função cadastrarCarta: 
    //Permite o cadastro dos dados de uma carta, incluindo a entrada dos dados pelo usuário.
    //Usa fgets para ler o nome da cidade (permitindo espaços), e scanf para ler os outros campos.

    //Função exibirCarta:
    //Exibe os dados da carta de forma formatada.

    //Função main:
    //Realiza o cadastro de duas cartas e as exibe.

    //Base: 
    //#include <stdio.h> struct(carta) {} / void cadastrarCarta (structcarta) {} / void exibirCarta (structcarta) {} / int main() {structcarta_ 1,2};
    //char, int, float, printf, scanf, getchar, fgets, sizeof, stdin.

    return 0;
}