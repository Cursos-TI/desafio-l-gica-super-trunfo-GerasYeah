#include <stdio.h>

/* Desafio Cartas Super Trunfo - Países
 * Introdução à programação de Computadores (Prof. Sérgio Cardoso)
 * Desenvolvido por Geras
*/

int main() {

    // Variáveis para armazenar as propriedades das cartas

    char codigoA[4], estadoA[3], cidadeA[31];
    char codigoB[4], estadoB[3], cidadeB[31];

    float pibA, pibB;
    float areaA, areaB;

    int populacaoA, populacaoB;
    int pontosTuristicosA, pontosTuristicosB;

    float densidadePopulacionalA, densidadePopulacionalB;
    float pibPerCapitaA, pibPerCapitaB;

    // Cadastro da carta 1

    printf("Digite o código da carta: ");
    scanf("%3s", codigoA);
   
    printf("Digite a sigla do Estado: ");
    scanf("%2s", estadoA);

    printf("Digite o nome da cidade: ");
    scanf("%30s", cidadeA);

    printf("Digite o total de habitantes: ");
    scanf("%d", &populacaoA);

    printf("Digite o PIB: ");
    scanf("%f", &pibA);

    printf("Digite a área territorial: ");
    scanf("%f", &areaA);

    printf("Digite o total de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA);

    // Cálculo do PIB per capita da carta 1

    pibPerCapitaA = pibA / populacaoA;

    // Cálculo de densidade populacional da carta 1

    densidadePopulacionalA = populacaoA / areaA;

    // Exibindo as propriedades da carta 1

    printf("\nInformações da carta 1:\n");
    printf("Código: %s\n", codigoA);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %f\n", areaA);
    printf("PIB: %f\n", pibA);
    printf("Pontos turísticos: %d\n", pontosTuristicosA);
    printf("PIB per capita: %d\n", pibPerCapitaA);
    printf("Densidade populacional: %d\n\n", densidadePopulacionalA);

    // Cadastro da carta 2

    printf("Digite o código da carta 2: ");
    scanf("%3s", codigoB);
   
    printf("Digite a sigla do Estado: ");
    scanf("%2s", estadoB);

    printf("Digite o nome da cidade: ");
    scanf("%30s", cidadeB);

    printf("Digite a população: ");
    scanf("%d", &populacaoB);

    printf("Digite o PIB: ");
    scanf("%f", &pibB);

    printf("Digite a area: ");
    scanf("%f", &areaB);

    printf("Digite o total de pontos turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Cálculo do PIB per capita da carta 2

    pibPerCapitaB = pibB / populacaoB;

    // Cálculo de densidade populacional da carta 2

    densidadePopulacionalB = populacaoB / areaB;

    // Exibindo as propriedades da carta 2

    printf("\nInformações da carta 2:\n");
    printf("Código: %s\n", codigoB);
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %f\n", areaB);
    printf("PIB: %f\n", pibB);
    printf("Pontos turísticos: %d\n", pontosTuristicosB);
    printf("PIB per capita: %d\n", pibPerCapitaB);
    printf("Densidade populacional: %d\n\n", densidadePopulacionalB);

}