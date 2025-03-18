#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    /* Declara variáveis para o Estado, Código da carta, Nome da cidade, População,
    pontos turisticos, Área Total e PIB. */
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib_1, pib_2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro da Carta 1
    printf("Cadastro da Carta 1: \n");

    // Lendo a Letra do Estado da Carta 1
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado1);

    //lendo a o Código da Carta 1
    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo1);
    
    //Lendo o Nome Da Cidade da Carta 1
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade1);

    //Lendo o valor da População da cidade da Carta 1
    printf("Digite a População dessa Cidade: \n");
    scanf("%d", &populacao1);

    //Lendo a Área total da Carta 1 
    printf("Digite a área Total em km²: \n");
    scanf("%f", &area1);

    //Lendo o PIB da cidade da Carta 1 
    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    //Lendo o Número de Pontos Turisticos da Carta 1
    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);



    //Cadastro da Carta 2
    printf("\nCadastro da Carta 2: \n");

    // Lendo a Letra do Estado da Carta 2
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2);

    //lendo a o Código da Carta 2
    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo2);
    
    //Lendo o Nome Da Cidade da Carta 2
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade2);

    //Lendo o valor da População da cidade da Carta 2
    printf("Digite a População dessa Cidade: \n");
    scanf("%d", &populacao2);

    //Lendo a Área total da Carta 2 
    printf("Digite a área Total em km²: \n");
    scanf("%f", &area2);

    //Lendo o PIB da cidade da Carta 2 
    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    //Lendo o Número de Pontos Turisticos da Carta 2
    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição da Carta 1
    printf("\n Carta 1 \n");

    //Exibindo a letra do Estado da Carta 1
    printf("Estado: %c\n", estado1);

    //Exibindo o código da Carta 1
    printf("Código: %c%s\n", estado1, codigo1);

    //Exibindo o Nome da Cidade da Carta 1
    printf("Nome da Cidade: %s\n", cidade1);

    //Exibindo a População da Cidade da Carta 1
    printf("População: %d\n", populacao1);

    //Exibindo a Área total da Cidade da Carta 1
    printf("Área: %.2f km²\n", area1);

    //Exibindo o PIB da Cidade da Carta 1
    printf("PIB: %.2f Bilhões de reais\n", pib_1);

    //Exibindo o Número de Pontos Turisticos da Carta 1
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos1);



    //Exibição da Carta 2
    printf("\n Carta 2 \n");

    //Exibindo a letra do Estado da Carta 2
    printf("Estado: %c\n", estado2);

    //Exibindo o código da Carta 2
    printf("Código: %c%s\n", estado2, codigo2);

    //Exibindo o Nome da Cidade da Carta 2
    printf("Nome da Cidade: %s\n", cidade2);

    //Exibindo a População da Cidade da Carta 2
    printf("População: %d\n", populacao2);

    //Exibindo a Área total da Cidade da Carta 2
    printf("Área: %.2f km²\n", area2);

    //Exibindo o PIB da Cidade da Carta 2
    printf("PIB: %.2f Bilhões de reais\n", pib_2);

    //Exibindo o Número de Pontos Turisticos da Carta 2
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}