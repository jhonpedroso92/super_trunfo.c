#include <stdio.h>
int main () {
  // declaração das variaveis para a carta 1
  char estado01;
  char codigoCarta1 [4] ; // ex: "A01" + caractere nulo'\0'
  char nomeCidade1 [50] ;
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  //Declaração das variáveia para a carta 2

  char estado2;
  char codigoCarta2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2; 

  //Inicio da coleta de dados da carta 1

  printf("Cadastro carta 1  \n");


  printf("Digite o estado (A-H):  ");
  scanf(" %c", &estado01); // Espaço antes do %c para consumir quebras de linhas pendentes

  printf("Digite o codigo da carta (ex: A01):  ");
  scanf("%s", codigoCarta1);

  printf("Digite o nome da cidade:  ");
  scanf("%s", nomeCidade1);

  printf("Digite a população:  ");
  scanf ("%d", &populacao1);

  printf("Digite a area (em KM²):  ");
  scanf("%f", &area1);


  printf("Digite o PIB ( em bilhões):  ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos:  ");
  scanf("%d", &pontosTuristicos1);

  printf("\n\n"); // Adiciona duas linha em branco para melhor organização

  printf("Cadastro carta 2  \n");

  printf("Digite o estado (A-H):  ");
  scanf(" %c", &estado2); // Espaço antes do %c é importante aqui também.

  printf("Digite o codigo da carta (ex:B02):  ");
  scanf("%s", &codigoCarta2);

  printf("Digite o nome da cidade:  ");
  scanf("%s", nomeCidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a area ( em KM²):  ");
  scanf("%f", &area2);

  printf("Digite o PIB ( em Bilhões):  ");
  scanf ("%f", &pib2);

  printf("Digite o numero de pontos turisticos:  ");
  scanf("%d", &pontosTuristicos2);

  printf("\n\n"); //Adiciona duas linhas em branco para separar a entreda da saída.


  //   Exibição dos dados cadastrados.

  printf(" Informações das Cartas Cadastradas ");

  // Exibindo dados da carta 1.

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado01);
  printf("Codigo: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População> %d\n", populacao1);
  printf("Area: %.2f km²\n", area1); // %.2f para formatar com duas casas decimais.
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

  printf("\n"); // Linha em branco para separar as cartas.

  printf("Carta2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2); // também o %.2f para apenas duas casas decimais.
  printf("PIB: %.2f Bilhões de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos2); 

  return 0;

  }

