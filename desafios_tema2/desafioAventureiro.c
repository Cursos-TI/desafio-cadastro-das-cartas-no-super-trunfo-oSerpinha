//Desafio Aventureiro

#include <stdio.h>

int main(){

    int escolhaAtributo;

    //carta 1
    char pais1[25] = "Brasil";
    unsigned int populacao1 = 211000000; 
    float area1 = 8510000;
    float pib1 =  2174000000000;
    unsigned int pontost1 = 367;
    float dp1 = 23.8;

    //carta 2
    char pais2[25] = "Alemanha";
    unsigned int populacao2 = 83280000; 
    float area2 = 357592;
    float pib2 =  4526000000000;
    unsigned int pontost2 = 167;
    float dp2 = 232;

    printf("----- Super Trunfo -----\n");
    printf("Escolha o atributo a ser comparado: \n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - Pib\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Geografica\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo){
    case 1:
        printf("\n----- População -----\n");
        if (populacao1 > populacao2){
            printf("Brasil - População: %d\n", populacao1);
            printf("Alemanha - População: %d\n", populacao2);
            printf("Carta 1 venceu!");
        } else if (populacao1 < populacao2){
            printf("Brasil - População: %d\n", populacao1);
            printf("Alemanha - População: %d\n", populacao2);
            printf("Carta 2 venceu!");
        } else {
            printf("Brasil - População: %d\n", populacao1);
            printf("Alemanha - População: %d\n", populacao2);
            printf("Empate");
        }
        
        break;
    case 2:
        printf("\n----- Area -----\n");
        if (area1 > area2){
            printf("Brasil - Area: %.2f\n", area1);
            printf("Alemanha - Area: %.2f\n", area2);
            printf("Carta 1 venceu!");
        } else if (area1 < area2){
            printf("Brasil - Area: %.2f\n", area1);
            printf("Alemanha - Area: %.2f\n", area2);
            printf("Carta 2 venceu!");
        } else {
            printf("Brasil - Area: %.2f\n", area1);
            printf("Alemanha - Area: %.2f\n", area2);
            printf("Empate");
        }
        break;
    case 3:
        printf("\n----- Pib -----\n");
        if (pib1 > pib2){
            printf("Brasil - Pib: %.2f\n", pib1);
            printf("Alemanha - Pib: %.2f\n", pib2);
            printf("Carta 1 venceu!");
        } else if (pib1 < pib2){
            printf("Brasil - Pib: %.2f\n", pib1);
            printf("Alemanha - Pib: %.2f\n", pib2);
            printf("Carta 2 venceu!");
        } else {
            printf("Brasil - Pib: %.2f\n", pib1);
            printf("Alemanha - Pib: %.2f\n", pib2);
            printf("Empate");
        }
        break;
    case 4:
        printf("\n----- Pontos Turisticos -----\n");
        if (pontost1 > pontost2){
            printf("Brasil - Pontos Turisticos: %d\n", pontost1);
            printf("Alemanha - Pontos Turisticos: %d\n", pontost2);
            printf("Carta 1 venceu!");
        } else if (pontost1 < pontost2){
            printf("Brasil - Pontos Turisticos: %d\n", pontost1);
            printf("Alemanha - Pontos Turisticos: %d\n", pontost2);
            printf("Carta 2 venceu!");
        } else {
            printf("Brasil - Pontos Turisticos: %d\n", pontost1);
            printf("Alemanha - Pontos Turisticos: %d\n", pontost2);
            printf("Empate");
        }
        break;
    case 5:
        printf("\n----- Densidade Geografica -----\n");
        if (dp1 < dp2){
            printf("Brasil - Densidade Geografica: %.2f\n", dp1);
            printf("Alemanha - Densidade Geografica: %.2f\n", dp2);
            printf("Carta 1 venceu!");
        } else if (dp1 > dp2){
            printf("Brasil - Densidade Geografica: %.2f\n", dp1);
            printf("Alemanha - Densidade Geografica: %.2f\n", dp2);
            printf("Carta 2 venceu!");
        } else {
            printf("Brasil - Densidade Geografica: %.2f\n", dp1);
            printf("Alemanha - Densidade Geografica: %.2f\n", dp2);
            printf("Empate");
        }
        break;    
    default:
    printf("Opção inválida!");
        break;
    }

    return 0;
}