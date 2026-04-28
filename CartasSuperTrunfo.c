#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

    int população, turismo, carta;
    float area, pib; 
    char estado[50], cidade[50], codigo[5];

  // Área para entrada de dados
  
    printf("Digite o Numero da Carta: \n");
    scanf("%d", &carta);

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Codigo: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Número da população: \n");
    scanf("%d", &população);

    printf("Área (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);
  
  // Área para exibição dos dados da cidade

      printf("Numero da carta: %d\n - Nome do Estado: %s\n - Código: %s\n - Nome da cidade: %s\n - Número da população: %d\n - Área (em km²): %f\n - PIB: %f\n - Número de pontos turisticos: %d ", carta, estado, codigo, cidade, população, area, pib, turismo);

return 0;
} 
