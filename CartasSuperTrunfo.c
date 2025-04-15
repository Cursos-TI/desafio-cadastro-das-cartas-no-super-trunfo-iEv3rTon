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
        Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
        
        Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
        
        Nome da Cidade: O nome da cidade. Tipo: char[] (string)
        
        População: O número de habitantes da cidade. Tipo: int
        
        Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
        
        PIB: O Produto Interno Bruto da cidade. Tipo: float
        
        Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
        
    */
    
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigoDaCidade1[4]; // 3 caracteres + '\0'
    char nomeDaCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigoDaCidade2[4];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /*
     * Entrada de dados da Carta 1
     */
     printf("Cadastro da Carta 1\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigoDaCidade1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeDaCidade1); //  %[^\n] permite ler nomes com espaços

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    /*
     * Entrada de dados da Carta 2
     */
    printf("\nCadastro da Carta 2\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B03): ");
    scanf("%s", codigoDaCidade2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    
    printf("----------------");
    /*
        Carta 1:
        Estado: A
        Código: A01
        Nome da Cidade: São Paulo
        População: 12325000
        Área: 1521.11 km²
        PIB: 699.28 bilhões de reais
        Número de Pontos Turísticos: 50
    */
    printf("CARTAS REGISTRADAS");
    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCidade1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCidade2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("----------------");

    return 0;
}
