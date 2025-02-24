//desafio novato

#include <stdio.h>

int main(){

    //carta 1
    char estado1[3] = "A";
    char codigo1[5] = "A01";
    char cidade1[25] = "São Paulo";
    unsigned int populacao1 = 11450000; 
    float area1 = 1.521;
    float pib1 =  2719751000;
    unsigned int pontost1 = 36;
    float pibpc1 =  70471;
    float dp1 = 752826;

    //carta 2
    char estado2[3] = "B";
    char codigo2[5] = "B01";
    char cidade2[25] = "Brasília";
    unsigned int populacao2 = 2817000; 
    float area2 = 5.761;
    float pib2 =  286940000;
    unsigned int pontost2 = 43;
    float pibpc2 =  73391;
    float dp2 = 48906;

    //Exibição das cartas

    //carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);  
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área(km²): %f km²\n", area1);
    printf("Pib: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontost1);
    printf("Densidade populacional: %.2f hab/km²\n", dp1);
    printf("Pib per Capita: %.2f reais\n", pibpc1);

    //carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2); 
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área(km²): %f km²\n", area2);
    printf("Pib: %f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade populacional: %.2f hab/km²\n", dp2);
    printf("Pib per Capita: %.2f reais\n", pibpc2);

    //Comparação da população os atributos

    //alterar dados para comparar outros atributos

    printf("\n----- Comparação Das Cartas -----\n");

    if (populacao1 > populacao2){
        printf("%s - %s: %d\n", codigo1, cidade1, populacao1);
        printf("%s - %s: %d\n", codigo2, cidade2, populacao2);
        printf("População: Carta 1 venceu\n");
    } else {
        printf("%s - %s: %d\n", codigo1, cidade1, populacao1);
        printf("%s - %s: %d\n", codigo2, cidade2, populacao2);
        printf("População: Carta 2 venceu\n");
    }

    return 0;
}