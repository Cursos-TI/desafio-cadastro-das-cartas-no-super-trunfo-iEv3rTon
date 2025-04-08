#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*
        Primeira carta
    */
    char estado = "A";
    char codigo[3] = "A01";
    char nomeDaCidade[20] = "default";
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int numeroPontosTuristicos = 0;
    /*
        Segunda carta
    */
    char estado2[1] = "B";
    char codigo2[3] = "B01";
    char nomeDaCidade2[20] = "default";
    int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int numeroPontosTuristicos2 = 0;

    printf("\n\n-=-=-=-Super Trunfo-=-=-=-\n\n");
    printf("Insira os dados de duas cartas do Super Trunfo\n");
    printf("Comecando pela primeira carta:\n");

    /*
        Obter dados primeira carta
    */
    printf("- ESTADO: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%c", &estado);
    printf("- CODIGO DA CARTA: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", &codigo);
    printf("- NOME DA CIDADE: \n");
    scanf("%s", &nomeDaCidade);
    printf("- POPULACAO: \n");
    scanf("%d", &populacao);
    printf("- AREA: A área da cidade em quilômetros quadrados\n");
    scanf("%f", &area);
    printf("- PIB: \n");
    scanf("%f", &pib);
    printf("- NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("\n-----\n");
    /*
        Obter dados segunda carta
    */
    printf("Segunda carta:\n");
    printf("- ESTADO: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%s", &estado2);
    printf("- CODIGO DA CARTA: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", &codigo2);
    printf("- NOME DA CIDADE: \n");
    scanf("%s", &nomeDaCidade2);
    printf("- POPULACAO: \n");
    scanf("%d", &populacao2);
    printf("- AREA: A área da cidade em quilômetros quadrados\n");
    scanf("%f", &area2);
    printf("- PIB: \n");
    scanf("%f", &pib2);
    printf("- NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &numeroPontosTuristicos2);

    /*
        Mostar cartas
    */
    printf("\n-----\n");
    printf("Carta 1: \nEstado: %c \nCodigo: %s \nNome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f \nNumero De Pontos Turisticos: %d", estado, codigo, nomeDaCidade, populacao, area, pib, numeroPontosTuristicos);
    printf("\n-----\n");
    printf("Carta 2: \nEstado: %s \nCodigo: %s \nNome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f \nNumero De Pontos Turisticos: %d", estado2, codigo2, nomeDaCidade2, populacao2, area2, pib2, numeroPontosTuristicos2);
    printf("\n-----\n");

    return 0;
}
