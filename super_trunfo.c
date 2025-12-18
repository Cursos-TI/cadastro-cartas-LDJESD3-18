#include<stdio.h>                                    // Acessa a Biblioteca,que faz com que haja entrada e saída de dados

  int main(){                                      // Função para que o programa funcione
    char letra1;                                  //Declara o formato da variável letra1 como char(caractere)
    char código1[20];                            //Declara o formato da variável código1 como char[](string ou array sequência de caracteres)
    char cidade1[20];                           //Declara o formato da variável cidade1 como  char[](string ou array,sequência de caracteres)
    int população1;                            //Declara o formato da variável população1 como int (número inteiro decimal))
    float área1;                              //Declara o formato da variável área1 como float (número de ponto fluante(número com casas decimais))  
    float PIB1;                              //Declara o formato da variável PIB1 como float (número de ponto fluante(número com casas decimais))  
    float área1;                            //Declara o formato da variável área1 como float (número de ponto fluante(número com casas decimais))  
    int pontos_turísticos1;                //Declara o formato da variável porntos_turísticos1(número inteiro decimal)
    
    printf("Super Trunfo em C \n");       // Mostra na tela o nome do jogo
    printf("Carta 1:\n");                //  Mostra na tela  a carta 1 
    prinf("Estado:\n");                 // Pede ao usúario a letra do estado
    scanf("%c",letra1);                // Armazena o valor de Estado na variável letra1


    prinf("Código:\n");               // Pede ao usúario o código(sequência formada pela letra do estado e sequência de 01 a 04(ex;A01)  )
    scanf("%c",código1);             // Armazena o valor do código na variável código1
    
    prinf("Nome da cidade:\n");     // Pede ao usúario o nome da cidade
    scanf("%s",cidade1);           // Armazena o valor de cidade na variável cidade1
    



  }