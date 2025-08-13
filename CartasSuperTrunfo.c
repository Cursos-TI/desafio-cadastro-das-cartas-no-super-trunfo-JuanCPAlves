#include <stdio.h>

int main() {
    //Criação de variáveis do Nível Novato
    char estado1[10], estado2[10];
    char codigocarta1[10], codigocarta2[10];
    char nomecidade1[51], nomecidade2[51];
    int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int tur1, tur2;

    
    
    //Criação da primeira carta do jogo.
    printf("Cadastro de cartas(1)\n\nEstado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigocarta1);

    printf("Nome da Cidade: ");
    scanf(" %50[^\n]", nomecidade1);

    printf("População da cidade: ");
    scanf("%d", &populaçao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB(Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos da cidade: ");
    scanf("%d", &tur1);

    //Criação da segunda carta do jogo.
    printf("\n\nCadastro de cartas(2)\n\nEstado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigocarta2);

    printf("Nome da Cidade: ");
    scanf(" %50[^\n]", nomecidade2);

    printf("População da cidade: ");
    scanf("%d", &populaçao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB(Produto Interno Bruto): ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos da cidade: ");
    scanf("%d", &tur2);

    //Criação de variáveis do Nível Aventureiro
    float densid1 = (float) populaçao1 / area1;
    float densid2 = (float) populaçao2 / area2;
    
    float PIBpc1  = (float) pib1 / populaçao1;
    float PIBpc2  = (float) pib2 / populaçao2;
    
    //informações da primeira carta a serem exibidas na tela.
    printf("\nCarta 1\n");
    printf("Estado: %s\nCódigo: %s\n", estado1, codigocarta1);
    printf("Nome da Cidade: %s\nPopulação: %d\n", nomecidade1, populaçao1);
    printf("Área: %.2f km²\nPIB: %.2f reais\n", area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    printf("Densidade Populacional : %.2f hab/km²\n", densid1); //Info extra
    printf("PIB per Capita: %.2f reais\n\n", PIBpc1); //Info extra
    
    //informações da segunda carta a serem exibidas na tela.
    printf("Carta 2\n");
    printf("Estado: %s\nCódigo: %s\n", estado2, codigocarta2);
    printf("Nome da Cidade: %s\nPopulação: %d\n", nomecidade2, populaçao2);
    printf("Área: %.2f km²\nPIB: %.2f reais\n", area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);
    printf("Densidade Populacional : %.2f hab/km²\n", densid2); //Info extra
    printf("PIB per Capita: %.2f reais\n\n", PIBpc2); //Info extra

    return 0;
}
