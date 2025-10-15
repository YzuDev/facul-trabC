#include <stdio.h>

int main()
{
    int idade, matricula;
    float altura;
    char nome[50], cidade[100];

    printf("Qual seu nome? \n");
    fgets(nome, 50, stdin); 

    printf("Qual é a sua idade? \n");
    scanf("%d", &idade);

    printf("Qual é a sua matrícula? \n");
    scanf("%d", &matricula);

    printf("Qual é a sua altura? \n");
    scanf("%f", &altura);

    printf("Qual a sua cidade? \n");
    scanf(" %99[^\n]", &cidade); 

    printf("NOME: %s\n", nome); // Se 'nome' for a variável a ser impressa
    printf("IDADE: %d\n", idade);
    printf("MATRICULA: %d\n", matricula);
    printf("ALTURA: %.2f\n", altura);
    printf("CIDADE: %s\n", cidade); // Assumindo que 'cidade' é a variável}
}