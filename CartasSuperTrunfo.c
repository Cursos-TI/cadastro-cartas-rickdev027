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

    printf("4. Populacao (Habitantes) Nao Ultilizar . ou ,: ");
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
    scanf(" %c", &c2_estado); // IRA LER UM UNICO CARACTER DIGITADO 

    printf("2. Codigo (Ex: A01): ");
    scanf("%s", c2_codigo); // IRA LER UMA STRING QUE ESTA DENTRO DO ARRAY.  ENTAO NAO PRECISO DECLARAR & ANTES DA FUNCAO POIS E UMA STRING

    // Informarei o Usuario Para Nao Digitar Nome Das Cidades com Espaco!
    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", c2_nome_cidade); // IRA LER O NOME DA STRING CIDADE 

    printf("4. Populacao (Habitantes) Nao Ultilizar . ou ,: ");
    scanf("%d", &c2_populacao); // IRA LER UM NUMERO INT

    printf("5. Area (em km²): ");
    scanf("%f", &c2_area_km2); // IRA LER UM NUMERO FLOAT

    printf("6. PIB (em Bilhoes de Reais): ");
    scanf("%f", &c2_pib_bilhoes); // IRA LER UM NUMERO FLOAT

    printf("7. Numero de Pontos Turisticos: ");
    scanf("%d", &c2_num_pontos_turisticos); //  IRA LER UM NUMERO INTEIRO

    printf("\n--- CARTA 2 CADASTRADA ---\n\n");

  // Área para exibição dos dados da cidade
  // UTILIZAREI A FUNCAO PRINTF PARA EXIBIR OS DADOS NO TERMINAL
  // O FORMATO '%.2f' GARANTE QUE O VALORES EM FLOAT  (Area e PIB) EXIBAM SEMPRE COM APENAS DUAS CASAS DECIMAIS

  printf("==================================================\n");
  printf("         DADOS CADASTRADOS COM SUCESSO!!\n");
  printf("==================================================\n\n");
 /* COLOQUEI ESPACO  printf("    Estado: %c\n", c1_estado) E NOS OUTROS APENAS PARA FICAR ALINHADA NO FINAL DA MENSAGEM NO TERMINAL */
     // --- EXIBICAO DA CARTA 1 ---
    printf("### CARTA 1: %s ###\n", c1_codigo);
    printf("    Estado: %c\n", c1_estado);
    printf("    Codigo da Carta: %s\n", c1_codigo);
    printf("    Nome da Cidade: %s\n", c1_nome_cidade);
    printf("    Populacao: %d habitantes\n", c1_populacao);
    printf("    Area: %.2f km²\n", c1_area_km2);
    printf("    PIB: %.2f bilhoes de reais\n", c1_pib_bilhoes);
    printf("    Numero de Pontos Turisticos: %d\n", c1_num_pontos_turisticos);

    printf("\n"); //  APENAS UMA LINHA EM BRANCO PARA SEPARAR

    // --- EXIBICAO DA CARTA 2 ---
    printf("### CARTA 2: %s ###\n", c2_codigo);
    printf("    Estado: %c\n", c2_estado);
    printf("    Codigo da Carta: %s\n", c2_codigo);
    printf("    Nome da Cidade: %s\n", c2_nome_cidade);
    printf("    Populacao: %d habitantes\n", c2_populacao);
    printf("    Area: %.2f km²\n", c2_area_km2);
    printf("    PIB: %.2f bilhoes de reais\n", c2_pib_bilhoes);
    printf("    Numero de Pontos Turisticos: %d\n", c2_num_pontos_turisticos);

    printf("\n==================================================\n");
    printf("         SUPER TRUNFO FINALIZADO COM SUCESSO\n");
    printf("==================================================\n");



/*

NO FINAL DEVERA TER UM RESULTADO COMO ESSE DE EXEMPLO 
==================================================
         DADOS CADASTRADOS COM SUCESSO!!
==================================================

### CARTA 1: 05 ###
    Estado: B
    Codigo da Carta: 05
    Nome da Cidade: Vitoria
    Populacao: 1561 habitantes
    Area: 5165.00 km²
    PIB: 65156.00 bilhoes de reais
    Numero de Pontos Turisticos: 156

### CARTA 2: 02 ###
    Estado: A
    Codigo da Carta: 02
    Nome da Cidade: VilaVelha
    Populacao: 6666 habitantes
    Area: 156165.00 km²
    PIB: 156.00 bilhoes de reais
    Numero de Pontos Turisticos: 15156

==================================================
         SUPER TRUNFO FINALIZADO COM SUCESSO
==================================================
*/

return 0;
} 
