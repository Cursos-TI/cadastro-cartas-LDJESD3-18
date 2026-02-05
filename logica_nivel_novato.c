#include<stdio.h>                                                                                              // Acessa a Biblioteca,que faz com que haja entrada e saída de dados

  int main(){                                                                                                      // Função para que o programa funcione
    char letra1;                                                                                                  //Declara o formato da variável letra1 como char(caractere)
    char codigo1[20];                                                                                            //Declara o formato da variável código1 como char[](string ou array sequência de caracteres)
    char cidade1[20];                                                                                           //Declara o formato da variável cidade1 como  char[](string ou array,sequência de caracteres)
    int populacao1;                                                                                            //Declara o formato da variável população1 como int (número inteiro decimal))
    float area1;                                                                                              //Declara o formato da variável área1 como float (número de ponto fluante(número com casas decimais))  
    float PIB1;                                                                                              //Declara o formato da variável PIB1 como float (número de ponto fluante(número com casas decimais))                                                                                               
    int pontos_turisticos1;                                                                                //Declara o formato da variável porntos_turísticos1(número inteiro decimal)
    float densidade_populacional1;                                                                        //Declara o formato da variável densidade_populacional1(número de ponto flutuante)
    float PIB_per1;                                                                                        //Declara o formato da variável PIB_per1(número de ponto fluante)
    char letra2;                                                                                          //Declara o formato da variável letra2 como char(caractere)
    char codigo2[20];                                                                                    //Declara o formato da variável código2 como char[](string ou array sequência de caracteres)
    char cidade2[20];                                                                                   //Declara o formato da variável cidade2 como  char[](string ou array,sequência de caracteres)
    int populacao2;                                                                                    //Declara o formato da variável população2 como int (número inteiro decimal))
    float area2;                                                                                      //Declara o formato da variável área2 como float (número de ponto fluante(número com casas decimais))  
    float PIB2;                                                                                      //Declara o formato da variável PIB2 como float (número de ponto fluante(número com casas decimais))  
    int pontos_turisticos2;                                                                        //Declara o formato da variável porntos_turísticos2(número inteiro decimal)
    float densidade_populacional2;                                                                //Declara o formato da variável densiade_populacional2(número de ponto flutuante)
    float PIB_per2;                                                                              //Declara o formato da variável PIB_per2(número de ponto fluante)
    


    printf("Super Trunfo em C\n");                                                                // Mostra na tela o nome do jogo
    printf("Carta 1:\n");                                                                        //  Mostra na tela  a carta 1 
    printf("Estado:\n");                                                                              // Pede ao usúario a letra do estado
    scanf(" %c",&letra1);                                                                      // Armazena o valor de Estado na variável letra1

    printf("Código:\n");                                                                      // Pede ao usuário o código da carta(sequência formada pela letra do estado e sequência de 01 a 04(ex;A01)  )                                                                          
    scanf(" %s",codigo1);                                                                  // Armazena o valor do código da carta na variável código1

    printf("Nome da cidade:\n");                                                            // Pede ao usuário o nome da cidade                                                       
    scanf(" %s",cidade1);                                                                // Armazena o valor de cidade na variável cidade1
  
    printf("População:\n");                                                             //Pede ao usuário o número de habitantes da cidade
    scanf(" %d",&populacao1);                                                          // Armazena o valor de população na variável população1

    printf("Área:\n");                                                                //Pede ao usuário o número da área da cidade 
    scanf(" %f",&area1);                                                             // Armazena o valor da área da cidade na variável área1

    printf("PIB:\n");                                                               //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %f",&PIB1);                                                            //Armazena o valor de PIB  em PIB1
   
    printf("Números de pontos turísticos:\n");                                   //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %d",&pontos_turisticos1);                                           //Armazena o valor de pontos turísticos em pontos_turísticos1


    densidade_populacional1 = (float)populacao1/area1;                        //Converte os valores de populacao1 para float e calcula  a densidade populacional da carta 1
    PIB_per1= PIB1/(float)populacao1;                                        //Converte os valores de populacao1 para float e calcula o PIB Per Capita
  

    printf("\n \n");                                                               // faz um espaçamento
    
    printf("Carta 1:\n");                                                          //Mostra a palavra carta 1

    printf("Estado: %c\n",letra1);                                                // Mostra a palavra estado e o valor dela
    
    printf("Código da carta 1: %s\n",codigo1);                                   //Mostra a palavra código de carta e o valor dela
 
    printf("Nome da cidade: %s\n",cidade1);                                     //Mostra a palavra nome da cidade e  o valor dela

    printf("População: %d\n",populacao1);                                     //Mostra a palavra população e o valor dela

    printf("Área: %.2f km²\n",area1);                                         //Mostra a palavra área e o valor dela

    printf("PIB 1: %.2f bilhões de reais\n",PIB1);                           //Mostra a palavra PIB e o valor dela 
 
    printf("Número de pontos turísticos: %d\n",pontos_turisticos1);          //Mostra a palavra Números de pontos turísticos

    printf("Densidade populacional: %.2f hab/km²\n",densidade_populacional1);  //Mostra a expressão densidade populacional e o seu valor 
  
    printf("PIB Per Capita: %.2f reais\n",PIB_per1);                        //Mostra a expressão PIB per Capita e o seu valor 


    printf("\n \n");                                                      // faz um espaçamento
    

    printf("Super Trunfo em C\n");                                   // Mostra na tela o nome do jogo
    printf("Carta 2:\n");                                           //  Mostra na tela  a carta 2 
    printf("Estado:\n");                                           // Pede ao usúario a letra do estado
    scanf(" %c",&letra2);                                          // Armazena o valor de Estado na variável letra2
  
    printf("Código:\n");                                          // Pede ao usuário o código da carta(sequência formada pela letra do estado e sequência de 01 a 04(ex;A01)  )
    scanf(" %s",codigo2);                                       // Armazena o valor do código da carta na variável código2
    
    printf("Nome da cidade:\n");                               // Pede ao usuário o nome da cidade
    scanf(" %s",cidade2);                                     // Armazena o valor de cidade na variável cidade2
    
    printf("População:\n");                                  //Pede ao usuário o número de habitantes da cidade
    scanf(" %d",&populacao2);                               // Armazena o valor de população na variável população2

    printf("Área:\n");                                     //Pede ao usuário o número da área da cidade 
    scanf(" %f",&area2);                                  // Armazena o valor da área da cidade na variável área2

    printf("PIB:\n");                                    //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %f",&PIB2);                                 //Armazena o valor de PIB  em PIB2

    printf("Números de pontos turísticos:\n");        //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %d",&pontos_turisticos2);                //Armazena o valor de pontos turísticos em pontos_turísticos2

    densidade_populacional2 = (float)populacao2/area2;                   //Converte os valores de populacao2 para float e calcula  a densidade populacional da carta 1
    PIB_per2= PIB2/(float)populacao2;                                    //Converte os valores de populacao2 para float e calcula o PIB Per Capita

  


    printf("\n \n");                                                      // faz um espaçamento
    



    printf("Carta 2:\n");                                                              //Mostra a palavra carta 2 

    printf("Estado:%c\n",letra2);                                                   // Mostra a palavra estado e o valor dela
    
    printf("Código da carta 1:%s\n",codigo2);                                     //Mostra a palavra código de carta e o valor dela

    printf("Nome da cidade:%s\n",cidade2);                                       //Mostra a palavra nome da cidade e  o valor dela

    printf("População:%d\n",populacao2);                                        //Mostra a palavra população e o valor dela

    printf("Área:%.2f km²\n",area2);                                          //Mostra a plavra área e o valor dela

    printf("PIB 1:%.2f bilhões de reais\n",PIB2);                           //Mostra a palavra PIB e o valor dela 
 
    printf("Número de pontos turísticos:%d\n",pontos_turisticos2);        //Mostra a palavra Números de pontos turísticos

    printf("Densidade populacional:%.2f hab/km² \n",densidade_populacional2);  //Mostra a expressão densidade populacional e o seu valor 
  
    printf("PIB Per Capita:%.2f reais\n",PIB_per2);                           //Mostra a expressão PIB per Capita e o seu valor 
    

    printf("\n \n");                                                         //Faz um espaçamento
   
   printf("Comparação de cartas(Atributo:Área):\n");                       //Mostra a expressão comparação de cartas(Atributo:Área:)
   printf("Carta 1-Recife(Pe):%.2f\n",area1);                             //Mostra a palavra Carta1-Recife(Pe):
   printf("Carta 2-Sergipe(AL):%.2f\n",area2);                           //Mostra a palavra Carta2-Sergipe(AL):

   if(area1 >area2){                                                    //Condição:se area1>area2                                  
      printf("Resultado:Carta 1(Recife)venceu!\n");                    //Mostra a frase Resultado:Carta 1(Recife)venceu!se a condição for verdadeira
    }
    else{                                                            //Condição:se não,ou seja se area1<area2
     printf("Resultado:Carta 2(Sergipe) venceu!\n");                //Mostra a frase Resultado:Carta 2(Sergipe) venceu! se a condição for falsa
    }

   }