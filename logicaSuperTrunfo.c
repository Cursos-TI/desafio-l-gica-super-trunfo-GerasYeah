#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    // Variáveis para armazenar as propriedades das cartas

    char codigoA[4], estadoA[3], cidadeA[31];
    char codigoB[4], estadoB[3], cidadeB[31];

    float pibA, pibB;
    float areaA, areaB;

    int populacaoA, populacaoB;
    int pontosTuristicosA, pontosTuristicosB;

    // Variáveis para armazenar as informações da comparação das cartas

    int pontosCartaA, pontosCartaB;
    int densidadePopulacionalA, densidadePopulacionalB;
    int pibPerCapitaA, pibPerCapitaB;

    // Cadastro da carta 1

    printf("Digite o código da carta: ");
    scanf("%3s", codigoA);
   
    printf("Digite a sigla do Estado: ");
    scanf("%2s", estadoA);

    printf("Digite o nome da cidade: ");
    scanf("%30s", cidadeA);

    printf("Digite o total de habitantes: ");
    scanf("%d", &populacaoA);

    printf("Digite o PIB (Produto Interno Bruto): ");
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
    printf("Densidade: %d\n\n", densidadePopulacionalA);

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
    printf("Densidade: %d\n\n", densidadePopulacionalB);

    // Comparação do total de habitantes
    
    if (populacaoA > populacaoB) {
        pontosCartaA++;
        printf("A cidade 1 tem uma população maior.\n");
    } else if (populacaoB > populacaoA) {
        pontosCartaB++;
        printf("A cidade 2 tem uma população maior.\n");
    } else {
        printf("As duas cidades têm a mesma quantidade de habitantes.\n");
    }

   // Comparação da área territorial

    if (areaA > areaB) {
        pontosCartaA++;
        printf("A cidade 1 tem um território maior.\n");
    } else if (areaB > areaA) {
        pontosCartaB++;
        printf("A cidade 2 tem um território maior.\n");
    } else {
        printf("As duas cidades têm o mesmo tamanho.\n");
    }

    // Comparação do Produto Interno Bruto (PIB)

    if (pibA > pibB) {
        pontosCartaA++;
        printf("a cidade 1 tem um PIB maior.\n");
    } else if (pibB > pibA) {
        pontosCartaB++;
        printf("A cidade 2 tem um PIB maior.\n");
    } else {
        printf("As duas cidades têm o mesmo valor no PIB.\n");
    }
    
    // Comparação dos pontos turísticos

    if (pontosTuristicosA > pontosTuristicosB) {
        pontosCartaA++;
        printf("a cidade 1 tem mais pontos turísticos.\n");
    } else if (pontosTuristicosB > pontosTuristicosA) {
        pontosCartaB++;
        printf("A cidade 2 tem mais pontos turísticos.\n");
    } else {
        printf("As duas cidades têm a mesma quantidade de pontos turísticos.\n");
    }

     // Comparação do PIB per capita

    if (pibPerCapitaA > pibPerCapitaB) {
        pontosCartaA++;
        printf("A cidade 1 tem o PIB per capita maior.\n");
        
    } else if (pibPerCapitaB > pibPerCapitaA) {
        pontosCartaB++;
        printf("A cidade 2 tem o PIB per capita maior.\n");
    } else {
        printf("As duas cidades têm o mesmo PIB per capita.\n");
    }
    
    // Comparação da densidade populacional
    
    if (densidadePopulacionalA < densidadePopulacionalB) {
        pontosCartaA++;
        printf("A cidade 1 tem uma densidade populacional menor.\n");
        
    } else if (densidadePopulacionalB < densidadePopulacionalA) {
        pontosCartaB++;
        printf("A cidade 2 tem uma densidade populacional menor.\n");
    } else {
        printf("As duas cidades têm a mesma densidade populacional.\n");
    }

    // Resultado da comparação entre as duas cidades

    if (pontosCartaA > pontosCartaB) {
        printf("\nA cidade vencedora é: %s, com %d pontos.\n", cidadeA, pontosCartaA);
    } else if (pontosCartaB > pontosCartaA) {
        printf("\nA cidade vencedora é: %s, com %d pontos.\n", cidadeB, pontosCartaB);
    } else {
        printf("\nHouve um empate entre as cidades. A pontuação de cada uma foi: %d.\n", pontosCartaA);
    }

    return 0;
}
