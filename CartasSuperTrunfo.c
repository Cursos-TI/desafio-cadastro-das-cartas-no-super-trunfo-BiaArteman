#include <stdio.h>

int main(){
printf("desafio xadrez/n");
printf("novo commit\n");


struct Carta {
    char codigo[4];  // 3 caracteres + terminador '\0'
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {';'

    struct Carta carta1;
    struct Carta carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Código (ex: A01): ");
    scanf("%3s", carta1.codigo);  // Lê até 3 caracteres + '\0'

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    return 0;


  // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Código (ex: B02): ");
    scanf("%3s", "carta2.codigo");

    printf("População: ");
    scanf("%d", "&carta2.populacao");

    printf("Área (em km²): ");
    scanf("%f", "&carta2.area");

    printf("PIB (em bilhões): ");
    scanf("%f", "&carta2.pib");

    printf("Número de pontos turísticos: ");
    scanf("%d", "&carta2.pontosTuristicos");

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Código: %s\n", "carta1.codigo");
    printf("População: %d\n", "carta1.populacao");
    printf("Área: %.2f km²\n", "carta1.area");
    printf("PIB: R$ %.2f bilhões\n", "carta1.pib");
    printf("Pontos turísticos: %d\n", "carta1.pontosTuristicos");

    // Exibição dos dados da segunda carta

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Código: %s\n", "carta2.codigo");
    printf("População: %d\n", "carta2.populacao");
    printf("Área: %.2f km²\n", "carta2.area");
    printf("PIB: R$ %.2f bilhões\n", "carta2.pib");
    printf("Pontos turísticos: %d\n", "carta2.pontosTuristicos");

    return 0;
}
