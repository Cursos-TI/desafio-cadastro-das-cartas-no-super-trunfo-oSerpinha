//DESAFIO NOVATO

#include <stdio.h>

int main(){

    // Informações da carta 1
    char estado1[3], codigo1[4], cidade1[20]; 
    int populacao1, pontost1;
    float area1, pib1;

    // Informações da carta 2
    char estado2[3], codigo2[4], cidade2[20]; 
    int populacao2, pontost2;
    float area2, pib2;

    //Carta 1

    printf("----- Cadastro Da Carta 1 -----\n");

    printf("Digite o estado (1 letra de A-H): ");
    scanf("%2s", estado1);  // (%2s) lê até 2 caracteres

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final

    printf("Digite o código da carta (estado + numero da cidade. ex: A01): ");
    scanf("%3s", codigo1);  // (%3s) lê até 3 caracteres

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final

    printf("Nome da cidade: ");
    scanf("%[^\n]", cidade1); // "%[^\n]" - lê todos os caracteres até a quebra de linha

    printf("População: ");
    scanf("%d", &populacao1); 

    printf("Área(km²): ");
    scanf("%f", &area1);  

    printf("PIB: ");
    scanf("%f", &pib1);  

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost1); 

    //Carta 2

    printf("\n----- Cadastro Da Carta 2 -----\n");

    printf("Digite o estado (1 letra de A-H): ");
    scanf("%2s", estado2);  

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final 

    printf("Digite o código da carta (estado + numero da cidade. ex: B01): ");
    scanf("%3s", codigo2); 

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final  

    printf("Nome da cidade: ");
    scanf("%[^\n]", cidade2); 

    printf("População: ");
    scanf("%d", &populacao2);  

    printf("Área(km²): ");
    scanf("%f", &area2);  

    printf("PIB: ");
    scanf("%f", &pib2);  

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost2); 

    //Exibição das cartas

    printf("\n----- Dados Das Cartas -----\n");

    //Carta 1

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);  
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área(km²): %.2f km²\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontost1);

    //Carta 2

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2); 
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área(km²): %.2f km²\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);

    return 0;
}
