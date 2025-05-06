#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

void lerCarta(char estado[], char codigoCarta[], char nomeCidade[], unsigned long int *qtdHabitantes, float *area, float *pib, int *qtdPontosTuristicos, float *densidadePop, float *pibPerCapita, float *superPoder);
void exibirCarta(char estado[], char codigoCarta[], char nomeCidade[], unsigned long int qtdHabitantes, float area, float pib, int qtdPontosTuristicos, float densidadePop, float pibPerCapita);
void comparaCartas(unsigned long int qtdHabitantes1, unsigned long int qtdHabitantes2, float area1, float area2, float pib1, float pib2, int qtdPontosTuristicos1, int qtdPontosTuristicos2, float densidadePop1, float densidadePop2, float pibPerCapita1, float pibPerCapita2, float superPoder1, float superPoder2);

int main() {
    unsigned long int qtdHabitantes1 = 0, qtdHabitantes2 = 0;
    float superPoder1 = 0.0f, superPoder2 = 0.0f;
    int qtdPontosTuristicos1 = 0, qtdPontosTuristicos2 = 0;
    float area1 = 0.0f, pib1 = 0.0f, densidadePop1 = 0.0f, pibPerCapita1 = 0.0f;
    float area2 = 0.0f, pib2 = 0.0f, densidadePop2 = 0.0f, pibPerCapita2 = 0.0f;
    char estado1[50], codigoCarta1[50], nomeCidade1[50];
    char estado2[50], codigoCarta2[50], nomeCidade2[50];

    printf("Desafio Super Trunfo - Países\n\n");

    printf("Digite os dados da carta 1:\n");
    lerCarta(estado1, codigoCarta1, nomeCidade1, &qtdHabitantes1, &area1, &pib1, &qtdPontosTuristicos1, &densidadePop1, &pibPerCapita1, &superPoder1);
    printf("\nCarta 1:\n");
    exibirCarta(estado1, codigoCarta1, nomeCidade1, qtdHabitantes1, area1, pib1, qtdPontosTuristicos1, densidadePop1, pibPerCapita1);

    printf("\nDigite os dados da carta 2:\n");
    lerCarta(estado2, codigoCarta2, nomeCidade2, &qtdHabitantes2, &area2, &pib2, &qtdPontosTuristicos2, &densidadePop2, &pibPerCapita2, &superPoder2);
    printf("\nCarta 2:\n");
    exibirCarta(estado2, codigoCarta2, nomeCidade2, qtdHabitantes2, area2, pib2, qtdPontosTuristicos2, densidadePop2, pibPerCapita2);

    comparaCartas(qtdHabitantes1, qtdHabitantes2, area1, area2, pib1, pib2, qtdPontosTuristicos1, qtdPontosTuristicos2, densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2);

    return 0;
}

void lerCarta(char estado[], char codigoCarta[], char nomeCidade[], unsigned long int *qtdHabitantes, float *area, float *pib, int *qtdPontosTuristicos, float *densidadePop, float *pibPerCapita, float *superPoder) {
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

    *densidadePop = *qtdHabitantes / *area;
    *pibPerCapita = *pib / *qtdHabitantes;
    *superPoder = *qtdHabitantes + *area + *pib + *qtdPontosTuristicos - *densidadePop + *pibPerCapita;
}

void exibirCarta(char estado[], char codigoCarta[], char nomeCidade[], unsigned long int qtdHabitantes, float area, float pib, int qtdPontosTuristicos, float densidadePop, float pibPerCapita) {
    printf("==================================\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %i\n", qtdHabitantes);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %i\n", qtdPontosTuristicos);
    printf("Densidade populacional: %.2f\n", densidadePop);
    printf("PIB per Capita: %.2f\n", pibPerCapita);
    printf("==================================\n\n");
}

void comparaCartas(unsigned long int qtdHabitantes1, unsigned long int qtdHabitantes2, float area1, float area2, float pib1, float pib2, int qtdPontosTuristicos1, int qtdPontosTuristicos2, float densidadePop1, float densidadePop2, float pibPerCapita1, float pibPerCapita2, float superPoder1, float superPoder2) {
    printf("Comparação de cartas:\n");
    printf("==================================\n");
    printf("População: Carta ");
    if (qtdHabitantes1 > qtdHabitantes2) {
        printf("1 venceu (1)\n");
    } else {
        printf("2 venceu (0)\n");
    }

    printf("Área: Carta ");
    if (area1 > area2) {
        printf("1 venceu (1)\n");
    } else {
        printf("2 venceu (0)\n");
    }

    printf("PIB: Carta ");
    if (pib1 > pib2) {
        printf("1 venceu (1)\n");
    } else {
        printf("2 venceu (0)\n");
    }

    printf("Pontos turísticos: Carta ");
    if (qtdPontosTuristicos1 > qtdPontosTuristicos2) {
        printf("1 venceu (1)\n");
    } else {
        printf("2 venceu (0)\n");
    }

    printf("Densidade populacional: Carta ");
    if (densidadePop1 < densidadePop2) {
        printf("1 venceu (1)\n");
    } else {
        printf("2 venceu (0)\n");
    }

    printf("PIB per Capita: Carta ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("1 venceu (1)\n");
    } else {
        printf("2 venceu (0)\n");
    }

    printf("Super Poder: Carta ");
    if (superPoder1 > superPoder2) {
        printf("1 venceu (1)\n");
    } else {
        printf("2 venceu (0)\n");
    }
    printf("==================================\n\n");
}