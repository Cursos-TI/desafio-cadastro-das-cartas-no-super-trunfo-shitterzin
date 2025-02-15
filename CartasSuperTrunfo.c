#include <stdio.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    double populacao;
    double area;
    double pib;
    int pontos_turisticos;
    float densidade;
    float pibper;
    float super_poder;
} Cidade;

// Função para coletar dados da cidade
void lerDadosCidade(Cidade *cidade) {
    printf("\nDigite os dados da cidade:\n");
    printf("População: ");
    scanf("%lf", &cidade->populacao);
    
    printf("Área (km²): ");
    scanf("%lf", &cidade->area);
    
    printf("PIB (em bilhões): ");
    scanf("%lf", &cidade->pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
    
    // Calcula os atributos derivados
    cidade->densidade = cidade->populacao / cidade->area;
    cidade->pibper = cidade->pib / cidade->populacao;
    cidade->super_poder = cidade->populacao + cidade->pib + cidade->pontos_turisticos;
}

// Função para determinar o vencedor
const char* determinarVencedor(float valor1, float valor2, int inverso) {
    return (valor1 == valor2) ? "Empate" : (inverso ? (valor1 < valor2 ? "Cidade 1" : "Cidade 2") : (valor1 > valor2 ? "Cidade 1" : "Cidade 2"));
}

// Função para comparar duas cidades e exibir o vencedor por categoria
void compararCidades(Cidade c1, Cidade c2) {
    printf("\nResultado da Comparação:\n");
    
    printf("Densidade Populacional: %s (%.2f vs %.2f)\n", determinarVencedor(c1.densidade, c2.densidade, 1), c1.densidade, c2.densidade);
    printf("PIB per capita: %s (%.2f vs %.2f)\n", determinarVencedor(c1.pibper, c2.pibper, 0), c1.pibper, c2.pibper);
    printf("Número de pontos turísticos: %s (%d vs %d)\n", determinarVencedor(c1.pontos_turisticos, c2.pontos_turisticos, 0), c1.pontos_turisticos, c2.pontos_turisticos);
    printf("Super Poder: %s (%.2f vs %.2f)\n", determinarVencedor(c1.super_poder, c2.super_poder, 0), c1.super_poder, c2.super_poder);
}

int main() {
    Cidade cidade1, cidade2;
    
    // Ler os dados das duas cidades
    printf("\n=== Cadastro da Cidade 1 ===\n");
    lerDadosCidade(&cidade1);
    
    printf("\n=== Cadastro da Cidade 2 ===\n");
    lerDadosCidade(&cidade2);
    
    // Comparar as cidades
    compararCidades(cidade1, cidade2);
    
    return 0;
}
