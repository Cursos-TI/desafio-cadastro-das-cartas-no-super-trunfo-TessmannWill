#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[3], codigo2[3], cidade1[40], cidade2[40];
    int populacao1, populacao2, pontostur1, pontostur2;
    float area1, area2, pib1, pib2;

    printf("\n\n***  BEM VINDO AO SUPER TRUNFO!  ***");
//CADASTRO CARTA 1
    printf("\n\nCADASTRO CARTA 1:\n");

    // leitura estado
    printf("Informe o estado (Somente uma letra entre A e H): ");
    scanf(" %c", &estado1);

    //leitura codigo carta
    printf("Informe o codigo da carta (De 01 a 04): ");
    scanf("%s", codigo1);

    //leitura nome cidade 
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    //leitura populacao
    printf("Informe o numero de habitantes: ");
    scanf("%d", &populacao1);

    //leitura area
    printf("Informe a área em km²: ");
    scanf("%f", &area1);

    //leitura pib
    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    //leitura pontos turisticos
    printf("Informe o número de pontos turisticos: ");
    scanf("%d", &pontostur1);

    //mostrar dados carta 1
    printf("\nINFORMAÇÕES CARTA 1: \nESTADO: %c \nCÓDIGO: %c%s \nNOME DA CIDADE: %s \nPOULAÇÃO: %d \nÁREA: %f km² \nPIB: %f \nNUMERO PONTOS TURISTICOS: %d \n", estado1, estado1, codigo1, cidade1, populacao1, area1, pib1, pontostur1);

//CADASTRO CARTA 2 
    printf("\n\nCADASTRO CARTA 2:");

    // leitura estado
    printf("\nInforme o estado(Somente uma letra entre A e H): ");
    scanf(" %c", &estado2);

    //leitura codigo carta
    printf("Informe o codigo da carta(De 01 a 04): ");
    scanf("%s", codigo2);

    //leitura nome cidade 
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);

    //leitura populacao
    printf("Informe o numero de habitantes: ");
    scanf("%d", &populacao2);

    //leitura area
    printf("Informe a área em km²: ");
    scanf("%f", &area2);

    //leitura pib
    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    //leitura pontos turisticos
    printf("Informe o número de pontos turisticos: ");
    scanf("%d", &pontostur2);

    //mostrar dados carta 2
    printf("\nINFORMAÇÕES CARTA 2: \nESTADO: %c \nCÓDIGO: %c%s \nNOME DA CIDADE: %s \nPOULAÇÃO: %d \nÁREA: %f km² \nPIB: %f \nNUMERO PONTOS TURISTICOS: %d \n", estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontostur2);

return 0;
}