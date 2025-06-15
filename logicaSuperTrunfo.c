#include <stdio.h>
#include <string.h>

int main() {
    char estado[3], estado2[3], codigo[4], codigo2[4], cidade[20], cidade2[20];
    int pontos, pontos2;
    long int populacao, populacao2; 
    float area, area2, pib, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Carta 1
    printf("Carta 1\n");
    printf("Estado: "); scanf("%2s", estado);
    printf("Código da carta: "); scanf("%3s", codigo);
    printf("Nome da cidade: "); scanf("%19s", cidade);
    printf("População: "); scanf("%ld", &populacao);
    printf("Área: "); scanf("%f", &area);
    printf("PIB: "); scanf("%f", &pib);
    printf("N° de pontos turísticos: "); scanf("%d", &pontos);

    densidade1 = populacao / area;
    pibpercapita1 = pib / populacao;

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    // Carta 2
    printf("\nCarta 2\n");
    printf("Estado: "); scanf("%2s", estado2);
    printf("Código da carta: "); scanf("%3s", codigo2);
    printf("Nome da cidade: "); scanf("%19s", cidade2);
    printf("População: "); scanf("%ld", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("N° de pontos turísticos: "); scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    printf("\n--- Comparação de cartas ---\n");
    //População
    printf("\n---\n");
    printf("Carta 1 - População: %1d\n", populacao);
    printf("Carta 2 - População: %1d\n", populacao2);
    if ( populacao > populacao2 )  {
    printf("Resultado: Carta 1 venceu!\n");
    } else {
    printf("Resultado: Carta 2 venceu!\n");
    }
    //Área
    printf("\n---\n");
    printf("Carta 1 - Área: %.2f\n", area);
    printf("Carta 2 - Área: %.2f\n", area2);
    if ( area > area2 )  {
    printf("Resultado: Carta 1 venceu!\n");
    } else {
    printf("Resultado: Carta 2 venceu!\n");
    }
    //PIB
    printf("\n---\n");
    printf("Carta 1 - PIB: %.2f\n", pib);
    printf("Carta 2 - PIB: %.2f\n", pib2);
    if ( pib > pib2 )  {
    printf("Resultado: Carta 1 venceu!\n");
    } else {
    printf("Resultado: Carta 2 venceu!\n");
    }
    //Pontos turísticos
    printf("\n---\n");
    printf("Carta 1 - Pontos turísticos: %d\n", pontos);
    printf("Carta 2 - Pontos turísticos: %d\n", pontos2);
    if ( pontos > pontos2 )  {
    printf("Resultado: Carta 1 venceu!\n");
    } else {
    printf("Resultado: Carta 2 venceu!\n");
    }
    //Densidade populacional 
    printf("\n---\n");
    printf("Carta 1 - Densidade populacional: %.2f\n", densidade1);
    printf("Carta 2 - Densidade populacional: %.2f\n", densidade2);
    if ( densidade1 < densidade2 )  {
    printf("Resultado: Carta 1 venceu!\n");
    } else {
    printf("Resultado: Carta 2 venceu!\n");
    }
    //PIB per capita
    printf("\n---\n");
    printf("Carta 1 - PIB per capita: %.2f\n", pibpercapita1);
    printf("Carta 2 - PIB per capita: %.2f\n", pibpercapita2);
    if ( pibpercapita1 > pibpercapita2 )  {
    printf("Resultado: Carta 1 venceu!\n");
    } else {
    printf("Resultado: Carta 2 venceu!\n");
    }
    
    return 0;
}