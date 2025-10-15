#include <stdio.h>

int main()
{

    /*Carta 1 */
    char nome[50], estado[50], cidade[50], codigo[50];
    int populacao, turisticos;
    float area, pib;

    /*Carta 2 */
    char nome2[50], estado2[50], cidade2[50], codigo2[50];
    int populacao2, turisticos2;
    float area2, pib2;

    /*CARTA 1 */
    printf("Digite seu nome! \n");
    scanf("%s", nome);

    printf("%s Responda as Questões a Seguir! \n", nome);
    printf("Escolha uma letra de um estado:\nA = RIO DE JANEIRO\nB = BRSÍLIA\nC = CEARÁ\nD = BAHIA\nE = SÃO PAULO\nF = MATO GROSSO\nG = GOIÁS\nH = ÁCRE  \n");
    scanf("%s", estado);

    while (getchar() != '\n' && getchar() != EOF)
        ; // Limpar o buffer do teclado.

    printf("Qual a sua cidade?\n");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Escolha um numero de 01 a 04: \n");
    scanf("%s", codigo);

    printf("Numero de habitantes da sua cidade? \n");
    scanf(" %d", &populacao);
    getchar();

    printf("Qual a area da sua cidade ? \n");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem ? \n");
    scanf("%d", &turisticos);

    printf("Carta do %s\nEstado:%s\nCódigo:%s%s\nNome da cidade:%s\nPopulação:%d\nÁrea:%.2f KM².\nPIB:%.2f Bilhões de Reais.\nNúmero de Pontos Turisticos:%d pontos.\n", nome, estado, estado, codigo, cidade, populacao, area, pib, turisticos);

    /*CARTA 2 */
    printf("Digite seu nome! \n");
    scanf("%s", nome2);

    printf("%s Responda as Questões a Seguir! \n", nome2);
    printf("Escolha uma letra de um estado:\nA = RIO DE JANEIRO\nB = BRSÍLIA\nC = CEARÁ\nD = BAHIA\nE = SÃO PAULO\nF = MATO GROSSO\nG = GOIÁS\nH = ÁCRE  \n");
    scanf("%s", estado2);

    while (getchar() != '\n' && getchar() != EOF)
        ; // Limpar o buffer do teclado.

    printf("Qual a sua cidade? \n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Escolha um numero de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Numero de habitantes da sua cidade? \n");
    scanf("%d", &populacao2);

    printf("Qual a area da sua cidade ? \n ");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem ? \n");
    scanf("%d", &turisticos2);

    printf("Carta do %s\nEstado: %s\nCódigo: %s%s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: %.2f Bilhões de Reais.\nNúmeros de Pontos Turisticos: %d pontos.", nome2, estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, turisticos2);
}