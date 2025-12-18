#include<stdio.h>                                                                                          // Acessa a Biblioteca,que faz com que haja entrada e saída de dados

  int main(){                                                                                            // Função para que o programa funcione
    char letra1;                                                                                        //Declara o formato da variável letra1 como char(caractere)
    char código1[20];                                                                                  //Declara o formato da variável código1 como char[](string ou array sequência de caracteres)
    char cidade1[20];                                                                                 //Declara o formato da variável cidade1 como  char[](string ou array,sequência de caracteres)
    int população1;                                                                                  //Declara o formato da variável população1 como int (número inteiro decimal))
    float área1;                                                                                    //Declara o formato da variável área1 como float (número de ponto fluante(número com casas decimais))  
    float PIB1;                                                                                    //Declara o formato da variável PIB1 como float (número de ponto fluante(número com casas decimais))  
    float área1;                                                                                  //Declara o formato da variável área1 como float (número de ponto fluante(número com casas decimais))  
    int pontos_turísticos1;                                                                      //Declara o formato da variável porntos_turísticos1(número inteiro decimal)
    
    printf("Super Trunfo em C \n");                                                             // Mostra na tela o nome do jogo
    printf("Carta 1:\n");                                                                      //  Mostra na tela  a carta 1 
    prinf("Estado:\n");                                                                       // Pede ao usúario a letra do estado
    scanf("%c",letra1);                                                                      // Armazena o valor de Estado na variável letra1


    prinf("Código da carta:\n");                                                            // Pede ao usuário o código da carta(sequência formada pela letra do estado e sequência de 01 a 04(ex;A01)  )
    scanf("%c",código1);                                                                   // Armazena o valor do código da carta na variável código1
    
    prinf("Nome da cidade:\n");                                                              // Pede ao usuário o nome da cidade
    scanf("%s",cidade1);                                                                    // Armazena o valor de cidade na variável cidade1
    

    printf("População:\n");                                                                //Pede ao usuário o número de habitantes da cidade
    scanf("%d",população1);                                                               // Armazena o valor de população na variável população1


    printf("Área:\n");                                                                   //Pede ao usuário o número da área da cidade 
    scanf("%f",área1);                                                                  // Armazena o valor da área da cidade na variável área1

    printf("PIB:\n");                                                                  //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf("%f",PIB1);                                                                 //Armazena o valor de PIB  em PIB1



    printf("Números de pontos turísticos:\n");                                      //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf("%d",pontos_turísticos1);                                                //Armazena o valor de pontos turísticos em pontos_turísticos1


    
    printf("Carta 1:\n");                                                        //Mostra a palavra carta 

    printf("Estado:%c\n",letra1);                                               // Mostra a palavra estado e o valor dela
    
    printf("Código da carta 1:%c\n",código1);                                  //Mostra a palavra código de carta e o valor dela

    printf("Nome da cidade:%s\n",cidade1);                                    //Mostra a palavra nome da cidade e  o valor dela

    printf("População:%d\n",população1);                                     //Mostra a palavra população e o valor dela

    printf("Área:%f\n",área1);                                              //Mostra a plavra área e o valor dela

    printf("PIB 1:%f\n",PIB1);                                             //Mostra a palavra PIB e o valor dela 
 
    printf("Número de pontos turísticos:%d\n",pontos_turísticos1);        //Mostra a palavra Números de pontos turísticos


    


  






  }