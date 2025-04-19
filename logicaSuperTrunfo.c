#include <stdio.h>
#include <string.h>

#define QTD_PAISES 50

typedef struct {
    char nome[50];
    int populacao;
    int area;
    float pib;
} Pais;

void carregarPaises(Pais paises[]) {
    strcpy(paises[0].nome, "Brasil"); paises[0].populacao = 213; paises[0].area = 8516; paises[0].pib = 1.6;
    strcpy(paises[1].nome, "Estados Unidos"); paises[1].populacao = 331; paises[1].area = 9834; paises[1].pib = 23.0;
    strcpy(paises[2].nome, "Japão"); paises[2].populacao = 125; paises[2].area = 377; paises[2].pib = 5.1;
    strcpy(paises[3].nome, "Alemanha"); paises[3].populacao = 83; paises[3].area = 357; paises[3].pib = 4.2;
    strcpy(paises[4].nome, "China"); paises[4].populacao = 1440; paises[4].area = 9597; paises[4].pib = 17.7;
    strcpy(paises[5].nome, "Índia"); paises[5].populacao = 1400; paises[5].area = 3287; paises[5].pib = 3.7;
    strcpy(paises[6].nome, "Rússia"); paises[6].populacao = 146; paises[6].area = 17098; paises[6].pib = 1.7;
    strcpy(paises[7].nome, "Canadá"); paises[7].populacao = 38; paises[7].area = 9985; paises[7].pib = 2.2;
    strcpy(paises[8].nome, "Reino Unido"); paises[8].populacao = 67; paises[8].area = 243; paises[8].pib = 3.1;
    strcpy(paises[9].nome, "França"); paises[9].populacao = 65; paises[9].area = 551; paises[9].pib = 2.9;

    strcpy(paises[10].nome, "Itália"); paises[10].populacao = 60; paises[10].area = 301; paises[10].pib = 2.1;
    strcpy(paises[11].nome, "Austrália"); paises[11].populacao = 25; paises[11].area = 7692; paises[11].pib = 1.6;
    strcpy(paises[12].nome, "México"); paises[12].populacao = 126; paises[12].area = 1964; paises[12].pib = 1.3;
    strcpy(paises[13].nome, "Coreia do Sul"); paises[13].populacao = 52; paises[13].area = 100; paises[13].pib = 1.8;
    strcpy(paises[14].nome, "Espanha"); paises[14].populacao = 47; paises[14].area = 505; paises[14].pib = 1.6;
    strcpy(paises[15].nome, "Indonésia"); paises[15].populacao = 276; paises[15].area = 1905; paises[15].pib = 1.2;
    strcpy(paises[16].nome, "Turquia"); paises[16].populacao = 84; paises[16].area = 783; paises[16].pib = 0.9;
    strcpy(paises[17].nome, "Arábia Saudita"); paises[17].populacao = 35; paises[17].area = 2149; paises[17].pib = 0.8;
    strcpy(paises[18].nome, "África do Sul"); paises[18].populacao = 60; paises[18].area = 1221; paises[18].pib = 0.4;
    strcpy(paises[19].nome, "Argentina"); paises[19].populacao = 45; paises[19].area = 2780; paises[19].pib = 0.6;

    strcpy(paises[20].nome, "Egito"); paises[20].populacao = 104; paises[20].area = 1001; paises[20].pib = 0.4;
    strcpy(paises[21].nome, "Nigéria"); paises[21].populacao = 213; paises[21].area = 923; paises[21].pib = 0.5;
    strcpy(paises[22].nome, "Ucrânia"); paises[22].populacao = 41; paises[22].area = 603; paises[22].pib = 0.2;
    strcpy(paises[23].nome, "Polônia"); paises[23].populacao = 38; paises[23].area = 312; paises[23].pib = 0.8;
    strcpy(paises[24].nome, "Suécia"); paises[24].populacao = 10; paises[24].area = 450; paises[24].pib = 0.6;
    strcpy(paises[25].nome, "Noruega"); paises[25].populacao = 5; paises[25].area = 385; paises[25].pib = 0.5;
    strcpy(paises[26].nome, "Países Baixos"); paises[26].populacao = 17; paises[26].area = 42; paises[26].pib = 1.0;
    strcpy(paises[27].nome, "Suíça"); paises[27].populacao = 8; paises[27].area = 41; paises[27].pib = 0.8;
    strcpy(paises[28].nome, "Áustria"); paises[28].populacao = 9; paises[28].area = 83; paises[28].pib = 0.5;
    strcpy(paises[29].nome, "Bélgica"); paises[29].populacao = 11; paises[29].area = 30; paises[29].pib = 0.6;

    strcpy(paises[30].nome, "Grécia"); paises[30].populacao = 10; paises[30].area = 132; paises[30].pib = 0.3;
    strcpy(paises[31].nome, "Portugal"); paises[31].populacao = 10; paises[31].area = 92; paises[31].pib = 0.3;
    strcpy(paises[32].nome, "Dinamarca"); paises[32].populacao = 6; paises[32].area = 43; paises[32].pib = 0.4;
    strcpy(paises[33].nome, "Finlândia"); paises[33].populacao = 5; paises[33].area = 338; paises[33].pib = 0.3;
    strcpy(paises[34].nome, "Irlanda"); paises[34].populacao = 5; paises[34].area = 70; paises[34].pib = 0.5;
    strcpy(paises[35].nome, "Nova Zelândia"); paises[35].populacao = 5; paises[35].area = 268; paises[35].pib = 0.3;
    strcpy(paises[36].nome, "Chile"); paises[36].populacao = 19; paises[36].area = 756; paises[36].pib = 0.3;
    strcpy(paises[37].nome, "Colômbia"); paises[37].populacao = 51; paises[37].area = 1141; paises[37].pib = 0.4;
    strcpy(paises[38].nome, "Venezuela"); paises[38].populacao = 28; paises[38].area = 916; paises[38].pib = 0.1;
    strcpy(paises[39].nome, "Peru"); paises[39].populacao = 33; paises[39].area = 1285; paises[39].pib = 0.2;

    strcpy(paises[40].nome, "Cuba"); paises[40].populacao = 11; paises[40].area = 110; paises[40].pib = 0.1;
    strcpy(paises[41].nome, "Coreia do Norte"); paises[41].populacao = 25; paises[41].area = 120; paises[41].pib = 0.04;
    strcpy(paises[42].nome, "Paquistão"); paises[42].populacao = 225; paises[42].area = 881; paises[42].pib = 0.3;
    strcpy(paises[43].nome, "Bangladesh"); paises[43].populacao = 166; paises[43].area = 147; paises[43].pib = 0.4;
    strcpy(paises[44].nome, "Filipinas"); paises[44].populacao = 109; paises[44].area = 300; paises[44].pib = 0.4;
    strcpy(paises[45].nome, "Irã"); paises[45].populacao = 84; paises[45].area = 1648; paises[45].pib = 0.6;
    strcpy(paises[46].nome, "Iraque"); paises[46].populacao = 40; paises[46].area = 437; paises[46].pib = 0.2;
    strcpy(paises[47].nome, "Afeganistão"); paises[47].populacao = 38; paises[47].area = 652; paises[47].pib = 0.02;
    strcpy(paises[48].nome, "Israel"); paises[48].populacao = 9; paises[48].area = 22; paises[48].pib = 0.5;
    strcpy(paises[49].nome, "Tailândia"); paises[49].populacao = 70; paises[49].area = 513; paises[49].pib = 0.5;
}

void comparar(Pais p1, Pais p2, int atributo) {
    printf("\nVocê escolheu comparar: ");
    switch(atributo) {
        case 1:
            printf("População\n");
            if (p1.populacao > p2.populacao) printf("%s venceu!\n", p1.nome);
            else if (p1.populacao < p2.populacao) printf("%s venceu!\n", p2.nome);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Área\n");
            if (p1.area > p2.area) printf("%s venceu!\n", p1.nome);
            else if (p1.area < p2.area) printf("%s venceu!\n", p2.nome);
            else printf("Empate!\n");
            break;
        case 3:
            printf("PIB\n");
            if (p1.pib > p2.pib) printf("%s venceu!\n", p1.nome);
            else if (p1.pib < p2.pib) printf("%s venceu!\n", p2.nome);
            else printf("Empate!\n");
            break;
        default:
            printf("Atributo inválido\n");
    }
}

int main () {
    Pais paises[QTD_PAISES];
    carregarPaises(paises);

    int escolha1 = 0, escolha2 = 0, atributo = 0;

    printf("Escolha o 1º país:\n");
    scanf("%d", &escolha1);
    printf("Escolha o 2º país:\n");
    scanf("%d", &escolha2);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populção\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    scanf("%d", &atributo);

    comparar(paises[escolha1], paises[escolha2], atributo);

    return 0 ;

}
