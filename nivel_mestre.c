#include<stdio.h>                                                                                              // Acessa a Biblioteca,que faz com que haja entrada e saída de dados

  int main(){                                                                                                      // Função para que o programa funcione
    char letra1;                                                                                                  //Declara o formato da variável letra1 como char(caractere)
    char codigo1[20];                                                                                            //Declara o formato da variável código1 como char[](string ou array sequência de caracteres)
    char cidade1[20];                                                                                           //Declara o formato da variável cidade1 como  char[](string ou array,sequência de caracteres)
    unsigned long int populacao1;                                                                              //Declara o formato da variável população1 como int (número inteiro decimal))
    float area1;                                                                                              //Declara o formato da variável área1 como float (número de ponto fluante(número com casas decimais))  
    float PIB1;                                                                                              //Declara o formato da variável PIB1 como float (número de ponto fluante(número com casas decimais))                                                                                               
    int pontos_turisticos1;                                                                                //Declara o formato da variável porntos_turísticos1(número inteiro decimal)
    float densidade_populacional1;                                                                        //Declara o formato da variável densidade_populacional1(número de ponto flutuante)
    float PIB_per1;                                                                                      //Declara o formato da variável PIB_per1(número de ponto fluante)
    float super_poder1;                                                                                 //Declara o formato da variável super_poder1(número inteiro positivo muito grande)
    
   

    char letra2;                                                                                        //Declara o formato da variável letra2 como char(caractere)
    char codigo2[20];                                                                                  //Declara o formato da variável código2 como char[](string ou array sequência de caracteres)
    char cidade2[20];                                                                                 //Declara o formato da variável cidade2 como  char[](string ou array,sequência de caracteres)
    unsigned long int populacao2;                                                                    //Declara o formato da variável população2 como int (número inteiro decimal))
    float area2;                                                                                    //Declara o formato da variável área2 como float (número de ponto fluante(número com casas decimais))  
    float PIB2;                                                                                    //Declara o formato da variável PIB2 como float (número de ponto fluante(número com casas decimais))  
    int pontos_turisticos2;                                                                       //Declara o formato da variável porntos_turísticos2(número inteiro decimal)
    float densidade_populacional2;                                                               //Declara o formato da variável densidade_populacional2(número de ponto flutuante)
    float PIB_per2;                                                                             //Declara o formato da variável PIB_per2(número de ponto fluante)
    float super_poder2;                                                                        //Declara o formato da variável super_poder2(número inteiro positivo  muito grande )        
    
    int comparacao_populacao;                                                                 //Declara o formato da variável comparacao_populacao(número inteiro)
    int comparacao_area;                                                                     //Declara o formato da variável comparacao_area(número inteiro)
    int comparacao_PIB;                                                                     //Declara o formato da variável comparacao_PIB(número inteiro)
    int comparacao_pontos;                                                                 //Declara o formato da variável comparacao_pontos(número inteiro)
    int comparacao_densidade;                                                             //Declara o formato da variável comparacao_densidade(número inteiro)
    int comparacao_capita;                                                               //Declara o formato da variável comparacao_capita(número inteiro)
    int comparacao_super;                                                               //Declara o formato da variável comparacao_super(número inteiro)


                                                                            
                                                                                                


    printf("Super Trunfo em C\n");                                                                // Mostra na tela o nome do jogo
    printf("Carta 1:\n");                                                                        //  Mostra na tela  a carta 1 
    printf("Estado:\n");                                                                              // Pede ao usúario a letra do estado
    scanf(" %c",&letra1);                                                                      // Armazena o valor de Estado na variável letra1

    printf("Código:\n");                                                                      // Pede ao usuário o código da carta(sequência formada pela letra do estado e sequência de 01 a 04(ex;A01)  )                                                                          
    scanf(" %s",codigo1);                                                                  // Armazena o valor do código da carta na variável código1

    printf("Nome da cidade:\n");                                                            // Pede ao usuário o nome da cidade                                                       
    scanf(" %s",cidade1);                                                                // Armazena o valor de cidade na variável cidade1
  
    printf("População:\n");                                                             //Pede ao usuário o número de habitantes da cidade
    scanf("%lu",&populacao1);                                                          // Armazena o valor de população na variável população1

    printf("Área:\n");                                                                //Pede ao usuário o número da área da cidade 
    scanf(" %f",&area1);                                                             // Armazena o valor da área da cidade na variável área1

    printf("PIB:\n");                                                               //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %f",&PIB1);                                                            //Armazena o valor de PIB  em PIB1
   
    printf("Números de pontos turísticos:\n");                                   //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %d",&pontos_turisticos1);                                           //Armazena o valor de pontos turísticos em pontos_turísticos1


    densidade_populacional1 = (float)populacao1/area1;                        //Converte os valores de populacao1 para float e calcula  a densidade populacional da carta 1
    PIB_per1= PIB1/(float)populacao1;                                        //Converte os valores de populacao1 para float e calcula o PIB Per Capita

   super_poder1 = (float)populacao1 + (float)area1 +(float)PIB1 +(float) pontos_turisticos1+(float)(1/densidade_populacional1 )+(float)PIB_per1;  //Converte os valores para float e soma as características da carta1,exceto código,estado e nome da cidade
    


  

    printf("\n \n");                                                               // faz um espaçamento
    
    printf("Carta 1:\n");                                                          //Mostra a palavra carta 1

    printf("Estado: %c\n",letra1);                                                // Mostra a palavra estado e o valor dela
    
    printf("Código da carta 1: %s\n",codigo1);                                   //Mostra a palavra código de carta e o valor dela
 
    printf("Nome da cidade: %s\n",cidade1);                                     //Mostra a palavra nome da cidade e  o valor dela

    printf("População:%lu \n",populacao1);                                     //Mostra a palavra população e o valor dela

    printf("Área: %.2f km²\n",area1);                                         //Mostra a palavra área e o valor dela

    printf("PIB 1: %.2f bilhões de reais\n",PIB1);                           //Mostra a palavra PIB e o valor dela 
 
    printf("Número de pontos turísticos: %d\n",pontos_turisticos1);          //Mostra a palavra Números de pontos turísticos

    printf("Densidade populacional: %.2f hab/km²\n",densidade_populacional1);  //Mostra a expressão densidade populacional e o seu valor 
  
    printf("PIB Per Capita: %.2f reais\n",PIB_per1);                        //Mostra a expressão PIB per Capita e o seu valor 

    printf("Super Poder:%2.f",super_poder1);                             
 
    

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
    scanf(" %lu",&populacao2);                               // Armazena o valor de população na variável população2

    printf("Área:\n");                                     //Pede ao usuário o número da área da cidade 
    scanf(" %f",&area2);                                  // Armazena o valor da área da cidade na variável área2

    printf("PIB:\n");                                    //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %f",&PIB2);                                 //Armazena o valor de PIB  em PIB2

    printf("Números de pontos turísticos:\n");        //Pede ao usuário o número do Produto Interno Produto(PIB) 
    scanf(" %d",&pontos_turisticos2);                //Armazena o valor de pontos turísticos em pontos_turísticos2

    densidade_populacional2 = (float)populacao2/area2;                   //Converte os valores de populacao2 para float e calcula  a densidade populacional da carta 1
    PIB_per2= PIB2/(float)populacao2;                                    //Converte os valores de populacao2 para float e calcula o PIB Per Capita

    super_poder2 = (float)populacao2 + (float)area2 +(float)PIB2 +(float) pontos_turisticos2+(float)(1/densidade_populacional2) +(float)PIB_per2;  //Converte os valores para float e soma as características da carta2,exceto código,estado e nome da cidade
    
    
  


    printf("\n \n");                                                      // faz um espaçamento
    



    printf("Carta 2:\n");                                                              //Mostra a palavra carta 2 

    printf("Estado:%c\n",letra2);                                                   // Mostra a palavra estado e o valor dela
    
    printf("Código da carta 1:%s\n",codigo2);                                     //Mostra a palavra código de carta e o valor dela

    printf("Nome da cidade:%s\n",cidade2);                                       //Mostra a palavra nome da cidade e  o valor dela

    printf("População:%lu\n",populacao2);                                        //Mostra a palavra população e o valor dela

    printf("Área:%.2f km²\n",area2);                                          //Mostra a palavra área e o valor dela

    printf("PIB 1:%.2f bilhões de reais\n",PIB2);                           //Mostra a palavra PIB e o valor dela 
 
    printf("Número de pontos turísticos:%d\n",pontos_turisticos2);         //Mostra a palavra Números de pontos turísticos

    printf("Densidade populacional:%.2f hab/km² \n",densidade_populacional2); //Mostra a expressão densidade populacional e o seu valor 
  
    printf("PIB Per Capita:%.2f reais\n",PIB_per2);                        //Mostra a expressão PIB per Capita e o seu valor 

    printf("Super Poder:%2f",super_poder2);                             
 


    comparacao_populacao = populacao1 > populacao2;                                          // compara o valor da população de cada carta e armazena o valor
    comparacao_area= area1 > area2  ;                                                       //compara o valor da área de cada carta e armazena o valor
    comparacao_PIB= PIB1 > PIB2;                                                           //compara o valor do PIB de cada carta e armazena o valor
    comparacao_pontos = pontos_turisticos1 > pontos_turisticos2;                          // compara o valor dos pontos turísticos de cada carta e armazena o valor
    comparacao_densidade= (1/densidade_populacional1) > (1/densidade_populacional2);     //compara o valor da densidade populacional de cada carta e armazena o valor
    comparacao_PIB= PIB_per1 > PIB_per2;                                                //compara o valor do PIB Per Capita de cada carta e armazena o valor
    comparacao_super = super_poder1 > super_poder2;                                    // compara o valor do Super poder de cada carta e armazena o valor

    
   printf("Comparação de Cartas:\n");                                                 //Mostra a expressão comparação de cartas
   printf("Populaçao:Carta 1 venceu(%d)\n",comparacao_populacao);                    //Mostra a palavra  popoulação, a carta que venceu e o valor de comparacao_populacao
   printf("Área:Carta 1 venceu(%d)\n",comparacao_area);                             //Mostra a palavra  área, a carta que venceu e o valor de comparacao_area                            
   printf("PIB:Carta 1 venceu(%d)\n",comparacao_PIB);                              //Mostra a palavra  PIB, a carta que venceu e o valor de comparacao_PIB
   printf("Pontos Turísticos:Carta 2 venceu(%d)\n",comparacao_pontos);            //Mostra a expressão  Pontos Turísticos , a carta que venceu e o valor de comparacao_pontos
   printf("Densidade Populacional:Carta 1 venceu(%d)\n",comparacao_densidade);   //Mostra a expressão Densidade Populacional, a carta que venceu e o valor de comparacao_densidade
   printf("PIB Per Capita:Carta 1 venceu(%d)\n",comparacao_capita);             //Mostra a expressão PIB Per Capita, a carta que venceu e o valor de comparacao_capita
   printf("Super Poder:Carta 1 venceu(%d)\n",comparacao_super);                //Mostra a expressão Super Poder, a carta que venceu e o valor de comparacao_super

  
  



     



  }
