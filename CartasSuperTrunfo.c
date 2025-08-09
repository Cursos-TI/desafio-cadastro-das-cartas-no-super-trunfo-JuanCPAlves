#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado1[10], estado2[10];
    char codigocarta1[10], codigocarta2[10];
    char nomecidade1[50], nomecidade2[50];
    int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int tur1, tur2;
    
    printf("Inicial do estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigocarta1);

    printf("Nome da Cidade: ");
    scanf("%s", nomecidade1);

    printf("População da cidade: ");
    scanf("%d", &populaçao1);

    printf("Área(em km²): ");
    scanf("%f", &area1);

    printf("PIB(Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos da cidade: ");
    scanf("%d", &tur1);

    printf("\nCarta 1\n");
    printf("Estado: %s\nCódigo: %s\n", estado1, codigocarta1);
    printf("Nome da Cidade: %s\nPopulação: %d\n", nomecidade1, populaçao1);
    printf("Área: %f\nPIB: %f\n", area1, pib1);
    printf("Número de Pontos Turísticos: %d\n\n", tur1);

    return 0;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
