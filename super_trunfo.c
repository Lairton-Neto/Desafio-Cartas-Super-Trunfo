//Aluno: Lairton Nogueira de Almeida Neto.
//Disciplina: Introdução à programação de computadores.
//Desafio Super Trunfo - Nível Mestre.

#include <stdio.h>

int main() {

//--------------------Carta 1-------------------- 
//C1 - Variáveis inicializadas 
    
    char estado_1='X';
    char codigo_carta_1[20]="X01";
    char nome_cidade_1[20]="XXXX";
    int populacao_1=1;
    float area_km2_1=1;
    float pib_1=1;
    int n_pontos_turisticos_1=1; 
    float pib_pc_1 = 1;
    float densidade_pop_1 = 1;
    float super_poder_1 = 1;

//C1 - Texto introdução

    printf("Olá! Vamos cadastrar os dados da carta 1.\n");
    printf("Irei te pedir alguns dados aqui no terminal, basta que digite as respostas solicitadas.\n");
    printf("Vamos começar!\n\n");

//C1 - Solicitação dos dados (entrada de dados com scanf)

    printf("*****Carta 1*****\n\n"); 

    printf("Digite a letra do estado (1 caracter):\n");
    scanf(" %c",&estado_1);

    printf("Digite o codigo da carta:\n");
    scanf("%s",codigo_carta_1);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s",nome_cidade_1);

    printf("Digite a população:\n");
    scanf("%d",&populacao_1);

    printf("Digite a área da cidade:\n");
    scanf("%f",&area_km2_1);

    printf("Digite o PIB:\n");
    scanf("%f",&pib_1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d",&n_pontos_turisticos_1);

    pib_pc_1 = (float) pib_1 / (float) populacao_1; 
    densidade_pop_1 = (float) populacao_1 / area_km2_1;
    super_poder_1 = (float) populacao_1 + (float) area_km2_1 + (float) pib_1 + (float) n_pontos_turisticos_1 + (float) pib_pc_1 + (float)( 1 / densidade_pop_1);

//C1 - Exibição dos dados coletados (com a função printf)

    printf("==========Visualização dos dados cadastrados==========\n");  
    printf("CARTA 1\n");
    printf("Letra do estado: %c\n",estado_1);
    printf("Codigo da carta: %s\n",codigo_carta_1);
    printf("Nome da cidade: %s\n",nome_cidade_1);
    printf("População: %d\n",populacao_1);
    printf("Área da cidade: %.2fkm²\n",area_km2_1);
    printf("PIB: R$%.2f\n",pib_1);
    printf("Número de pontos turísticos: %d\n",n_pontos_turisticos_1);
    printf("Densidade populacional: %.2f km²\n", densidade_pop_1);
    printf("PIB per capta: R$%.2f\n", pib_pc_1);
    printf("Super poder %.2f \n", super_poder_1);
    printf("==========Cadastro da carta 1 concluído!==========\n\n"); 
    
//--------------------Carta 2 --------------------
//C2 - Variáveis inicializadas da carta 2
   
    char estado_2='X';
    char codigo_carta_2[20]="X01";
    char nome_cidade_2[20]="XXXX";
    int populacao_2=1;
    float area_km2_2=1;
    float pib_2=1;
    int n_pontos_turisticos_2=1; 
    float pib_pc_2 = 1;
    float densidade_pop_2= 1;
    float super_poder_2 = 1;

//C2 - Texto introdução

    printf("Olá! Vamos cadastrar os dados da carta 2.\n");
    printf("Irei te pedir alguns dados aqui no terminal, basta que digite as respostas solicitadas.\n");
    printf("Vamos começar!\n\n");

//C2 - Solicitação dos dados (entrada de dados com scanf)

    printf("*****Carta 2*****\n\n"); 

    printf("Digite a letra do estado (1 caracter):\n");
    scanf(" %c",&estado_2);

    printf("Digite o codigo da carta:\n");
    scanf(" %s",codigo_carta_2);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %s",nome_cidade_2);

    printf("Digite a população:\n");
    scanf(" %d",&populacao_2);

    printf("Digite a área da cidade:\n");
    scanf(" %f",&area_km2_2);

    printf("Digite o PIB:\n");
    scanf(" %f",&pib_2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d",&n_pontos_turisticos_2);

    pib_pc_2 = (float) pib_2 / (float) populacao_2; 
    densidade_pop_2 = (float) populacao_2 / area_km2_2;
    super_poder_2 = (float) populacao_2 + (float) area_km2_2 + (float) pib_2 + (float) n_pontos_turisticos_2 + (float) pib_pc_2 + (float)( 1 / densidade_pop_2);

//C2 - Exibição dos dados coletados (com a função printf)

    printf("==========Visualização dos dados cadastrados==========\n");  
    printf("CARTA 2\n");
    printf("Letra do estado: %c\n",estado_2);
    printf("Codigo da carta: %s\n",codigo_carta_2);
    printf("Nome da cidade: %s\n",nome_cidade_2);
    printf("População: %d\n",populacao_2);
    printf("Área da cidade: %.2fkm²\n",area_km2_2);
    printf("PIB: R$%.2f\n",pib_2);
    printf("Número de pontos turísticos: %d\n",n_pontos_turisticos_2);
    printf("Densidade populacional: %.2f km²\n", densidade_pop_2);
    printf("PIB per capta: R$%.2f\n", pib_pc_2);
    printf("Super poder %.2f \n", super_poder_2);
    printf("==========Cadastro da carta 2 concluído!==========\n\n"); 

// C1 vs. C2 - Comparação entre a carta 1 e carta 2

    printf("==========Carta 1 vs. Carta 2========== \n");
    printf("Interpretação dos resultados: \n");
    printf("Se o resultado for 1, carta 1 venceu, se for 0, carta 2 venceu. \n \n");
    printf("População:                  Carta 1 > Carta 2 = %d \n", (populacao_1 > populacao_2));
    printf("Área:                       Carta 2 > Carta 2 = %d \n", (area_km2_1 > area_km2_2));
    printf("PIB:                        Carta 2 > Carta 2 = %d \n", (pib_1 > pib_2));
    printf("N° de Turismo:              Carta 2 > Carta 2 = %d \n", (n_pontos_turisticos_1 > n_pontos_turisticos_2));
    printf("Densidade Populacional:     Carta 2 < Carta 2 = %d \n", (densidade_pop_1 < densidade_pop_2));
    printf("PIB per capta:              Carta 2 > Carta 2 = %d \n", (pib_pc_1 > pib_pc_2));
    printf("Super poder:                Carta 2 > Carta 2 = %d \n", (super_poder_1 > super_poder_2));
    printf("Fim de jogo! \n");

    return 0;
}
