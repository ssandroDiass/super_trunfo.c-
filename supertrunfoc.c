#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char carta_titulo1[50], estado1[2], cidade1[50], carta_titulo2[50], estado2[2], cidade2[50];
    char codigo1[10], codigo2[10]; // Alterado para string para permitir formatos como "A01"
    int populacao1, qnt_pontos1, populacao2, qnt_pontos2;
    float area1, pib1, area2, pib2;

    printf("\n \t \t \t Preencha o cadastro");
    printf("\n Carta 1: ");
    scanf("%s", carta_titulo1); // Lê string com espaços
    printf("\n Estado (sigla): ");
    scanf("%s", estado1); // Lê a sigla do estado (2 caracteres)
    printf("\n Código (ex: A01): ");
    scanf("%s", codigo1); // Lê o código como string
    printf("\n Nome da Cidade: ");
    scanf("%s", cidade1); // Lê string com espaços
    printf("\n População: ");
    scanf("%d", &populacao1);
    printf("\n Área (km²): ");
    scanf("%f", &area1);
    printf("\n PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("\n Número de Pontos Turísticos: ");
    scanf("%d", &qnt_pontos1);

    printf("\n \t \t \t Preencha o cadastro");
    printf("\n Carta 2: ");
    scanf("%s", carta_titulo2); // Lê string com espaços
    printf("\n Estado (sigla): ");
    scanf("%s", estado2); // Lê a sigla do estado (2 caracteres)
    printf("\n Código (ex: A01): ");
    scanf("%s", codigo2); // Lê o código como string
    printf("\n Nome da Cidade: ");
    scanf("%s", cidade2); // Lê string com espaços
    printf("\n População: ");
    scanf("%d", &populacao2);
    printf("\n Área (km²): ");
    scanf("%f", &area2);
    printf("\n PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("\n Número de Pontos Turísticos: ");
    scanf("%d", &qnt_pontos2);

    system("cls");
    printf("\n \t \t \t Cadastro Realizado!");
    printf("\n Carta1: %s", carta_titulo1);
    printf("\n Estado: %s", estado1);
    printf("\n Código: %s", codigo1);
    printf("\n Nome da Cidade: %s", cidade1);
    printf("\n População: %d habitantes", populacao1);
    printf("\n Área: %.2f km²", area1);
    printf("\n PIB: %.2f bilhões de reais", pib1);
    printf("\n Número de Pontos Turísticos: %d", qnt_pontos1);

    printf("\n \t \t \t Cadastro Realizado!");
    printf("\n Carta1: %s", carta_titulo2);
    printf("\n Estado: %s", estado2);
    printf("\n Código: %s", codigo2);
    printf("\n Nome da Cidade: %s", cidade2);
    printf("\n População: %d habitantes", populacao2);
    printf("\n Área: %.2f km²", area2);
    printf("\n PIB: %.2f bilhões de reais", pib2);
    printf("\n Número de Pontos Turísticos: %d", qnt_pontos2);

    return 0;
}
