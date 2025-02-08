#include <stdio.h>

int main() {

    char cidade[50], pais[50];
    float area, populacao, pib;

    printf("Para começarmos o nosso jogo, vamos cadastrar nossas cartas!\n");

    printf("Informe o nome do País em que a cidade faz parte: \n");
    fgets(pais, 50, stdin);  // Lê até 49 caracteres, incluindo espaços
    printf("O Pais escolhido foi: %s\n", pais);

    printf("Perfeito! Agora informe a cidade desejada: \n");
    fgets(cidade, 50, stdin);
    printf("A cidade informada foi: %s\n", cidade);

    printf("Para darmos continuidade, informe a área da cidade escolhida: \n");
    scanf("%f", &area);
    printf("A area mencionada foi: %.3f\n\n", area);

    printf("Agora informe a população de sua cidade: \n");
    scanf("%f", &populacao);
    printf("A população de sua cidade é: %.3f\n\n", populacao);

    printf("Para finalizar, informe o PIB da sua cidade: \n");
    scanf("%f", &pib);
    printf("O PIB de sua cidade é: %.3f\n\n", pib);

    printf("Essa foi sua carta cadastrada: \n");

    printf("O Pais escolhido foi: %s\n", pais);

    printf("A cidade informada foi: %s\n", cidade);

    printf("A area mencionada foi: %.3f\n\n", area);

    printf("A população de sua cidade é: %.3f\n\n", populacao);

    printf("O PIB de sua cidade é: %.3f\n\n", pib);

    return 0;
}