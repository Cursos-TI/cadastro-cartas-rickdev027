#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Area para definição das variáveis para armazenar as propriedades das cidades
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
  // Area em km2: Tipo Float 
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
  float c1_super_poder = 0.0; // INICIALIZADO COM 0.0 PARA EVITAR WARNINGS

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
  // Area em km2: Tipo Float 
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
  float c2_super_poder = 0.0; // INICIALIZADO COM 0.0 PARA EVITAR WARNINGS

  printf("==================================================\n");
  printf("               DESAFIO SUPER TRUNFO\n");
  printf("==================================================\n\n");


  // Area para entrada de dados

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

    printf("4. Populacao (Habitantes - Ex: 536765): ");
    scanf("%d", &c1_populacao); // IRA LER UM NUMERO INT

    printf("5. Area (em km2 - Ex: 547.63): ");
    scanf("%f", &c1_area_km2); // IRA LER UM NUMERO FLOAT

    printf("6. PIB (em Bilhoes de Reais - Ex: 37.28): ");
    scanf("%f", &c1_pib_bilhoes); // IRA LER UM NUMERO FLOAT
    // LIMPEZA DE BUFFER PARA EVITAR PROBLEMAS COM PROXIMO SCANF
    while(getchar() != '\n'); 

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

    printf("4. Populacao (Habitantes - Ex: 536765): ");
    scanf("%d", &c2_populacao); // IRA LER UM NUMERO INT

    printf("5. Area (em km2 - Ex: 547.63): ");
    scanf("%f", &c2_area_km2); // IRA LER UM NUMERO FLOAT

    printf("6. PIB (em Bilhoes de Reais - Ex: 37.28): ");
    scanf("%f", &c2_pib_bilhoes); // IRA LER UM NUMERO FLOAT
    // LIMPEZA DE BUFFER PARA EVITAR PROBLEMAS COM PROXIMO SCANF
    while(getchar() != '\n'); 

    printf("7. Numero de Pontos Turisticos: ");
    scanf("%d", &c2_num_pontos_turisticos); //  IRA LER UM NUMERO INTEIRO

    printf("\n--- CARTA 2 CADASTRADA ---\n\n");

  // Area para exibição dos dados da cidade
  // UTILIZAREI A FUNCAO PRINTF PARA EXIBIR OS DADOS NO TERMINAL
  // O FORMATO '%.2f' GARANTE QUE O VALORES EM FLOAT  (Area e PIB) EXIBAM SEMPRE COM APENAS DUAS CASAS DECIMAIS

  /* ====================================================================
                          AREA PARA CALCULOS 
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
  // Densidade Populacional = Populacao / Area
  c2_densidade_populacional = (float)c2_populacao / c2_area_km2; 

  // PIB per Capita = (PIB em Bilhoes * 1.000.000.000) / Populacao
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
    printf("    Area: %.2f km2\n", c1_area_km2);
    printf("    PIB: %.2f bilhoes de reais\n", c1_pib_bilhoes);
    printf("    Numero de Pontos Turisticos: %d\n", c1_num_pontos_turisticos);
    printf("    Densidade Populacional: %.2f hab/km2\n", c1_densidade_populacional);
    printf("    PIB per Capita: %.2f reais\n", c1_pib_per_capita);


    printf("\n"); //  APENAS UMA LINHA EM BRANCO PARA SEPARAR

    // --- EXIBICAO DA CARTA 2 ---
    printf("### CARTA 2: %s ###\n", c2_codigo);
    printf("    Estado: %c\n", c2_estado);
    printf("    Codigo da Carta: %s\n", c2_codigo);
    printf("    Nome da Cidade: %s\n", c2_nome_cidade);
    printf("    Populacao: %d habitantes\n", c2_populacao);
    printf("    Area: %.2f km2\n", c2_area_km2);
    printf("    PIB: %.2f bilhoes de reais\n", c2_pib_bilhoes);
    printf("    Numero de Pontos Turisticos: %d\n", c2_num_pontos_turisticos);
    printf("    Densidade Populacional: %.2f hab/km2\n", c2_densidade_populacional);
    printf("    PIB per Capita: %.2f reais\n", c2_pib_per_capita);

    // ====================================================================
    // ONDE IREMOS IMPLEMENTAR O MENU INTERATIVO DE COMPARACAO
    // NIVEL AVENTUREIRO: MENU COM SWITCH PARA ESCOLHER ATRIBUTO
    // LOGICA DE COMPARACAO COM IF-ELSE (INCLUINDO ANINHADAS)
    // ====================================================================

    // --- VARIAVEL PARA ARMAZENAR A ESCOLHA DO USUARIO ---
    int opcao_menu;

    // --- EXIBICAO DO MENU ---
    printf("\n==================================================\n");
    printf("           MENU DE COMPARACAO DE CARTAS\n");
    printf("==================================================\n");
    printf("ESCOLHA A OPCAO DE COMPARACAO:\n\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Comparar TODOS os atributos\n");
    printf("8 - Comparar com 2 atributos\n");
    printf("\nDigite sua escolha (1-8): ");
    scanf("%d", &opcao_menu);

    // --- ESTRUTURA SWITCH PARA PROCESSAR A ESCOLHA ---
    switch(opcao_menu) {
        case 1: // COMPARACAO POR POPULACAO
            printf("\n==================================================\n");
            printf("      COMPARACAO DE CARTAS (Atributo: Populacao)\n");
            printf("==================================================\n\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", c1_nome_cidade, c1_codigo, c1_populacao);
            printf("Carta 2 - %s (%s): %d habitantes\n\n", c2_nome_cidade, c2_codigo, c2_populacao);
            
            // LOGICA DE COMPARACAO: MAIOR POPULACAO VENCE
            if (c1_populacao > c2_populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1_nome_cidade);
            }
            else if (c1_populacao < c2_populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2_nome_cidade);
            }
            else {
                printf("Resultado: Empatou! Ambas as cartas tem a mesma populacao.\n");
            }
            break;

        case 2: // COMPARACAO POR AREA
            printf("\n==================================================\n");
            printf("      COMPARACAO DE CARTAS (Atributo: Area)\n");
            printf("==================================================\n\n");
            printf("Carta 1 - %s (%s): %.2f km2\n", c1_nome_cidade, c1_codigo, c1_area_km2);
            printf("Carta 2 - %s (%s): %.2f km2\n\n", c2_nome_cidade, c2_codigo, c2_area_km2);
            
            // LOGICA DE COMPARACAO: MAIOR AREA VENCE
            if (c1_area_km2 > c2_area_km2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1_nome_cidade);
            }
            else if (c1_area_km2 < c2_area_km2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2_nome_cidade);
            }
            else {
                printf("Resultado: Empatou! Ambas as cartas tem a mesma area.\n");
            }
            break;

        case 3: // COMPARACAO POR PIB
            printf("\n==================================================\n");
            printf("      COMPARACAO DE CARTAS (Atributo: PIB)\n");
            printf("==================================================\n\n");
            printf("Carta 1 - %s (%s): %.2f bilhoes de reais\n", c1_nome_cidade, c1_codigo, c1_pib_bilhoes);
            printf("Carta 2 - %s (%s): %.2f bilhoes de reais\n\n", c2_nome_cidade, c2_codigo, c2_pib_bilhoes);
            
            // LOGICA DE COMPARACAO: MAIOR PIB VENCE
            if (c1_pib_bilhoes > c2_pib_bilhoes) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1_nome_cidade);
            }
            else if (c1_pib_bilhoes < c2_pib_bilhoes) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2_nome_cidade);
            }
            else {
                printf("Resultado: Empatou! Ambas as cartas tem o mesmo PIB.\n");
            }
            break;

        case 4: // COMPARACAO POR PONTOS TURISTICOS
            printf("\n==================================================\n");
            printf("      COMPARACAO DE CARTAS (Atributo: Pontos Turisticos)\n");
            printf("==================================================\n\n");
            printf("Carta 1 - %s (%s): %d pontos\n", c1_nome_cidade, c1_codigo, c1_num_pontos_turisticos);
            printf("Carta 2 - %s (%s): %d pontos\n\n", c2_nome_cidade, c2_codigo, c2_num_pontos_turisticos);
            
            // LOGICA DE COMPARACAO: MAIOR NUMERO DE PONTOS TURISTICOS VENCE
            if (c1_num_pontos_turisticos > c2_num_pontos_turisticos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1_nome_cidade);
            }
            else if (c1_num_pontos_turisticos < c2_num_pontos_turisticos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2_nome_cidade);
            }
            else {
                printf("Resultado: Empatou! Ambas as cartas tem o mesmo numero de pontos turisticos.\n");
            }
            break;

        case 5: // COMPARACAO POR DENSIDADE POPULACIONAL
            printf("\n==================================================\n");
            printf("      COMPARACAO DE CARTAS (Atributo: Densidade Populacional)\n");
            printf("==================================================\n\n");
            printf("Carta 1 - %s (%s): %.2f hab/km2\n", c1_nome_cidade, c1_codigo, c1_densidade_populacional);
            printf("Carta 2 - %s (%s): %.2f hab/km2\n\n", c2_nome_cidade, c2_codigo, c2_densidade_populacional);
            
            // LOGICA DE COMPARACAO: MENOR DENSIDADE VENCE (REGRA INVERTIDA!)
            if (c1_densidade_populacional < c2_densidade_populacional) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1_nome_cidade);
            }
            else if (c1_densidade_populacional > c2_densidade_populacional) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2_nome_cidade);
            }
            else {
                printf("Resultado: Empatou! Ambas as cartas tem a mesma densidade populacional.\n");
            }
            break;

        case 6: // COMPARACAO POR PIB PER CAPITA
            printf("\n==================================================\n");
            printf("      COMPARACAO DE CARTAS (Atributo: PIB per Capita)\n");
            printf("==================================================\n\n");
            printf("Carta 1 - %s (%s): %.2f reais\n", c1_nome_cidade, c1_codigo, c1_pib_per_capita);
            printf("Carta 2 - %s (%s): %.2f reais\n\n", c2_nome_cidade, c2_codigo, c2_pib_per_capita);
            
            // LOGICA DE COMPARACAO: MAIOR PIB PER CAPITA VENCE
            if (c1_pib_per_capita > c2_pib_per_capita) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1_nome_cidade);
            }
            else if (c1_pib_per_capita < c2_pib_per_capita) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2_nome_cidade);
            }
            else {
                printf("Resultado: Empatou! Ambas as cartas tem o mesmo PIB per capita.\n");
            }
            break;

        case 7: // COMPARAR TODOS OS ATRIBUTOS
            printf("\n==================================================\n");
            printf("        RESULTADOS DA BATALHA DE CARTAS\n");
            printf("==================================================\n");

            // --- LÓGICA DE COMPARAÇÃO (BATALHA) ---
            // USAMOS O OPERADOR TERNÁRIO (?:) PARA EXIBIR O RESULTADO E O VALOR BINÁRIO (1 OU 0)

            // 1. Populacao (Maior vence)
            printf("Populacao: %s (%d)\n", 
            (c1_populacao > c2_populacao) ? "Carta 1 venceu" : "Carta 2 venceu", 
            (c1_populacao > c2_populacao)); // O RESULTADO DA COMPARACAO E 1 (VERDADEIRO) OU 0 (FALSO)

            // 2. Area (Maior vence)
            printf("Area: %s (%d)\n", 
            (c1_area_km2 > c2_area_km2) ? "Carta 1 venceu" : "Carta 2 venceu", 
            (c1_area_km2 > c2_area_km2));

            // 3. PIB (Maior vence)
            printf("PIB: %s (%d)\n", 
            (c1_pib_bilhoes > c2_pib_bilhoes) ? "Carta 1 venceu" : "Carta 2 venceu", 
            (c1_pib_bilhoes > c2_pib_bilhoes));
     
            // 4. Pontos Turisticos (Maior vence)
            printf("Pontos Turisticos: %s (%d)\n", 
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
            break;

        case 8: // COMPARACAO COM 2 ATRIBUTOS
            {
                // --- VARIAVEIS PARA ARMAZENAR AS ESCOLHAS DO USUARIO ---
                int atributo1, atributo2;
                float valor_atributo1_c1, valor_atributo1_c2; // VALORES NORMALIZADOS (1.0 PARA VENCER)
                float valor_atributo2_c1, valor_atributo2_c2;
                float soma_c1, soma_c2; // SOMA DOS VALORES NORMALIZADOS

                // --- PRIMEIRO MENU: ESCOLHER ATRIBUTO 1 ---
                printf("\n==================================================\n");
                printf("           COMPARACAO COM 2 ATRIBUTOS\n");
                printf("==================================================\n\n");
                printf("ESCOLHA O PRIMEIRO ATRIBUTO:\n\n");
                printf("1 - Populacao\n");
                printf("2 - Area\n");
                printf("3 - PIB\n");
                printf("4 - Numero de Pontos Turisticos\n");
                printf("5 - Densidade Populacional\n");
                printf("6 - PIB per Capita\n");
                printf("\nDigite sua escolha (1-6): ");
                scanf("%d", &atributo1);

                // --- SEGUNDO MENU DINAMICO: ESCOLHER ATRIBUTO 2 (SOMENTE OS NAO ESCOLHIDOS) ---
                printf("\nESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro):\n\n");
                
                // MENU DINAMICO: NAO MOSTRA O ATRIBUTO JA ESCOLHIDO
                if (atributo1 != 1) printf("1 - Populacao\n");
                if (atributo1 != 2) printf("2 - Area\n");
                if (atributo1 != 3) printf("3 - PIB\n");
                if (atributo1 != 4) printf("4 - Numero de Pontos Turisticos\n");
                if (atributo1 != 5) printf("5 - Densidade Populacional\n");
                if (atributo1 != 6) printf("6 - PIB per Capita\n");
                
                printf("\nDigite sua escolha: ");
                scanf("%d", &atributo2);

                // --- VALIDACAO: VERIFICAR SE OS ATRIBUTOS SAO DIFERENTES ---
                if (atributo1 == atributo2) {
                    printf("\nERRO: Voce nao pode escolher o mesmo atributo duas vezes!\n");
                    break;
                }

                // --- COMPARACAO DO PRIMEIRO ATRIBUTO ---
                switch(atributo1) {
                    case 1: // POPULACAO
                        valor_atributo1_c1 = (c1_populacao > c2_populacao) ? 1.0 : 0.0;
                        valor_atributo1_c2 = (c2_populacao > c1_populacao) ? 1.0 : 0.0;
                        break;
                    case 2: // AREA
                        valor_atributo1_c1 = (c1_area_km2 > c2_area_km2) ? 1.0 : 0.0;
                        valor_atributo1_c2 = (c2_area_km2 > c1_area_km2) ? 1.0 : 0.0;
                        break;
                    case 3: // PIB
                        valor_atributo1_c1 = (c1_pib_bilhoes > c2_pib_bilhoes) ? 1.0 : 0.0;
                        valor_atributo1_c2 = (c2_pib_bilhoes > c1_pib_bilhoes) ? 1.0 : 0.0;
                        break;
                    case 4: // PONTOS TURISTICOS
                        valor_atributo1_c1 = (c1_num_pontos_turisticos > c2_num_pontos_turisticos) ? 1.0 : 0.0;
                        valor_atributo1_c2 = (c2_num_pontos_turisticos > c1_num_pontos_turisticos) ? 1.0 : 0.0;
                        break;
                    case 5: // DENSIDADE POPULACIONAL (REGRA INVERTIDA!)
                        valor_atributo1_c1 = (c1_densidade_populacional < c2_densidade_populacional) ? 1.0 : 0.0;
                        valor_atributo1_c2 = (c2_densidade_populacional < c1_densidade_populacional) ? 1.0 : 0.0;
                        break;
                    case 6: // PIB PER CAPITA
                        valor_atributo1_c1 = (c1_pib_per_capita > c2_pib_per_capita) ? 1.0 : 0.0;
                        valor_atributo1_c2 = (c2_pib_per_capita > c1_pib_per_capita) ? 1.0 : 0.0;
                        break;
                    default:
                        printf("\nERRO: Atributo 1 invalido!\n");
                        break;
                }

                // --- COMPARACAO DO SEGUNDO ATRIBUTO ---
                switch(atributo2) {
                    case 1: // POPULACAO
                        valor_atributo2_c1 = (c1_populacao > c2_populacao) ? 1.0 : 0.0;
                        valor_atributo2_c2 = (c2_populacao > c1_populacao) ? 1.0 : 0.0;
                        break;
                    case 2: // AREA
                        valor_atributo2_c1 = (c1_area_km2 > c2_area_km2) ? 1.0 : 0.0;
                        valor_atributo2_c2 = (c2_area_km2 > c1_area_km2) ? 1.0 : 0.0;
                        break;
                    case 3: // PIB
                        valor_atributo2_c1 = (c1_pib_bilhoes > c2_pib_bilhoes) ? 1.0 : 0.0;
                        valor_atributo2_c2 = (c2_pib_bilhoes > c1_pib_bilhoes) ? 1.0 : 0.0;
                        break;
                    case 4: // PONTOS TURISTICOS
                        valor_atributo2_c1 = (c1_num_pontos_turisticos > c2_num_pontos_turisticos) ? 1.0 : 0.0;
                        valor_atributo2_c2 = (c2_num_pontos_turisticos > c1_num_pontos_turisticos) ? 1.0 : 0.0;
                        break;
                    case 5: // DENSIDADE POPULACIONAL (REGRA INVERTIDA!)
                        valor_atributo2_c1 = (c1_densidade_populacional < c2_densidade_populacional) ? 1.0 : 0.0;
                        valor_atributo2_c2 = (c2_densidade_populacional < c1_densidade_populacional) ? 1.0 : 0.0;
                        break;
                    case 6: // PIB PER CAPITA
                        valor_atributo2_c1 = (c1_pib_per_capita > c2_pib_per_capita) ? 1.0 : 0.0;
                        valor_atributo2_c2 = (c2_pib_per_capita > c1_pib_per_capita) ? 1.0 : 0.0;
                        break;
                    default:
                        printf("\nERRO: Atributo 2 invalido!\n");
                        break;
                }

                // --- CALCULO DA SOMA DOS ATRIBUTOS ---
                soma_c1 = valor_atributo1_c1 + valor_atributo2_c1;
                soma_c2 = valor_atributo1_c2 + valor_atributo2_c2;

                // --- EXIBICAO DOS RESULTADOS ---
                printf("\n==================================================\n");
                printf("      RESULTADO DA COMPARACAO AVANCADA\n");
                printf("==================================================\n\n");

                printf("Atributo 1 - Carta 1: %.0f ponto(s)\n", valor_atributo1_c1);
                printf("Atributo 1 - Carta 2: %.0f ponto(s)\n", valor_atributo1_c2);
                printf("Atributo 2 - Carta 1: %.0f ponto(s)\n", valor_atributo2_c1);
                printf("Atributo 2 - Carta 2: %.0f ponto(s)\n\n", valor_atributo2_c2);

                printf("SOMA - Carta 1 (%s): %.0f ponto(s)\n", c1_nome_cidade, soma_c1);
                printf("SOMA - Carta 2 (%s): %.0f ponto(s)\n\n", c2_nome_cidade, soma_c2);

                // --- DETERMINACAO DO VENCEDOR OU EMPATE ---
                if (soma_c1 > soma_c2) {
                    printf("*** CARTA 1 (%s) VENCEU! ***\n", c1_nome_cidade);
                }
                else if (soma_c1 < soma_c2) {
                    printf("*** CARTA 2 (%s) VENCEU! ***\n", c2_nome_cidade);
                }
                else {
                    printf("*** EMPATOU! ***\n");
                }
            }
            break;

        default: // OPCAO INVALIDA
            printf("\nERRO: Opcao invalida! Por favor, escolha um numero entre 1 e 8.\n");
            break;
    } // FIM DO SWITCH


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
    Area: 5165.00 km2
    PIB: 65156.00 bilhoes de reais
    Numero de Pontos Turisticos: 156

### CARTA 2: 02 ###
    Estado: A
    Codigo da Carta: 02
    Nome da Cidade: VilaVelha
    Populacao: 6666 habitantes
    Area: 156165.00 km2
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
    Area: 547.63 km2
    PIB: 37.28 bilhoes de reais
    Numero de Pontos Turisticos: 10
    Densidade Populacional: 980.16 hab/km2
    PIB per Capita: 69453.11 reais

### CARTA 2: 02 ###
    Estado: E
    Codigo da Carta: 02
    Nome da Cidade: Vitoria
    Populacao: 378642 habitantes
    Area: 98.19 km2
    PIB: 31.42 bilhoes de reais
    Numero de Pontos Turisticos: 25
    Densidade Populacional: 3856.22 hab/km2
    PIB per Capita: 82980.76 reais
    
 ==================================================
        RESULTADOS DA BATALHA DE CARTAS
==================================================
Populacao: Carta 1 venceu (1)
Area: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turisticos: Carta 2 venceu (0)
Densidade Populacional: Carta 1 venceu (1)
PIB per Capita: Carta 2 venceu (0)
Super Poder: Carta 2 venceu (0)


==================================================
         SUPER TRUNFO FINALIZADO COM SUCESSO
==================================================*/

/*EXEMPLO DE COMO FUNCIONA A COMPARACAO COM 2 ATRIBUTOS (OPCAO 8):
SELECIONADOS PELO USUARIO

Exemplo de uso - Passo a passo:

1. USUARIO ESCOLHE ATRIBUTO 1:
==================================================
           COMPARACAO COM 2 ATRIBUTOS
==================================================

ESCOLHA O PRIMEIRO ATRIBUTO:

1 - Populacao
2 - Area
3 - PIB
4 - Numero de Pontos Turisticos
5 - Densidade Populacional
6 - PIB per Capita

Digite sua escolha (1-6): 1

2. SISTEMA MOSTRA MENU DINAMICO (ATRIBUTO 1 JA ESCOLHIDO NAO APARECE):
ESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro):

2 - Area
3 - PIB
4 - Numero de Pontos Turisticos
5 - Densidade Populacional
6 - PIB per Capita

Digite sua escolha: 3

3. SISTEMA CALCULA RESULTADO BASEADO NOS 2 ATRIBUTOS:
==================================================
      RESULTADO DA COMPARACAO AVANCADA
==================================================

Atributo 1 - Carta 1: 1 ponto(s)
Atributo 1 - Carta 2: 0 ponto(s)
Atributo 2 - Carta 1: 1 ponto(s)
Atributo 2 - Carta 2: 0 ponto(s)

SOMA - Carta 1 (Serra): 2 ponto(s)
SOMA - Carta 2 (Vitoria): 0 ponto(s)

*** CARTA 1 (Serra) VENCEU! ***

==================================================
         SUPER TRUNFO FINALIZADO COM SUCESSO
==================================================

LOGICA DE PONTUACAO:
- Cada atributo ganho vale 1.0 ponto
- A carta que soma mais pontos vence
- Em caso de empate na soma, o resultado e EMAPATO
- Densidade Populacional usa REGRA INVERTIDA (menor valor vence)
*/

return 0;
} 
