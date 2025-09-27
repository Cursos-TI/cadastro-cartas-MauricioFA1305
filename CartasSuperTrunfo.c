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

printf("Carta 1:\n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigoCarta1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontoTuristicos1);

printf("\nCarta 2:\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigoCarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontoTuristicos2);


return 0;
} 
