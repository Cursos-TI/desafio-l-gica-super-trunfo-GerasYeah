#include <stdio.h>

/* Desafio Cartas Super Trunfo - Países
 * Introdução à programação de Computadores (Prof. Sérgio Cardoso)
 * Desenvolvido por Geras
 */

// Variáveis para armazenar as propriedades das cartas
char codigoA[3], estadoA[2], cidadeA[21];
char codigoB[3], estadoB[2], cidadeB[21];

unsigned long int populacaoA, populacaoB;
int pontosTuristicosA, pontosTuristicosB;

float pibA, pibB;
float areaA, areaB;

float densidadePopulacionalA, densidadePopulacionalB;
float pibPerCapitaA, pibPerCapitaB;
float superPoderA, superPoderB;

// Métodos/funções
float calcularPibPerCapita(float pib, int populacao)
{
    float pibPerCapita = pib / populacao;
    return pibPerCapita;
}

float calcularDensidadePopulacional(float populacao, int area)
{
    float densidadePopulacional = populacao / area;
    return densidadePopulacional;
}

float calcularSuperPoder(unsigned long int populacao, int pontosTuristicos, float area, float pib, float pibPerCapita, float densidadePopulacional)
{
    // Inverter o valor da densidade populacional
    float densidadePopulacionalInvertida;
    if (densidadePopulacional > 0)
    {
        densidadePopulacionalInvertida = 1.0 / densidadePopulacional;
    }
    // Somar todos os valores e retornar
    float superPoder = populacao + pontosTuristicos + area + pib + pibPerCapita + densidadePopulacionalInvertida;
    return superPoder;
}

void imprimirComparacao(char propriedade[], int resultado)
{
    // Exibir a comparação de um atributo específico
    int cartaVencedora = resultado == 1 ? 1 : 2;
    printf("%s: A carta %d venceu! (%d)\n", propriedade, cartaVencedora, resultado);
}

void compararCartas()
{
    // Comparar e exibir atributos um por um
    imprimirComparacao("População", populacaoA > populacaoB);
    imprimirComparacao("Área", areaA > areaA);
    imprimirComparacao("PIB", pibA > pibB);
    imprimirComparacao("Pontos turísticos", pontosTuristicosA > pontosTuristicosB);
    imprimirComparacao("Densidade populacional", densidadePopulacionalA < densidadePopulacionalB);
    imprimirComparacao("PIB per Capita", pibPerCapitaA > pibPerCapitaB);
    imprimirComparacao("Super Poder", superPoderA > superPoderB);
}

int main()
{
    // Cadastrar carta 1
    printf("Digite a letra do Estado (de A a H): ");
    scanf("%1s", estadoA);

    printf("Digite o código da carta 2 (de 01 a 04): ");
    scanf("%2s", codigoA);

    printf("Digite o nome da cidade: ");
    scanf("%20s", cidadeA);

    printf("Digite o total de habitantes: ");
    scanf("%ld", &populacaoA);

    printf("Digite o PIB: ");
    scanf("%f", &pibA);

    printf("Digite a área territorial: ");
    scanf("%f", &areaA);

    printf("Digite o total de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA);

    // Calcular PIB per Capita, densidade populacional e super poder da carta 1
    pibPerCapitaA = calcularPibPerCapita(pibA, populacaoA);
    densidadePopulacionalA = calcularDensidadePopulacional(populacaoA, areaA);
    superPoderA = calcularSuperPoder(populacaoA, pontosTuristicosA, areaA, pibA, pibPerCapitaA, densidadePopulacionalA);

    // Exibir as propriedades da carta 1
    printf("\nInformações da carta 1:\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s%s\n", estadoA, codigoA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %ld\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Pontos turísticos: %d\n", pontosTuristicosA);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaA);
    printf("Densidade populacional: %.2f habitantes/km²\n\n", densidadePopulacionalA);

    // Cadastrar carta 2
    printf("Digite a letra do Estado (de A a H): ");
    scanf("%1s", estadoB);

    printf("Digite o código da carta 2 (de 01 a 04): ");
    scanf("%2s", codigoB);

    printf("Digite o nome da cidade: ");
    scanf("%20s", cidadeB);

    printf("Digite a população: ");
    scanf("%ld", &populacaoB);

    printf("Digite o PIB: ");
    scanf("%f", &pibB);

    printf("Digite a área territorial: ");
    scanf("%f", &areaB);

    printf("Digite o total de pontos turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Calcular PIB per Capita, densidade populacional e super poder da carta 2
    pibPerCapitaB = calcularPibPerCapita(pibB, populacaoB);
    densidadePopulacionalB = calcularDensidadePopulacional(populacaoB, areaB);
    superPoderB = calcularSuperPoder(populacaoB, pontosTuristicosB, areaB, pibB, pibPerCapitaB, densidadePopulacionalB);

    // Exibir as propriedades da carta 2
    printf("\nInformações da carta 2:\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s%s\n", estadoB, codigoB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %ld\n", populacaoB);
    printf("Área: %.2f km² \n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Pontos turísticos: %d\n", pontosTuristicosB);
    printf("PIB per Capita: %.2f reais \n", pibPerCapitaB);
    printf("Densidade populacional: %.2f habitantes/km²\n\n", densidadePopulacionalB);

    // Exibir a comparação após o fim do registro das cartas
    compararCartas();
}