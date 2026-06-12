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
    int atributo1, atributo2;
    int resultado1, resultado2;
    int Opção1, Opção2;

    printf("Bem vindo ao jogo SUPER TRUNFO!!!\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver status das cartas\n");
    printf("3 - Sair do jogo\n");
    printf("Escolha sua opção: ");
    scanf("%d", &Opção1);

    switch (Opção1)
    {
    case 1:
        printf("Escolha sua carta\n");
        printf("digite: ");
        scanf("%d", &Opção2);    

       if (Opção2 == 1)
    {
        printf("Você escolheu Carta 1\n");
    } else if (Opção2 == 2) {
        printf("Você escolheu Carta 2\n");
    } else {
        printf("Codigo Invalido\n");
    }

    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB por Capital\n");
    printf("6 - Super Trunfo\n");

    printf("Escolha: \n");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("Você escolheu o atributo 'População'!\n");
        resultado1 = Populacao1 > Populacao2 ? 0 : 1;
        break;
    case 2:
        printf("Você escolheu o atributo 'Área'!\n");
        resultado1 = Area1 > Area2 ? 0 : 1;
        break;
    case 3:
        printf("Você escolheu o atributo 'PIB'!\n");
        resultado1 = PIB1 > PIB2 ? 0 : 1;
        break;
    case 4:
        printf("Você escolheu o atributo 'Densidade Populacional'!\n");
        resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 0 : 1;
        break; 
    case 5:
        printf("Você escolheu o atributo 'PIB Por Capital'!\n");
        resultado1 = PIBPerCapita1 > PIBPerCapita2 ? 0 : 1;
        break;
    case 6:
        printf("Você escolheu o atributo 'super trunfo'!\n");
        resultado1 = SuperTrunfo1 > SuperTrunfo2 ? 0 : 1;
        break;   
    default:
        printf("Código Ínvalido\n");
        break;
    }

    printf("Escolha o segundo atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB por Capital\n");
    printf("6 - Super Trunfo\n");

    printf("Escolha: \n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo tributo!\n");
        printf("Tente Novamente\n");
    } else {

    switch (atributo2)
    {
    case 1:
        printf("Você escolheu o atributo 'População'!\n");
        resultado2 = Populacao2 > Populacao1 ? 0 : 1;
        break;
    case 2:
        printf("Você escolheu o atributo 'Área'!\n");
        resultado2 = Area2 > Area1 ? 0 : 1;
        break;
    case 3:
        printf("Você escolheu o atributo 'PIB'!\n");
        resultado2 = PIB2 > PIB1 ? 0 : 1;
        break;
    case 4:
        printf("Você escolheu o atributo 'Densidade Populacional'!\n");
        resultado2 = DensidadePopulacional2 < DensidadePopulacional1 ? 0 : 1;
        break; 
    case 5:
        printf("Você escolheu o atributo 'PIB Por Capital'!\n");
        resultado2 = PIBPerCapita2 > PIBPerCapita1 ? 0 : 1;
        break;
    case 6:
        printf("Você escolheu o atributo 'super trunfo'!\n");
        resultado2 = SuperTrunfo2 > SuperTrunfo1 ? 0 : 1;
        break;   
    default:
        printf("Código Ínvalido\n");
        break;
    }
}

    if (Opção2 == 1)
    {  
    if (resultado1 && resultado2)
    {
        printf("Você Ganhou!!\n");
    } else if (resultado1 != resultado2)
    {
        printf("Empatou!\n");
    } else {
        printf("Você perdeu!!\n");
    }
} else if (Opção2 == 2) {
     if (resultado1 == resultado2){
        printf("Você perdeu!!\n");
    } else if (resultado1 != resultado2) {
        printf("Empatou!\n");
    } else {
        printf("Você ganhou!!\n");
    }
}
        break;
    case 2:
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
        break;
    case 3:
    printf("Saindo do jogo...\n");
        break;
    default:
    printf("Opção invalida\n");
        break;
    } 
}
