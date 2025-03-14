#include <stdio.h>

int main() {

    // Carta 1
    char estado;
    char codigo_da_carta[100];
    char cidade[90];
    int populacao;
    float area;
    float pib;
    int turistico;

    float densidade_populacional;
    float pib_per_capita;
    float super_poder;

    printf("Digite seu estado de A até H: ");
    scanf(" %c", &estado); 

    printf("Digite o codigo da carta (ex: A01, G04...): ");
    scanf("%99s", codigo_da_carta); 

    printf("Digite o nome da sua cidade: ");
    scanf("%89s", cidade); 

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao); 

    printf("Digite a área: ");
    scanf("%f", &area); 

    printf("Digite o PIB: ");
    scanf("%f", &pib); 

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico); 

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    super_poder = (float)populacao + area + pib + turistico + pib_per_capita + (1 / densidade_populacional);
    
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

    printf("\nAgora, vamos dar uma olhada nos números interessantes sobre %s:\n", cidade);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", cidade, densidade_populacional);
    printf("Ou seja, em média, há %.2f pessoas em cada quilômetro quadrado de %s.\n", densidade_populacional, cidade);
    printf("O PIB per capita de %s é de R$ %.2f por pessoa.\n", cidade, pib_per_capita);
    printf("Isso significa que, em média, cada morador de %s teria aproximadamente esse valor de riqueza gerada em sua cidade.\n", cidade);

    printf("O Super Poder de %s é: %.2f\n", cidade, super_poder);

    // Carta 2
    printf("\n--- Coleta de Dados para a Segunda Carta ---\n");
    printf("Digite seu estado de A até H: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01, G04...): ");
    scanf("%99s", codigo_da_carta);

    printf("Digite o nome da sua cidade: ");
    scanf("%89s", cidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico);

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    super_poder = (float)populacao + area + pib + turistico + pib_per_capita + (1 / densidade_populacional);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

    printf("\nAgora, vamos dar uma olhada nos números interessantes sobre %s:\n", cidade);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", cidade, densidade_populacional);
    printf("Ou seja, em média, há %.2f pessoas em cada quilômetro quadrado de %s.\n", densidade_populacional, cidade);
    printf("O PIB per capita de %s é de R$ %.2f por pessoa.\n", cidade, pib_per_capita);
    printf("Isso significa que, em média, cada morador de %s teria aproximadamente esse valor de riqueza gerada em sua cidade.\n", cidade);

    printf("O Super Poder de %s é: %.2f\n", cidade, super_poder);

    printf("\n--- Comparações das Cartas ---\n");

    printf("População: Carta 1 venceu (%d)\n", (populacao > 0) ? 1 : 0);
    printf("Área: Carta 1 venceu (%d)\n", (area > 0) ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", (pib > 0) ? 1 : 0);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", (turistico > 0) ? 1 : 0);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade_populacional < densidade_populacional) ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita > 0) ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder > super_poder) ? 1 : 0);
    
    return 0;
}
