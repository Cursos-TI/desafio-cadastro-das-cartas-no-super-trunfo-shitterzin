#include <stdio.h>

int main(){

    double populacao;
    double area;
    double pib;
    int pontos_turisticos;

    printf("Qual a população da cidade?: \n");
    scanf("%lf", &populacao);

    printf("Área (km²): ");
    scanf("%lf", &area);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);


    printf("\nCARTA DA CIDADE\n");
        printf("População: %f habitantes\n", populacao);
        printf("Área: %f km²\n", area);
        printf("PIB: %f bilhões\n", pib);
        printf("Pontos turísticos: %d\n", pontos_turisticos);
    

    return 0;

}