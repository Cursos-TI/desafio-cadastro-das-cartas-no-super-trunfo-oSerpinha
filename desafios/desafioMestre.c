//Desafio Mestre

#include <stdio.h>

int main(){

    // Informações da carta 1
    char estado1[3], codigo1[4], cidade1[20]; 
    int pontost1;
    float area1, pib1;
    unsigned long int populacao1;

    // Informações da carta 2
    char estado2[3], codigo2[4], cidade2[20]; 
    int pontost2;
    float area2, pib2;
    unsigned long int populacao2;


    //Carta 1

    printf("----- Cadastro Da Carta 1 -----\n");

    printf("Digite o estado (1 letra de A-H): ");
    scanf("%2s", estado1);  // (%2s) lê até 2 caracteres

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final

    printf("Digite o código da carta (estado + numero da cidade. ex: A01): ");
    scanf("%3s", codigo1);  // (%3s) lê até 3 caracteres

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final

    printf("Nome da cidade (sem acentos): ");
    scanf("%[^\n]", cidade1); // "%[^\n]" - lê todos os caracteres até a quebra de linha

    printf("População: ");
    scanf("%ld", &populacao1); 

    printf("Área(km²): ");
    scanf("%f", &area1);  

    printf("PIB: ");
    scanf("%f", &pib1);  

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost1); 

    //calculo da densidade populacional e do pib per capita da carta 1

    float pibpc1 = pib1 / populacao1;
    float dp1 = populacao1 / area1;
    float superPoder1 = pib1 + area1 + pontost1 + pibpc1 - dp1; // Maior densidade diminui o poder
    
    //Carta 2

    printf("\n----- Cadastro Da Carta 2 -----\n");

    printf("Digite o estado (1 letra de A-H): ");
    scanf("%2s", estado2);  

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final 

    printf("Digite o código da carta (estado + numero da cidade. ex: B01): ");
    scanf("%3s", codigo2); 

    getchar();  // Limpa o buffer para evitar erro na exibição da carta ao final  

    printf("Nome da cidade (sem acentos): ");
    scanf("%[^\n]", cidade2); 

    printf("População: ");
    scanf("%ld", &populacao2);  

    printf("Área(km²): ");
    scanf("%f", &area2);  

    printf("PIB: ");
    scanf("%f", &pib2);  

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost2); 

    //calculo da densidade populacional e do pib per capita da carta 2

    float pibpc2 = pib2 / populacao2;
    float dp2 = populacao2 / area2;
    float superPoder2 = pib2 + area2 + pontost2 + pibpc2 - dp2; // Maior densidade diminui o poder


    //Exibição das cartas

    printf("\n----- Dados Das Cartas -----\n");

    //Carta 1

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);  
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área(km²): %.2f km²\n", area1);
    printf("Pib: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontost1);
    printf("Densidade populacional: %.2f hab/km²\n", dp1);
    printf("Pib per Capita: %.2f reais\n", pibpc1);

    //Carta 2

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2); 
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área(km²): %.2f km²\n", area2);
    printf("Pib: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade populacional: %.2f hab/km²\n", dp2);
    printf("Pib per Capita: %.2f reais\n", pibpc2);

    //Comparar as cartas

    printf("\n----- Comparação Das Cartas -----\n");

    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }

    if (area1 > area2){
        printf("Area: Carta 1 venceu\n");
    } else {
        printf("Area: Carta 2 venceu\n");
    }

    if (pib1 > pib2){
        printf("Pib: Carta 1 venceu\n");
    } else {
        printf("Pib: Carta 2 venceu\n");
    }

    if (pontost1 > pontost2){
        printf("Pontos turisticos: Carta 1 venceu\n");
    } else {
        printf("Pontos turisticos: Carta 2 venceu\n");
    }
    
    if (dp1 > dp2){
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    if (pibpc1 > pibpc2){
        printf("Pib Per Capita: Carta 1 venceu\n");
    } else {
        printf("Pib Per Capita: Carta 2 venceu\n");
    }

    if (superPoder1 > superPoder2){
        printf("Super poder: Carta 1 venceu\n");
    } else {
        printf("Super poder: Carta 2 venceu\n");
    }
    
    return 0;
}
