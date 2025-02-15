#include <stdio.h>

int main(){

    float densidade;
    float pibper;
    double populacao;
    double area;
    double pib;
    int pontos_turisticos;

    printf("Qual a população da cidade?: \n");
    scanf("%.2lf", &populacao);

    printf("Área (km²): ");
    scanf("%.2lf", &area);

    printf("PIB (em bilhões): ");
    scanf("%.2lf", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    getchar();


    printf(" CARTAS DE CIDADES\n");
        printf("População: %f habitantes\n", populacao);
        printf("Área: %f km²\n", area);
        printf("PIB: %f bilhões\n", pib);
        printf("Pontos turísticos: %d\n", pontos_turisticos);

        densidade = populacao / area;
        printf("Densidade Populacional: %.2f, habitantes por km²\n", densidade);

        pibper = pib / populacao;
        printf("PIB per capita: %.2f, bilhões por habitante\n", pibper);
    

    return 0;

}