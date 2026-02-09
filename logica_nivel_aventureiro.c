
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
    int escolha_atributo;                                                                       //Declara o formato variável escolha atributo(número inteiro)
    


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
    
   
    printf("\n \n")  ;                                             //Faz um espaçamento

    printf("***Comparação de Atributos***\n");                   //Mostra a expressão comparação de atributos
    printf("1.População\n");                                    //Mostra o atributo População para a comparação
    printf("2.Área\n");                                        //Mostra o atributo Área para a comparação
    printf("3.PIB\n");                                        //Mostra o atributo PIB para a comparação
    printf("4.Número de pontos turísticos:\n");              //Mostra o atributo número de pontos turísticos  para a comparação
    printf("5.Densidade Populacional\n");                   //Mostra o atributo Densidade Populacional para a comparação
    printf("6.PIB Per Capita\n");                          //Mostra o atributo Pib Per Capita para a comparação
    printf("Escolha: \n");                                // Mostra a palavra Escolha
    scanf("%d", &escolha_atributo);                      //Armazena o valor na variável escolha_atributo
   
   printf("\n \n");                                                  //Faz um espaçamento

    switch(escolha_atributo)                                      //Função que seleciona o valor de escolha_atributo para direcionar o usuário para um dos tópicos
      { case 1:                                                  //se escolha_atributo = 01    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);         // Mostra o nome das cidades  
        printf("2.População\n");                               //Mostra  a palavra População
        printf("3.População de %s:%d\n",cidade1,populacao1);  //Mostra a população de cidade1
        printf("4.População de %s:%d\n",cidade2,populacao2); //Mostra a população da cidade2
        break;                                              //sai do switch

        case 2:                                                 //se escolha_atributo = 02    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);        // Mostra o nome das cidades  
        printf("2.Área\n");                                   //Mostra  a palavra Área
        printf("3.Área de %s:%.2f\n",cidade1,area1);         //Mostra a área de cidade1
        printf("4.Área de %s:%.2f\n",cidade2,area2);        //Mostra a área de cidade2
        break;                                             //sai do switch

        case 3:                                                  //se escolha_atributo = 03   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);         // Mostra o nome das cidades  
        printf("2.PIB\n");                                     //Mostra  a palavra PIB
        printf("3.PIB de %s:%.2f\n",cidade1,PIB1);            //Mostra o PIB de cidade1
        printf("4.PIB de %s:%.2f\n",cidade2,PIB2);           //Mostra o PIB da cidade2
        break;                                              //sai do switch
        
        case 4:                                                                                 //se escolha_atributo = 04    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);                                        // Mostra o nome das cidades  
        printf("2.Número de pontos turísticos\n");                                           //Mostra  a palavra número de pontos turísticos
        printf("3.Número de pontos turísticos de %s:%d\n",cidade1,pontos_turisticos1 ) ;     //Mostra o número de pontos turísticos da cidade1
        printf("4.Número de pontos turísticos de %s:%d\n",cidade2,pontos_turisticos2);      //Mostra o número de pontos turísticos da cidade2
        break;                                                                              //sai do switch

        case 5:                                                                                     //se escolha_atributo = 05   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);                                                 // Mostra o nome das cidades  
        printf("2.Densidade Populacional\n");                                                     //Mostra  a palavra Densidade Populacional
        printf("3.Densidade Populacional de %s:%.2f\n",cidade1,densidade_populacional1);         //Mostra a Densidade Populacional de cidade 1
        printf("4.Densidade Populacional de %s:%.2f\n",cidade2,densidade_populacional2);        //Mostra a Densidade Populacional  da cidade 2
        break;                                                                                  //sai do switch

        case 6:                                                        //se escolha_atributo = 06   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);               // Mostra o nome das cidades  
        printf("2.PIB Per Capita\n");                                //Mostra  a palavra PIB Per Capita
        printf("3.PIB Per Capita de %s:%.2f\n",cidade1,PIB_per1);   //Mostra o PIB Per Capita de cidade1
        printf("4.PIB Per Capita de %s:%.2f\n",cidade2,PIB_per2);  //Mostra o PIB Per Capita de cidade2
        break;                                                    //sai do switch

        if(populacao1==populacao2 ||(area1==area2)|| (PIB1==PIB2)||
        (pontos_turisticos1==pontos_turisticos2)||
        ((1/densidade_populacional1) == (1/densidade_populacional2)) ||
        (PIB_per1== PIB_per2) ){                                                      //Função que determina que se os valores da duas cidades forem iguais,se pelo menos uma for igual
          printf("Empate!");                                                         //Mostra a palavra empate
        } else if (populacao1>populacao2 ||(area1>area2)|| (PIB1>PIB2)||         //se não ,se os valores da cidade1 forem maiores que a da cidade2,pelo menos 1 for maior
        (pontos_turisticos1>pontos_turisticos2)||
        ((1/densidade_populacional1) < (1/densidade_populacional2)) ||
        (PIB_per1 > PIB_per2) ){ 
           
          printf("Carta 1 (%s) venceu!",cidade1);               //Mostra a Expressão carta1(nome da cidade)venceu
      } else {                                                 //Se não
        printf("Carta 2 (%s)venceu!",cidade2) ;               //Mostra Carta 2 (nome da cidade) venceu                        
      }
    }
          

                                                                                                            //Declara o formato da variável população1 como int (número inteiro decimal)
     //area1;                                                                                              //Declara o formato da variável área1 como float (número de ponto fluante(número com casas decimais))  
     //PIB1;                                                                                              //Declara o formato da variável PIB1 como float (número de ponto fluante(número com casas decimais))                                                                                               
    //pontos_turisticos1;                                                                                //Declara o formato da variável porntos_turísticos1(número inteiro decimal)
     //densidade_populacional1;                                                                         //Declara o formato da variável densidade_populacional1(número de ponto flutuante)