#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    // Variáveis para armazenar as propriedades das cartas

    char codigoA[4], estadoA[3], cidadeA[31], codigoB[4], estadoB[3], cidadeB[31];
    float pibA, pibB, areaA, areaB;
    int populacaoA, populacaoB, pontosTuristicosA, pontosTuristicosB;

    // Variáveis para armazenar as informações da comparação das cartas

    int pontosCartaA, pontosCartaB, densidadePopulacionalA, densidadePopulacionalB; 

    // Cadastro da carta 1

    printf("Digite o código da carta: ");
    scanf("%3s", codigoA);
   
    printf("Digite a sigla do Estado: ");
    scanf("%2s", estadoA);

    printf("Digite o nome da cidade: ");
    scanf("%30s", cidadeA);

    printf("Digite a população: ");
    scanf("%d", &populacaoA);

    printf("Digite o PIB: ");
    scanf("%f", &pibA);

    printf("Digite a area: ");
    scanf("%f", &areaA);

    printf("Digite o total de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA);

    // Exibindo as propriedades da carta 1

    printf("\nInformações da carta 1:\n");
    printf("Código: %s\n", codigoA);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %f\n", areaA);
    printf("PIB: %f\n", pibA);
    printf("Área: %d\n\n", populacaoA);

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

    // Exibindo as propriedades da carta 2

    printf("\nInformações da carta 2:\n");
    printf("Código: %s\n", codigoB);
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %f\n", areaB);
    printf("PIB: %f\n", pibB);
    printf("Área: %d\n\n", populacaoB);

    // Comparação das cartas
    if (populacaoA > populacaoB) {
        pontosCartaA++;
        printf("A cidade 1 tem uma população maior.\n");
    } else if (populacaoB > populacaoA) {
        pontosCartaB++;
        printf("A cidade 2 tem uma população maior.\n");
    } else {
        printf("As duas cidades têm a mesma quantidade de habitantes.\n");
    }

    if (areaA > areaB) {
        pontosCartaA++;
        printf("A cidade 1 tem um território maior.\n");
    } else if (areaB > areaA) {
        pontosCartaB++;
        printf("A cidade 2 tem um território maior.\n");
    } else {
        printf("As duas cidades têm o mesmo tamanho.\n");
    }

    if (pibA > pibB) {
        pontosCartaA++;
        printf("a cidade 1 tem um PIB maior.\n");
    } else if (pibB > pibA) {
        pontosCartaB++;
        printf("A cidade 2 tem um PIB maior.\n");
    } else {
        printf("As duas cidades têm o mesmo valor no PIB.\n");
    }
    
    // Cálculo de densidade populacional

    densidadePopulacionalA = populacaoA / areaA;
    densidadePopulacionalB = populacaoB / areaB;
    
    // Comparação de densidade populacional
    
    if (densidadePopulacionalA < densidadePopulacionalB) {
        pontosCartaA++;
        printf("A cidade 1 tem uma densidade populacional menor.\n");
        
    } else if (densidadePopulacionalB < densidadePopulacionalA) {
        pontosCartaB++;
        printf("A cidade 2 tem uma densidade populacional menor.\n");
    } else {
        printf("As duas cidades têm a mesma densidade populacional.\n");
    }

    // Resultado da comparação

    if (pontosCartaA > pontosCartaB) {
        printf("\nA cidade vencedora é: %s, com %d pontos.\n", cidadeA, pontosCartaA);
    } else if (pontosCartaB > pontosCartaA) {
        printf("\nA cidade vencedora é: %s, com %d pontos.\n", cidadeB, pontosCartaB);
    } else {
        printf("\nHouve um empate entre as cidades. A pontuação de cada cidade foi: %d.\n", pontosCartaA);
    }

    return 0;
}
