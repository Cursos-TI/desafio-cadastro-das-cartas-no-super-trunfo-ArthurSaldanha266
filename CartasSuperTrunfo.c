#include <stdio.h>

int main() {

            //carta 1
    char estado;
    char codigo_da_carta[100];
    char cidade[90];
    int populacao;
    float area;
    float pib;
    int turistico;

    float densidade_populacional;
    float pib_per_capita;

    
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
    

    printf("\nEstado: %c\n", estado);
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
    
    return 0;
}
