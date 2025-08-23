#include <stdio.h>

int main() {

    // Declaração Carta 1
    
    char estado1; // Char Variáveis tipo caracter
    char codigo1[4];  // Nesse caso com 4 espaços na memória, cabendo até 4 caracteres à receber
    char cidade1[50];

    int populacao1; //Variáveis int do tipo à receber números inteiros
    int pontos_turisticos1;

    float area1; //Variáveis float (pto flutuante) do tipo à receber números c casas decimais
    float pib1;
  

    // Declaração Carta 2
    
    char estado2; 
    char codigo2[4];
    char cidade2[50]; 

    int populacao2;
    int pontos_turisticos2;

    float area2;
    float pib2;

    // Leitura Carta 1

    printf("Carta 1:\n"); //printf : código que mostra na tela (\n pula linha)
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1); /*scanf códico que permite o usuário fazer entrada de dados para
    variável pré declarada (estado1) com & antes para não ocupar a memória à ser recebida
    e o espaço antes de %c para não reconhecer espaços da digitação à ser entrada   */

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê a linha inteira com espaços

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura Carta 2
    
    printf("\nCarta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da Carta 1
    
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}