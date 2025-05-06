#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

void lerCarta(char estado[], char codigoCarta[], char nomeCidade[], int *qtdHabitantes, float *area, float *pib, int *qtdPontosTuristicos);
void exibirCarta(char estado[], char codigoCarta[], char nomeCidade[], int qtdHabitantes, float area, float pib, int qtdPontosTuristicos);

int main() {
    int qtdHabitantes = 0, qtdPontosTuristicos = 0;
    float area = 0.0f, pib = 0.0f;
    char estado[50], codigoCarta[50], nomeCidade[50];

    printf("Desafio Super Trunfo - Países\n\n");
    printf("Digite os dados da carta 1:\n");
    lerCarta(estado, codigoCarta, nomeCidade, &qtdHabitantes, &area, &pib, &qtdPontosTuristicos);
    printf("\nCarta 1:\n");
    exibirCarta(estado, codigoCarta, nomeCidade, qtdHabitantes, area, pib, qtdPontosTuristicos);

    printf("\nDigite os dados da carta 2:\n");
    lerCarta(estado, codigoCarta, nomeCidade, &qtdHabitantes, &area, &pib, &qtdPontosTuristicos);
    printf("\nCarta 2:\n");
    exibirCarta(estado, codigoCarta, nomeCidade, qtdHabitantes, area, pib, qtdPontosTuristicos);
    
    return 0;
}

void lerCarta(char estado[], char codigoCarta[], char nomeCidade[], int *qtdHabitantes, float *area, float *pib, int *qtdPontosTuristicos) {
    printf("Digite o Estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%i", qtdHabitantes);

    printf("Digite a área (km²) da cidade: ");
    scanf("%f", area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", qtdPontosTuristicos);
}

void exibirCarta(char estado[], char codigoCarta[], char nomeCidade[], int qtdHabitantes, float area, float pib, int qtdPontosTuristicos) {
    printf("==================================\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %i\n", qtdHabitantes);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de pontos turísticos: %i\n", qtdPontosTuristicos);
    printf("==================================\n");
}
