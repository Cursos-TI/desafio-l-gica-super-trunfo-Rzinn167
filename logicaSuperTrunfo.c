#include <stdio.h>

int main() {
    
    char Carta1 = 'A', Carta2 = 'B';
    char Codigo1[20] = "A01";
    char Codigo2[20] = "B02";
    char Cidade1[20] = "São Paulo (SP)";
    char Cidade2[20] = "Rio de Janeiro (RJ)";
    int Populacao1 = 12325000;
    int Populacao2 = 13875000;
    float Area1 = 1521.11;
    float Area2 = 1221.50;
    float PIB1 = 699.28;
    float PIB2 = 899.45;
    int IDH1 = 50;
    int IDH2 = 55;
    float DensidadePopulacional1 = Populacao1 / Area1;
    float DensidadePopulacional2 = Populacao2 / Area2;
    float PIBPerCapita1 = PIB1 * 1000000000 / Populacao1;
    float PIBPerCapita2 = PIB2 * 1000000000 / Populacao2;
    float SuperTrunfo1 = (Populacao1 * 0.2) + (Area1 * 0.3) + (PIB1 * 0.4) + (IDH1 * 0.1);
    float SuperTrunfo2 = (Populacao2 * 0.2) + (Area2 * 0.3) + (PIB2 * 0.4) + (IDH2 * 0.1);
    int atributo;
    
    printf("Carta 1: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("IDH: %d\n", IDH1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita1);
    printf("Super Trunfo: %.2f pontos\n", SuperTrunfo1);
    printf("\n");

    printf("Carta 2: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("IDH: %d\n", IDH2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita2);
    printf("Super Trunfo: %.2f pontos\n", SuperTrunfo2);

    printf("Escolha sua carta: ");
    scanf("%s,%s", &Carta1, &Carta2);

    if(Carta1){ 
        printf("Você escolheu a carta 1!\n");
       
    }else if(Carta2){
        printf("Você escolheu a carta 2!\n");
    }else{
        printf("Número invalido\n");
    }
    

    printf("ESCOLHA QUAL ATRIBUTO\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB por Capital\n");
    printf("6 - Super Trunfo\n");

    printf("Escolha: \n");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        if (Populacao1 > Populacao2){
            printf("Carta1 Venceu!\n");
        } else if (Populacao1 < Populacao2){
            printf("Carta2 Venceu!\n");
        } else{
            printf("Empatou\n");
        }
        printf("Carta1 tem %d habitantes\n", Populacao1);
        printf("Carta2 tem %d habitantes\n", Populacao2);
        break;
    case 2:
        if (Area1 > Area2){
            printf("Carta1 Venceu!\n");
        } else if (Area1 < Area2){
            printf("Carta2 Venceu!\n");
        } else{
            printf("Empatou\n");
        }
        printf("Carta1 tem %.2f km²\n", Area1);
        printf("Carta2 tem %.2f km²\n", Area2);
        break;
    case 3:
        if (PIB1 > PIB2){
            printf("Carta1 Venceu!\n");
        } else if (PIB1 < PIB2){
            printf("Carta2 Venceu!\n");
        } else{
            printf("Empatou\n");
        }
        printf("Carta1 tem %.2f Bilhões\n", PIB1);
        printf("Carta2 tem %.2f Bilhões\n", PIB2);
        break;
    case 4:
        if (DensidadePopulacional1 < DensidadePopulacional1){
            printf("Carta1 Venceu!\n");
        } else if (DensidadePopulacional1 > DensidadePopulacional2){
            printf("Carta2 Venceu!\n");
        } else{
            printf("Empatou\n");
        }
        printf("Carta1 tem %.2f habitantes/km²\n", DensidadePopulacional1);
        printf("Carta2 tem %.2f habitantes/km²\n", DensidadePopulacional2);
        break; 
    case 5:
        if (PIBPerCapita1 > PIBPerCapita2){
            printf("Carta1 Venceu!\n");
        } else if (PIBPerCapita1 < PIBPerCapita2){
            printf("Carta2 Venceu!\n");
        } else{
            printf("Empatou\n");
        }
        printf("Carta1 tem %.2f reais\n", PIBPerCapita1);
        printf("Carta2 tem %.2f reais\n", PIBPerCapita2);
        break;
    case 6:
        if (SuperTrunfo1 > SuperTrunfo2){
            printf("Carta1 Venceu!\n");
        } else if (SuperTrunfo1 < SuperTrunfo2){
            printf("Carta2 Venceu!\n");
        } else{
            printf("Empatou\n");
        }
        printf("Carta1 tem %.2f pontos\n", SuperTrunfo1);
        printf("Carta2 tem %.2f pontos\n", SuperTrunfo2);
        break;   
    default:
        printf("Código Ínvalido\n");
        break;
    }
}
/* 
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usu"ário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\nComparação entre as cartas (Atributo: População):\n");
    printf("Carta 1: %s: %d habitantes\n", Cidade1, Populacao1);
    printf("Carta 2: %s: %d habitantes\n", Cidade2, Populacao2);
    if (Populacao1 > Populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (Populacao1 < Populacao2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
*/