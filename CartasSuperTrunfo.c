#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado;
    char codigo[3];
    char nome[20];
    int populacao, pontos_turisticos;
    float pib, area;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Estado: ");
    scanf("%c", &estado);
    
    printf("Código da carta: ");
    scanf("%s", &codigo);
    
    printf("Nome da cidade: ");
    scanf("%s", &nome);
    
    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turisticos: %d", pontos_turisticos);

    return 0;
}
