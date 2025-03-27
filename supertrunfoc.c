#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char carta_titulo[50], estado[2], cidade[50];
    char codigo[10]; // Alterado para string para permitir formatos como "A01"
    int populacao, qnt_pontos;
    float area, pib;

    printf("\n \t \t \t Preencha o cadastro");
    printf("\n Carta: ");
    scanf("%s", carta_titulo); // Lê string com espaços
    printf("\n Estado (sigla): ");
    scanf("%s", estado); // Lê a sigla do estado (2 caracteres)
    printf("\n Código (ex: A01): ");
    scanf("%s", codigo); // Lê o código como string
    printf("\n Nome da Cidade: ");
    scanf("%s", cidade); // Lê string com espaços
    printf("\n População: ");
    scanf("%d", &populacao);
    printf("\n Área (km²): ");
    scanf("%f", &area);
    printf("\n PIB (bilhões): ");
    scanf("%f", &pib);
    printf("\n Número de Pontos Turísticos: ");
    scanf("%d", &qnt_pontos);

    system("cls");
    printf("\n \t \t \t Cadastro Realizado!");
    printf("\n Carta: %s", carta_titulo);
    printf("\n Estado: %s", estado);
    printf("\n Código: %s", codigo);
    printf("\n Nome da Cidade: %s", cidade);
    printf("\n População: %d habitantes", populacao);
    printf("\n Área: %.2f km²", area);
    printf("\n PIB: %.2f bilhões de reais", pib);
    printf("\n Número de Pontos Turísticos: %d", qnt_pontos);

    return 0;
}