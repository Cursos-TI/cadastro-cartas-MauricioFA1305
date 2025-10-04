#include <stdio.h>

int main() {
    // Variáveis
    char nomePais1[100];
    char nomePais2[100];
    int pontoTuristicos1, pontoTuristicos2;
    long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    float capita1, capita2, densidade1, densidade2;

    int escolha1, escolha2; // escolhas do menu
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma1, soma2;

    // Entrada de dados - Carta 1
    printf("Digite as informações da carta 1 \n");

    printf("Digite o nome do país da carta 1: \n");
    scanf(" %[^\n]", nomePais1);

    printf("Digite a população da carta 1: \n");
    scanf("%ld", &populacao1);

    printf("Digite a área da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontoTuristicos1);

    // Entrada de dados - Carta 2
    printf("\nDigite as informações da carta 2 \n");

    printf("Digite o nome do país da carta 2: \n");
    scanf(" %[^\n]", nomePais2);

    printf("Digite a população da carta 2: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontoTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    capita1 = pib1 / populacao1;
    capita2 = pib2 / populacao2;

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("País: %s\n", nomePais1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontoTuristicos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", capita1);

    printf("\n=== Carta 2 ===\n");
    printf("País: %s\n", nomePais2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontoTuristicos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", capita2);

    // Menu interativo - escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    // Menu interativo - escolha do segundo atributo
    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        if (escolha1 != 1) printf("1 - População\n");
        if (escolha1 != 2) printf("2 - Área\n");
        if (escolha1 != 3) printf("3 - PIB\n");
        if (escolha1 != 4) printf("4 - Pontos turísticos\n");
        if (escolha1 != 5) printf("5 - Densidade Demográfica\n");
        if (escolha1 != 6) printf("6 - PIB per Capita\n");
        printf("Opção: ");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1); // não deixa repetir

    // Função auxiliar de comparação
    for (int i = 1; i <= 2; i++) {
        int escolha = (i == 1 ? escolha1 : escolha2);

        switch (escolha) {
            case 1: // População
                if (i == 1) { valor1_carta1 = populacao1; valor1_carta2 = populacao2; }
                else { valor2_carta1 = populacao1; valor2_carta2 = populacao2; }
                break;
            case 2: // Área
                if (i == 1) { valor1_carta1 = area1; valor1_carta2 = area2; }
                else { valor2_carta1 = area1; valor2_carta2 = area2; }
                break;
            case 3: // PIB
                if (i == 1) { valor1_carta1 = pib1; valor1_carta2 = pib2; }
                else { valor2_carta1 = pib1; valor2_carta2 = pib2; }
                break;
            case 4: // Pontos turísticos
                if (i == 1) { valor1_carta1 = pontoTuristicos1; valor1_carta2 = pontoTuristicos2; }
                else { valor2_carta1 = pontoTuristicos1; valor2_carta2 = pontoTuristicos2; }
                break;
            case 5: // Densidade (menor vence → invertendo valores)
                if (i == 1) { valor1_carta1 = -densidade1; valor1_carta2 = -densidade2; }
                else { valor2_carta1 = -densidade1; valor2_carta2 = -densidade2; }
                break;
            case 6: // PIB per capita
                if (i == 1) { valor1_carta1 = capita1; valor1_carta2 = capita2; }
                else { valor2_carta1 = capita1; valor2_carta2 = capita2; }
                break;
        }
    }

    // Soma dos atributos (já com regra da densidade aplicada)
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição clara dos resultados
    printf("\n=== Comparação Final ===\n");
    printf("Carta 1 - %s -> Atributos escolhidos: %.2f e %.2f | Soma = %.2f\n",
           nomePais1, valor1_carta1, valor2_carta1, soma1);
    printf("Carta 2 - %s -> Atributos escolhidos: %.2f e %.2f | Soma = %.2f\n",
           nomePais2, valor1_carta2, valor2_carta2, soma2);

    if (soma1 > soma2)
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomePais1);
    else if (soma2 > soma1)
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomePais2);
    else
        printf("\nResultado: Empate!\n");

    return 0;
}
