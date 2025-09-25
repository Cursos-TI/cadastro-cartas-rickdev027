#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Vou Definir variaveis separadas para cada sistema de carta!!

  //---VARIAVEIS DA CARTA 1 USAREI c1 PARA IDENTIFICAR TODAS VARIAVEIS DA CARTA 01-----//
  // Estado: UMA LETRA A-H TIPO CHAR
  char c1_estado; 
  // Codigo da Cidade: SERA DECLARADO CODIGO DA CARTA EX: D01 USA UM  ARRAY DE CHAR COM TAMANHO 4 PARA QUANDO DER ENTER ELE ENTENDER O TERMINADOR \0
  char c1_codigo[4];
  // Nome da Cidade: UM ARRAY DE CHAR DE TAMANHO 50 PARA ARMAZENAR O NOME DAS CIDADES
  char c1_nome_cidade[50];
  // Populacao: NUMERO DE HABITANTES NA CIDADE Tipo INT
  int c1_populacao;
  // Area em km²: Tipo Float 
  float c1_area_km2;
  // PIB: EM BILHOES DE REAIS Tipo FLOAT
  float c1_pib_bilhoes;
  // Numero de Pontos Turisticos: Tipo INT
  int c1_num_pontos_turisticos;

   //---VARIAVEIS DA CARTA 2 USAREI c2 PARA IDENTIFICAR TODAS VARIAVEIS DA CARTA 02-----//
   //SEGUE O MESMO SISTEMA ACIMA APENAS MUDEI O INICIO DA VARIAVEL DE c1 para c2
  // Estado: UMA LETRA A-H TIPO CHAR
  char c2_estado; 
  // Codigo da Cidade: SERA DECLARADO CODIGO DA CARTA EX: D01 USA UM  ARRAY DE CHAR COM TAMANHO 4 PARA QUANDO DER ENTER ELE ENTENDER O TERMINADOR \0
  char c2_codigo[4];
  // Nome da Cidade: UM ARRAY DE CHAR DE TAMANHO 50 PARA ARMAZENAR O NOME DAS CIDADES
  char c2_nome_cidade[50];
  // Populacao: NUMERO DE HABITANTES NA CIDADE Tipo INT
  int c2_populacao;
  // Area em km²: Tipo Float 
  float c2_area_km2;
  // PIB: EM BILHOES DE REAIS Tipo FLOAT
  float c2_pib_bilhoes;
  // Numero de Pontos Turisticos: Tipo INT
  int c2_num_pontos_turisticos;

  printf("==================================================\n");
  printf("               DESAFIO SUPER TRUNFO\n");
  printf("==================================================\n\n");


  // Área para entrada de dados

   // ====================================================================
    // ONDE IREMOS DEFINIR A ENTRADA DE DADOS - CARTA 1
    //
    // IREI UTULIZAR A FUNCAO SCANF PARA LER OQUE O JOGADOR DIGITAR
    // COLOCAR UM ESPACO ANTES DE %c EM SCANF  PARA IGNORAR QUALQUER 
    // QUERBRA DE LINHA QUE FIQUE NO TERMINAL
    // ====================================================================
    printf("1. Estado (A-H): ");
    scanf(" %c", &c1_estado); // IRA LER UM UNICO CARACTER DIGITADO 

    printf("2. Codigo (Ex: A01): ");
    scanf("%s", c1_codigo); // IRA LER UMA STRING QUE ESTA DENTRO DO ARRAY.  ENTAO NAO PRECISO DECLARAR & ANTES DA FUNCAO POIS E UMA STRING

    // Informarei o Usuario Para Nao Digitar Nome Das Cidades com Espaco!
    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", c1_nome_cidade); // IRA LER O NOME DA STRING CIDADE 

    printf("4. Populacao (Habitantes): ");
    scanf("%d", &c1_populacao); // IRA LER UM NUMERO INT

    printf("5. Area (em km²): ");
    scanf("%f", &c1_area_km2); // IRA LER UM NUMERO FLOAT

    printf("6. PIB (em Bilhoes de Reais): ");
    scanf("%f", &c1_pib_bilhoes); // IRA LER UM NUMERO FLOAT

    printf("7. Numero de Pontos Turisticos: ");
    scanf("%d", &c1_num_pontos_turisticos); //  IRA LER UM NUMERO INTEIRO

    printf("\n--- CARTA 1 CADASTRADA ---\n\n");

     // ====================================================================
    // ONDE IREMOS DEFINIR A ENTRADA DE DADOS - CARTA 2 IDENTICO AO ACIMA APENAS TROCANDO DE c1 PARA c2
    //
    // IREI UTULIZAR A FUNCAO SCANF PARA LER OQUE O JOGADOR DIGITAR
    // COLOCAR UM ESPACO ANTES DE %c EM SCANF  PARA IGNORAR QUALQUER 
    // QUERBRA DE LINHA QUE FIQUE NO TERMINAL
    // ====================================================================

        printf("1. Estado (A-H): ");
    scanf(" %c", &:c2_estado); // IRA LER UM UNICO CARACTER DIGITADO 

    printf("2. Codigo (Ex: A01): ");
    scanf("%s", :c2_codigo); // IRA LER UMA STRING QUE ESTA DENTRO DO ARRAY.  ENTAO NAO PRECISO DECLARAR & ANTES DA FUNCAO POIS E UMA STRING

    // Informarei o Usuario Para Nao Digitar Nome Das Cidades com Espaco!
    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", :c2_nome_cidade); // IRA LER O NOME DA STRING CIDADE 

    printf("4. Populacao (Habitantes): ");
    scanf("%d", &:c2_populacao); // IRA LER UM NUMERO INT

    printf("5. Area (em km²): ");
    scanf("%f", &:c2_area_km2); // IRA LER UM NUMERO FLOAT

    printf("6. PIB (em Bilhoes de Reais): ");
    scanf("%f", &:c2_pib_bilhoes); // IRA LER UM NUMERO FLOAT

    printf("7. Numero de Pontos Turisticos: ");
    scanf("%d", &:c2_num_pontos_turisticos); //  IRA LER UM NUMERO INTEIRO

    printf("\n--- CARTA 1 CADASTRADA ---\n\n");

  // Área para exibição dos dados da cidade

return 0;
} 
