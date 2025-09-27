#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1,estado2;
  char codigoCarta1[], nomeCidade1[], codigoCarta2[], nomeCidade2[];
  int populacao1, pontoTuristicos1, populacao2, pontoTuristicos2;
  float area1, pib1, area2, pib2;


  // Área para entrada de dados
printf("Digite as informações da carta 1 \n");

printf("Digite o estado da carta 1 \n");
scanf("%s", &estado1);
printf("Digite o codigo da carta 1 \n");
scanf("%s", &codigoCarta1);
printf("Digite o nome da cidade da carta 1 \n");
scanf("%s", &nomeCidade1);
printf("Digite a população da carta 1 \n");
scanf("%d", &populacao1);
printf("Digite a area da carta 1 \n");
scanf("%f", &area1);
printf("Digite o pib da carta 1 \n");
scanf("%f", &pib1);
printf("Digite o numero de pontos turisticos da carta 1 \n");
scanf("%d", &pontoTuristicos1);

printf("Digite as informações da carta 2 \n");

printf("Digite o estado da carta 2 \n");
scanf("%s", &estado2);
printf("Digite o codigo da carta 2 \n");
scanf("%s", &codigoCarta2);
printf("Digite o nome da cidade da carta 2 \n");
scanf("%s", &nomeCidade2);
printf("Digite a população da carta 2 \n");
scanf("%d", &populacao2);
printf("Digite a area da carta 2 \n");
scanf("%f", &area2);
printf("Digite o pib da carta 2 \n");
scanf("%f", &pib2);
printf("Digite o numero de pontos turisticos da carta 2 \n");
scanf("%d", &pontoTuristicos2);
  // Área para exibição dos dados da cidade

printf("Carta 1: \n")
printf("Estado: %s", estado1 "\n")
printf("Codigo: %s", codigoCarta1 "\n")
printf("Nome da Cidade: %s", nomeCidade1" \n")
printf("População: %d", populacao1 "\n")
printf("Área: %f", area1 "\n")
printf("PIB: %f", pib1 "\n")
printf("Números de Pontos Túristicos: %d", pontoTuristicos1 "\n")


printf("Carta 1: \n")
printf("Estado: %s", estado2 "\n")
printf("Codigo: %s", codigoCarta2 "\n")
printf("Nome da Cidade: %s", nomeCidade2" \n")
printf("População: %d", populacao2 "\n")
printf("Área: %f", area2 "\n")
printf("PIB: %f", pib2 "\n")
printf("Números de Pontos Túristicos: %d", pontoTuristicos2 "\n")


return 0;
} 
