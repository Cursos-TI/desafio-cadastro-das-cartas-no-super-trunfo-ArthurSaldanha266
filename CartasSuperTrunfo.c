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


    printf("\nEstado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

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
    
    //carta 2 

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);
    
    return 0;
}
