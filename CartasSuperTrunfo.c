/*
Faculdade Estácio  
Aluno: Davi José da Silva  
Curso: Análise e Desenvolvimento de Sistemas  
Período: Primeiro Período  
Desafio - Nível Novato (Cadastro Básico - Super Trunfo: Países)  
*/

#include <stdio.h>

// Estrutura da carta
struct CartaCidade {
    char codigo[4];          // Ex: A01, B02...
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct CartaCidade carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Código da cidade (ex: A01): ");
    scanf(" %3s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da Carta 2\n");
    printf("Código da cidade (ex: B02): ");
    scanf(" %3s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // Exibição da Carta 1
    printf("Dados da Carta 1:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n");

    // Exibição da Carta 2
    printf("Dados da Carta 2:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
