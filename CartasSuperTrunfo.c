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

  // NOVAS VARIAVEIS PARA O NIVEL AVENTUREIRO CARTA 1
  // Densidade Populacional (POPULACAO / AREA). Tipo FLOAT.
  float c1_densidade_populacional;
  // PIB per Capita (PIB / POPULACAO). Tipo FLOAT.
  float c1_pib_per_capita;

   // Super Poder: SOMA DE TODOS OS ATRIBUTOS RELEVANTES TIPO FLOAT
  float c1_super_poder;

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

  // NOVAS VARIAVEIS PARA O NIVEL AVENTUREIRO CARTA 2
  // Densidade Populacional (POPULACAO / AREA). Tipo FLOAT.
  float c2_densidade_populacional;
  // PIB per Capita (PIB / POPULACAO). Tipo FLOAT.
  float c2_pib_per_capita;

     // Super Poder: SOMA DE TODOS OS ATRIBUTOS RELEVANTES TIPO FLOAT
  float c2_super_poder;

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

  /* ====================================================================
                          ÁREA PARA CÁLCULOS 
     ====================================================================*/

  // --- CALCULOS DA CARTA 1 ---
  // Densidade POPULACIONAL = POPULACAO / AREA
  // O (float) na frente de c1_populacao faz a conversao de int para float
  // antes da divisao, garantindo que o resultado seja float (divisao real).
  c1_densidade_populacional = (float)c1_populacao / c1_area_km2; 

  // PIB per Capita = (PIB em Bilhoes * 1.000.000.000) / POPULACAO
  // Multiplicamos o PIB por 1 bilhao para obter o valor total em reais, 
  // e entao dividimos pela populacao.
  c1_pib_per_capita = (c1_pib_bilhoes * 1000000000.0) / (float)c1_populacao;


  // --- CALCULOS DA CARTA 2  SEGUE A MESMA LOGICA DE CALCULO PARA CARTA 1---
  // Densidade Populacional = População / Área
  c2_densidade_populacional = (float)c2_populacao / c2_area_km2; 

  // PIB per Capita = (PIB em Bilhoes * 1.000.000.000) / População
  c2_pib_per_capita = (c2_pib_bilhoes * 1000000000.0) / (float)c2_populacao;




  printf("==================================================\n");
  printf("      DADOS CADASTRADOS & CALCULADOS COM SUCESSO!!\n");
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
    printf("    Densidade Populacional: %.2f hab/km²\n", c1_densidade_populacional);
    printf("    PIB per Capita: %.2f reais\n", c1_pib_per_capita);


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
    printf("    Densidade Populacional: %.2f hab/km²\n", c2_densidade_populacional);
    printf("    PIB per Capita: %.2f reais\n", c2_pib_per_capita);

    printf("\n==================================================\n");
    printf("        RESULTADOS DA BATALHA DE CARTAS\n");
    printf("==================================================\n");

    // --- LÓGICA DE COMPARAÇÃO (BATALHA) ---
    // USAMOS O OPERADOR TERNÁRIO (?:) PARA EXIBIR O RESULTADO E O VALOR BINÁRIO (1 OU 0)

    // 1. População (Maior vence)
    printf("População: %s (%d)\n", 
    (c1_populacao > c2_populacao) ? "Carta 1 venceu" : "Carta 2 venceu", 
    (c1_populacao > c2_populacao)); // O RESULTADO DA COMPARACAO E 1 (VERDADEIRO) OU 0 (FALSO)

    // 2. Área (Maior vence)
    printf("Área: %s (%d)\n", 
    (c1_area_km2 > c2_area_km2) ? "Carta 1 venceu" : "Carta 2 venceu", 
    (c1_area_km2 > c2_area_km2));

    // 3. PIB (Maior vence)
    printf("PIB: %s (%d)\n", 
    (c1_pib_bilhoes > c2_pib_bilhoes) ? "Carta 1 venceu" : "Carta 2 venceu", 
    (c1_pib_bilhoes > c2_pib_bilhoes));
 
    // 4. Pontos Turísticos (Maior vence)
    printf("Pontos Turísticos: %s (%d)\n", 
    (c1_num_pontos_turisticos > c2_num_pontos_turisticos) ? "Carta 1 venceu" : "Carta 2 venceu", 
    (c1_num_pontos_turisticos > c2_num_pontos_turisticos));

    // 5. Densidade Populacional (Menor vence)
    printf("Densidade Populacional: %s (%d)\n", 
    (c1_densidade_populacional < c2_densidade_populacional) ? "Carta 1 venceu" : "Carta 2 venceu", 
    (c1_densidade_populacional < c2_densidade_populacional)); // NOTA: AQUI A LOGICA É INVERTIDA (<)

    // 6. PIB per Capita (Maior vence)
    printf("PIB per Capita: %s (%d)\n", 
    (c1_pib_per_capita > c2_pib_per_capita) ? "Carta 1 venceu" : "Carta 2 venceu", 
    (c1_pib_per_capita > c2_pib_per_capita));

    // 7. Super Poder (Maior vence)
    printf("Super Poder: %s (%d)\n", 
    (c1_super_poder > c2_super_poder) ? "Carta 1 venceu" : "Carta 2 venceu", 
    (c1_super_poder > c2_super_poder));


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

/*COM O NOVO UPDATE DE CALCULOS AS RESPOSTA DEVEM SER RETORNADAS COMO NO EXEMPLO ABAIXO!!

==================================================
      DADOS CADASTRADOS & CALCULADOS COM SUCESSO!!
==================================================

### CARTA 1: 01 ###
    Estado: E
    Codigo da Carta: 01
    Nome da Cidade: Serra
    Populacao: 536765 habitantes
    Area: 547.63 km²
    PIB: 37.28 bilhoes de reais
    Numero de Pontos Turisticos: 10
    Densidade Populacional: 980.16 hab/km²
    PIB per Capita: 69453.11 reais

### CARTA 2: 02 ###
    Estado: E
    Codigo da Carta: 02
    Nome da Cidade: Vitoria
    Populacao: 378642 habitantes
    Area: 98.19 km²
    PIB: 31.42 bilhoes de reais
    Numero de Pontos Turisticos: 25
    Densidade Populacional: 3856.22 hab/km²
    PIB per Capita: 82980.76 reais
    
 ==================================================
        RESULTADOS DA BATALHA DE CARTAS
==================================================
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 2 venceu (0)
Densidade Populacional: Carta 1 venceu (1)
PIB per Capita: Carta 2 venceu (0)
Super Poder: Carta 2 venceu (0)


==================================================
         SUPER TRUNFO FINALIZADO COM SUCESSO
==================================================*/

return 0;
} 
