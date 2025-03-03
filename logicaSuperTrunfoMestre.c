#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Mestre)
// Introdução à programação de Computadores (Prof. Sérgio Cardoso)
// Desenvolvido por Geras

// Métodos globais

int solicitarOpcao();
void exibirMenuPrincipal(int repetirOpcoes);
void jogar();
void ajuda();
void sair();

void cadastrarCarta(char carta[], char *codigo, char *cidade, char *estado, float pib, float area, int populacao, int pontosTuristicos, int densidadePopulacional, int pibPerCapita);
void exibirCarta(char carta[], char *codigo, char *cidade, char *estado, float pib, float area, int populacao, int pontosTuristicos, int densidadePopulacional, int pibPerCapita);

void exibirMenuDeComparacao();
void duelarCartas();

// Variáveis globais para armazenar informações das cartas

char codigoA[4], estadoA[3], cidadeA[31];
char codigoB[4], estadoB[3], cidadeB[31];

float pibA, pibB;
float areaA, areaB;

int populacaoA, populacaoB;
int pontosTuristicosA, pontosTuristicosB;

// Variáveis para armazenar as informações da comparação das cartas

int densidadePopulacionalA, densidadePopulacionalB;
int pibPerCapitaA, pibPerCapitaB;


int main() {
    exibirMenuPrincipal(0);
}

int solicitarOpcao() {
    int opcao;

    printf("\nSelecione uma opção: ");
    scanf("%d", &opcao);

    return opcao;
}

void exibirMenuPrincipal(int repetirOpcoes) {
    
    if (repetirOpcoes == 0) {
        printf("\nSUPER TRUNFO: PAÍSES!\n");
    } else {
        printf("Nenhuma opção selecionada.\n");
    }
    
    printf("1. Jogar\n");
    printf("2. Ajuda\n");
    printf("3. Sair\n");

    int opcao = solicitarOpcao();


    switch(opcao) {
        case 1:
        jogar();
        break;
        case 2:
        ajuda();
        break;
        case 3:
        sair();
        break;
        default:
        exibirMenuPrincipal(1);
        break;
    }
}

void jogar() {

    printf("\nPARTIDA DE SUPER TRUNFO!\n");

    printf("1. Cadastrar carta A\n");
    printf("2. Cadastrar carta B\n");
    printf("3. Exibir carta A\n");
    printf("4. Exibir carta B\n");
    printf("5. Duelar cartas\n");
    printf("6. Comparar cartas\n");
    printf("0. Voltar ao menu principal\n");

    int opcao = solicitarOpcao();

    switch (opcao) {
        case 1:
        cadastrarCarta("A", codigoA, cidadeA, estadoA, pibA, areaA, populacaoA, pontosTuristicosA, densidadePopulacionalA, pibPerCapitaA);
        break;
        case 2:
        cadastrarCarta("B", codigoB, cidadeB, estadoB, pibB, areaB, populacaoB, pontosTuristicosB, densidadePopulacionalB, pibPerCapitaB);
        break;
        case 3:
        exibirCarta("A", codigoA, cidadeA, estadoA, pibA, areaA, populacaoA, pontosTuristicosA, densidadePopulacionalA, pibPerCapitaA);
        break;
        case 4:
        exibirCarta("B", codigoB, cidadeB, estadoB, pibB, areaB, populacaoB, pontosTuristicosB, densidadePopulacionalB, pibPerCapitaB);
        break;
        case 5:
        break;
        case 6:
        exibirMenuDeComparacao();
        break;
        case 0:
        exibirMenuPrincipal(0);
        break;
        default:
        jogar();
        break;
    }
}

void ajuda() {

}

void sair() {
    printf("Programa encerrado.");
}

void cadastrarCarta(char carta[], char *codigo, char *cidade, char *estado, float pib, float area, int populacao, int pontosTuristicos, int densidadePopulacional, int pibPerCapita) {

    // Solicitar informações da carta

    printf("CADASTRAR CARTA %s\n", carta);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo);
    
    printf("Digite a sigla do Estado (ex: SP): ");
    scanf("%2s", estado);
 
    printf("Digite o nome da cidade: ");
    scanf("%30s", cidade);
 
    printf("Digite o total de habitantes: ");
    scanf("%d", &populacao);
 
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib);
 
    printf("Digite a área territorial: ");
    scanf("%f", &area);
 
    printf("Digite o total de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    
    // Cálculo do PIB per capita e da densidade populacional
 
    pibPerCapita = pib / populacao;
    densidadePopulacional = populacao / area;
 
    // Exibir as informações da carta logo pós

    exibirCarta(carta, codigo, cidade, estado, pib, area, populacao, pontosTuristicos, densidadePopulacional, pibPerCapita);

}

void exibirCarta(char carta[], char *codigo, char *cidade, char *estado, float pib, float area, int populacao, int pontosTuristicos, int densidadePopulacional, int pibPerCapita) {
    
    // Verificar se a carta já foi cadastrada
    
    if (populacao == 0 && area == 0 && pib == 0 && pontosTuristicos == 0 && densidadePopulacional == 0 && pibPerCapita == 0) {

        // Exibir um menu de opções

        printf("\nA CARTA %s NÃO FOI CADASTRADA!\n", carta);
        printf("1. Cadastrar carta %s\n", carta);
        printf("2. Voltar ao Super Trunfo\n");
        printf("0. Sair para o menu principal\n");

        int opcao = solicitarOpcao();

        switch(opcao) {
            case 1:
            cadastrarCarta(carta, codigo, cidade, estado, pib, area, populacao, pontosTuristicos, densidadePopulacional, pibPerCapita);
            break;
            case 2:
            jogar();
            break;
            default:
            exibirMenuPrincipal(0);
            break;
        }
    } else {

        // Exibir as informações da carta

        printf("\nINFORMAÇÕES DA CARTA %s:\n", carta);
        printf("Código: %s\n", codigo);
        printf("Estado: %s\n", estado);
        printf("Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Pontos turísticos: %d\n", pontosTuristicos);
        printf("PIB per capita: %d\n", pibPerCapita);
        printf("Densidade populacional: %d\n\n", densidadePopulacional);
    }

}

void duelarCartas() {

}

void exibirMenuDeComparacao() {

    // Exibir um menu de opções

    printf("\nCOMPARAÇÃO DE CARTAS!\n");
    printf("1. Todos os atributos\n");
    printf("2. Comparar População\n");
    printf("3. Comparar Área\n");
    printf("4. Comparar PIB\n");
    printf("5. Comparar PIB Per Capita\n");
    printf("6. Comparar Pontos Turísticos\n");
    printf("7. Comparar Densidade Populacional\n");
    printf("8. Voltar ao Super Trunfo\n");
    printf("0. Sair para o menu principal\n");

    int opcao = solicitarOpcao();

    switch(opcao) {
        default:
        jogar();
        break;
    }
}