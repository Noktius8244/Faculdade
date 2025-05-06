/*Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. 
Para cada carta, o usuário deverá fornecer as seguintes informações:
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

#include <stdio.h>
#include <string.h>
int main(){
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

printf("-----Carta 1-----\n");

printf("Estado (de A a H):\n");
scanf(" %s", estado1);

printf("Codigo da carta\n");
scanf(" %s", codigo1);

getchar();
printf("Nome da cidade\n");
fgets(cidade1, sizeof(cidade1), stdin);
cidade1[strcspn(cidade1, "\n")] = '\0';

printf("População\n");
scanf("%d", &pop1);

printf("Área\n");
scanf("%f", &area1);

printf("PIB\n");
scanf("%f", &pib1);

printf("Número de pontos turísticos\n");
scanf("%d", &pontos1);

//Depois de armazenar os dados, agora o programa irá retornar com os dados.


    printf(" -----Informações da carta----\n\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área total: %.3f Km²\n", area1);
    printf("PIB %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontos1);


    
printf("-----Carta 2-----\n");

printf("Estado (de A a H):\n");
scanf(" %s", estado2);

printf("Codigo da carta\n");
scanf(" %s", codigo2);

getchar();
printf("Nome da cidade\n");
fgets(cidade2, sizeof(cidade2), stdin);
cidade2[strcspn(cidade2, "\n")] = '\0';

printf("População\n");
scanf("%d", &pop2);

printf("Área\n");
scanf("%f", &area2);

printf("PIB\n");
scanf("%f", &pib2);

printf("Número de pontos turísticos\n");
scanf("%d", &pontos2);

printf(" -----Informações da carta 2----\n\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área total: %.3f Km²\n", area2);
    printf("PIB %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

return 0;

}
