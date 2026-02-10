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
    int pontos_turisticos2;                                                                         //Declara o formato da variável porntos_turísticos2(número inteiro decimal)
    float densidade_populacional2;                                                                 //Declara o formato da variável densiade_populacional2(número de ponto flutuante)
    float PIB_per2;                                                                               //Declara o formato da variável PIB_per2(número de ponto fluante)


    int escolha1;                                                                                //Declara o formato da variável escolha1(número inteiro)
    int comparacao_igual_p1;                                                                    //Declara o formato da variável comparacao_igual_p1(número inteiro)
    int comparacao_igual_a1;                                                                   //Declara o formato da variável comparacao_igual_a1(número inteiro)
    int comparacao_igual_P1;                                                                  //Declara o formato da variável comparacao_igual_P1(número inteiro)
    int comparacao_igual_ptu1;                                                               //Declara o formato da variável comparacao_igual_ptu1(número inteiro)
    int comparacao_igual_dp1;                                                               //Declara o formato da variável comparacao_igual_dp1(número inteiro)
    int comparacao_igual_Pp1;                                                              //Declara o formato da variável comparacao_igual_PP1(número inteiro)
                                                      
    

    int comparacao_populacao1;                                                                  //Declara o fomato da variável comparacao_populacao1(número inteiro)
    int comparacao_area1;                                                                      //Declara o formato da variável compaarcao_area1(número inteiro)
    int comparacao_PIB1;                                                                       //Declara o formato da variável comparacao_PIB1(número inteiro)
    int comparacao_pontos1;                                                                  //Declara o fomato da variável comparacao_pontos1(número inteiro)
    int comparacao_densidade1;                                                              //Declara o formato da variável comparacao_densidade1(número inteiro)
    int comparacao_PIB_per1;                                                              //Declara o formato da variável comparacao_PIB_per1(número inteiro)
    int comparacao_populacao2;                                                           //Declara o fomato da variável comparacao_populacao2(número inteiro)
    int comparacao_area2;                                                               //Declara o formato da variável compaarcao_area2(número inteiro)
    int comparacao_PIB2;                                                               //Declara o formato da variável comparacao_PIB2(número inteiro)
    int comparacao_pontos2;                                                           //Declara o fomato da variável comparacao_pontos2(número inteiro)
    int comparacao_densidade2;                                                       //Declara o formato da variável comparacao_densidade2(número inteiro)
    int comparacao_PIB_per2;                                                       //Declara o formato da variável comparacao_PIB_per2(número inteiro)
  

    int escolha2;                                                                                //Declara o formato da variável escolha2(número inteiro)
    int comparacao_igual_p2;                                                                    //Declara o formato da variável comparacao_igual_p2(número inteiro)
    int comparacao_igual_a2;                                                                   //Declara o formato da variável comparacao_igual_a2(número inteiro)
    int comparacao_igual_P2;                                                                  //Declara o formato da variável comparacao_igual_P2(número inteiro)
    int comparacao_igual_ptu2;                                                               //Declara o formato da variável comparacao_igual_ptu2(número inteiro)
    int comparacao_igual_dp2;                                                               //Declara o formato da variável comparacao_igual_dp2(número inteiro)
    int comparacao_igual_Pp2;                                                              //Declara o formato da variável comparacao_igual_PP2(número inteiro)

   int soma1;                                                                                               //Declara o formato da variável soma1(número inteiro)
   int soma2;                                                                                              // Declara o formato da variável soma 2(número inteiro)
   int soma3;                                                                                             //Declara o formato da variável soma3(número inteiro)
   int soma4;                                                                                            // Declara o formato da variável soma4(número inteiro)
   int soma5;                                                                                           //Declara o formato da variável soma5(número inteiro)
   int soma6;                                                                                          // Declara o formato da variável soma6(número inteiro)
   int soma7;                                                                                         //Declara o formato da variável soma7(número inteiro)
   int soma8;                                                                                        // Declara o formato da variável soma8(número inteiro)
   int soma9;                                                                                       //Declara o formato da variável soma9(número inteiro)
   int soma10;                                                                                     // Declara o formato da variável soma10(número inteiro)
   int soma11;                                                                                    //Declara o formato da variável soma11(número inteiro)
   int soma12;                                                                                   // Declara o formato da variável soma 12(número inteiro)
   int soma13;                                                                                  //Declara o formato da variável soma13(número inteiro)
   int soma14;                                                                                 // Declara o formato da variável soma 14(número inteiro)
   int soma15;                                                                                //Declara o formato da variável soma15(número inteiro)
   int soma16;                                                                               // Declara o formato da variável soma 16(número inteiro)
   int soma17;                                                                              //Declara o formato da variável soma17(número inteiro)
   int soma18;                                                                             // Declara o formato da variável soma 18(número inteiro)
   int soma19;                                                                            //Declara o formato da variável soma19(número inteiro)
   int soma20;                                                                           // Declara o formato da variável soma20(número inteiro)
   int soma21;                                                                          //Declara o formato da variável soma21(número inteiro)
   int soma22;                                                                         // Declara o formato da variável soma22(número inteiro)
   int soma23;                                                                         //Declara o formato da variável soma23(número inteiro)
   int soma24;                                                                       // Declara o formato da variável soma24(número inteiro)
   int soma25;                                                                      //Declara o formato da variável soma25(número inteiro)
   int soma26;                                                                     // Declara o formato da variável soma26(número inteiro)
   int soma27;                                                                    //Declara o formato da variável soma27(número inteiro)
   int soma28;                                                                   // Declara o formato da variável soma 28(número inteiro)
   int soma29;                                                                  //Declara o formato da variável soma29(número inteiro)
   int soma30;                                                                 // Declara o formato da variável soma 30(número inteiro)
  



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
   
  printf("Comparação de Cartas \n");                                              //Mostra a expressão comparação de cartas
  printf("Escolha um atributo para a comparação: \n");                           //Mostra a expressão escolha um atributo para a comparação
  printf("1.População\n");                                                      //Mostra a palavra população e seu número no menu
  printf("2.Área\n");                                                          //Mostra a palavra área e o seu número no menu
  printf("3.PIB \n");                                                         //Mostra a palavra PIB e seu número no menu
  printf("4.Pontos turísticos\n");                                           //Mostra a expressão pontos turísticos e o seu número
  printf("5.Densidade Populacional \n");                                    //Mostra a expressão densidade populacional e o seu número no menu
  printf("6.PIB Per Capita \n");                                           //Mostra a expressão PIB Per Capita e o seu número no menu
  scanf("%d",&escolha1);                                                   //Armazena o número da escolha na variável escolha
  
  printf("\n \n");                                                        //Faz um espaçamento
  

  
    switch(escolha1)                                               //Função que seleciona o valor de escolha1 para direcionar o usuário para um dos tópicos
      { case 1:                                                  //se escolha1 = 01    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);         // Mostra o nome das cidades  
        printf("2.População\n");                               //Mostra  a palavra População
        printf("3.População de %s:%d\n",cidade1,populacao1);  //Mostra a população de cidade1
        printf("4.População de %s:%d\n",cidade2,populacao2); //Mostra a população da cidade2
        comparacao_populacao1= populacao1>populacao2 ? 1:0  ;//Operador que compara se população 1 for maior que população2 e armazena na variável comparação_populacao1 e retonar 1 se sim
        comparacao_igual_p1= populacao1==populacao2? 1:0 ;     //Operador que verfifica se as populações  forem iguais e armazena na variável comparacao_igual_p1
        if(comparacao_igual_p1==1) {                           //Função   que determina se comparacao_igual_p1 for igual a 1
           printf("Empate!");                                                                 //Mostra "Empate!"
 
        }else  if(comparacao_populacao1==1){                    //Função que verfifica se comparcao_populacao1 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);           //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                            //Se não
            printf("Carta 2(%s)venceu!",cidade2); }         //Mostra que Carta 2 venceu
        break;                                              //sai do switch

        case 2:                                                 //se escolha1 = 02    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);        // Mostra o nome das cidades  
        printf("2.Área\n");                                   //Mostra  a palavra Área
        printf("3.Área de %s:%.2f\n",cidade1,area1);         //Mostra a área de cidade1
        printf("4.Área de %s:%.2f\n",cidade2,area2);        //Mostra a área de cidade2
        comparacao_area1= area1>area2 ? 1:0  ;             //Operador que compara se área 1 for maior que área 2 e armazena na variável comparação_area1 e retonar 1 se sim
        comparacao_igual_a1= area1==area2? 1:0 ;         //Operador que verfifica se as áreas forem iguais e armazena na variável comparacao_igual_a1
        if(comparacao_igual_a1==1) {                      //Função   que determina se comparacao_igual_a1 for igual a 1
           printf("Empate!");                                                                 //Mostra "Empate!"
  
        
        }else if(comparacao_area1==1){                 //Função que verifica se comparcao_area1 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);        //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                             //Se não
            printf("Carta 2(%s)venceu!",cidade2); }         //Mostra que Carta 2 venceu
        break;                                             //sai do switch

        case 3:                                                  //se escolha1 = 03   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);         // Mostra o nome das cidades  
        printf("2.PIB\n");                                     //Mostra  a palavra PIB
        printf("3.PIB de %s:%.2f\n",cidade1,PIB1);            //Mostra o PIB de cidade1
        printf("4.PIB de %s:%.2f\n",cidade2,PIB2);           //Mostra o PIB da cidade2
        comparacao_PIB1= PIB1>PIB2 ? 1:0  ;                  //Operador que compara se PIB 1 for maior que PIB 2 e armazena na variável comparação_PIB1 e retonar 1 se sim
        comparacao_igual_P1= PIB1==PIB2? 1:0 ;              //Operador que verfifica se os PIBS  forem iguais e armazena na variável comparacao_igual_P1
        if(comparacao_igual_P1==1) {                      //Função   que determina se comparacao_igual_P1 for igual a 1
           printf("Empate!");                            //Mostra "Empate!"
 
        } else if(comparacao_PIB1==1){                        //Função que verfifica se comparacao_PIB1 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);           //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                           //Se não
            printf("Carta 2(%s)venceu!",cidade2); }                                               //Mostra que Carta 2 venceu
        break;                                                                                   //sai do switch
        
        case 4:                                                                                 //se escolha1 = 04    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);                                        // Mostra o nome das cidades  
        printf("2.Número de pontos turísticos\n");                                            //Mostra  a expressão número de pontos turísticos
        printf("3.Número de pontos turísticos de %s:%d\n",cidade1,pontos_turisticos1 ) ;     //Mostra o número de pontos turísticos da cidade1
        printf("4.Número de pontos turísticos de %s:%d\n",cidade2,pontos_turisticos2);      //Mostra o número de pontos turísticos da cidade2
        comparacao_pontos1= pontos_turisticos1>pontos_turisticos2 ? 1:0  ;                //Operador que compara se pontos_turísticos1 for maior que pontos_turísticos2 e armazena na variável comparacao_pontos1 e retonar 1 se sim
        comparacao_igual_ptu1= pontos_turisticos1==pontos_turisticos2? 1:0 ;              //Operador que verifica se os pontos turísticos forem iguais e armazena na variável comparacao_igual_ptu2
        if(comparacao_igual_ptu1==1) {                                                   //Função   que determina se comparacao_igual_ptu2 for igual a 1
           printf("Empate!");                                                          //Mostra "Empate!"
         
         
        } else if(comparacao_pontos1==1){                                                       //Se não verifica se comparacao_pontos1 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);                                       //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                                                             //Se não
            printf("Carta 2(%s)venceu!",cidade2); }                                          //Mostra que Carta 2 venceu
        break;                                                                              //sai do switch

        case 5:                                                                                     //se escolha1 = 05   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);                                            // Mostra o nome das cidades  
        printf("2.Densidade Populacional\n");                                                     //Mostra  a expressão Densidade Populacional
        printf("3.Densidade Populacional de %s:%.2f\n",cidade1,densidade_populacional1);         //Mostra a Densidade Populacional de cidade 1
        printf("4.Densidade Populacional de %s:%.2f\n",cidade2,densidade_populacional2);        //Mostra a Densidade Populacional da cidade2
        comparacao_densidade1= (1/densidade_populacional1)>(1/densidade_populacional2) ? 1:0  ; //Operador que compara se densidade_populacional1 for maior que densidade_populacional2 e armazena na variável comparacao_densidade1 e retonar 1 se sim
        comparacao_igual_dp1= densidade_populacional1==densidade_populacional2? 1:0 ;          //Operador que verifica se as densidades  forem iguais e armazena na variável comparacao_igual_dp2
        if(comparacao_igual_dp1==1) {                                                          //Função   que determina se comparacao_igual_dp2 for igual a 1
           printf("Empate!");                                                                 //Mostra "Empate!"                  
        
        }else if(comparacao_densidade1==1){                                                      //Se não verifica se comparacao_densidade1 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);                                              //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                                                                 //Se não
            printf("Carta 2(%s)venceu!",cidade2); }                                             //Mostra que Carta 2 venceu  
        break;                                                                                  //sai do switch

        case 6:                                                        //se escolha1 = 06   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);               // Mostra o nome das cidades  
        printf("2.PIB Per Capita\n");                                //Mostra  a expressão PIB Per Capita
        printf("3.PIB Per Capita de %s:%.2f\n",cidade1,PIB_per1);   //Mostra o PIB Per Capita de cidade1
        printf("4.PIB Per Capita de %s:%.2f\n",cidade2,PIB_per2);  //Mostra o PIB Per Capita de cidade2
        comparacao_PIB_per1= PIB_per1>PIB_per2 ? 1:0  ;           //Operador que compara se PIB_per1 for maior que PIB_per2 e armazena na variável comparcao_PIB_per2 e retonar 1 se sim
        comparacao_igual_Pp1= PIB_per1==PIB_per2? 1:0 ;          //Operador que verfifica se os PIBS per Capita forem iguais e armazena na variável comparacao_igual_Pp2
        if(comparacao_igual_Pp1==1) {                           //Função   que determina se comparacao_igual_Pp2 for igual a 1
           printf("Empate!");                                                                 //Mostra "Empate!"

        }else  if(comparacao_PIB_per1==1){                           //Função que verfifica se comparacao_PIB_per2 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);             //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                               //Se não
            printf("Carta 2(%s)venceu!",cidade2); }          // Mostra que Carta 2 venceu
        break;                                              //sai do switch

        default:
            printf("Opção inválida!!");                          
            break;                                           //sai do switch
        
         }
         
         

         printf("\n \n");                                                         //Faz um espaçamento
   
         printf("Comparação de Cartas \n");                                              //Mostra a expressão comparação de cartas
         printf("Escolha outro atributo para a comparação: \n");                        //Mostra a expressão escolha outro atributo para a comparação
         printf("1.População\n");                                                      //Mostra a palavra população e seu número no menu
        printf("2.Área\n");                                                          //Mostra a palavra área e o seu número no menu
        printf("3.PIB \n");                                                         //Mostra a palavra PIB e seu número no menu
        printf("4.Pontos turísticos\n");                                           //Mostra a expressão pontos turísticos e o seu número
        printf("5.Densidade Populacional \n");                                    //Mostra a expressão densidade populacional e o seu número no menu
        printf("6.PIB Per Capita \n");                                           //Mostra a expressão PIB Per Capita e o seu número no menu
        scanf("%d",&escolha2);                                                   //Armazena o número da escolha na variável escolha2
  
        printf("\n \n");                                                        //Faz um espaçamento

        if(escolha1==escolha2){                                                            //Função que verifica se escola 1 for igual a escolha 2
           printf("Você escolheu o mesmo atributo,Reinicie o jogo e escolha outro");      //Mostra a frase "Você escolheu o mesmo atributo,Reinicie o jogo e escolha outro"
        }else {
       switch(escolha2)                                            //Função que seleciona o valor de escolha2 para direcionar o usuário para um dos tópicos
       { case 1:                                                  //se escolha2 = 01    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);          // Mostra o nome das cidades  
        printf("2.População\n");                                //Mostra  a palavra População
        printf("3.População de %s:%d\n",cidade1,populacao1);   //Mostra a população de cidade1
        printf("4.População de %s:%d\n",cidade2,populacao2);  //Mostra a população da cidade2
        comparacao_populacao2= populacao1>populacao2 ? 1:0  ; //Operador que compara se população 1 for maior que população2 e armazena na variável comparação_populacao2 e retonar 1 se sim
        comparacao_igual_p2= populacao1==populacao2? 1:0 ;                 //Operador que verfifica se as populações forem iguais e armazena na variável comparacao_igual_p2
        if(comparacao_igual_p2==1) {                                                        //Função   que determina se comparacao_igual_p2 for igual a 1
           printf("Empate!");                                                              //Mostra "Empate!"

        } else if(comparacao_populacao2==1){                   //Se não que verifica se comparacao_populacao2 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);           //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                            //Se não
            printf("Carta 2(%s)venceu!",cidade2); }         //Mostra que Carta 2 venceu
        break;                                              //sai do switch

        case 2:                                                 //se escolha2 = 02    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);        // Mostra o nome das cidades  
        printf("2.Área\n");                                   //Mostra  a palavra Área
        printf("3.Área de %s:%.2f\n",cidade1,area1);         //Mostra a área de cidade1
        printf("4.Área de %s:%.2f\n",cidade2,area2);        //Mostra a área de cidade2
        comparacao_area2= area1>area2 ? 1:0  ;             //Operador que compara se área 1 for maior que área2 e armazena na variável comparação_area2 e retonar 1 se sim
        comparacao_igual_a2= area1==area2? 1:0 ;                 //Operador que verfifica se as áreas forem iguais e armazena na variável comparacao_igual_a2
        if(comparacao_igual_a2==1) {                                                        //Função   que determina se comparacao_igual_a2 for igual a 1
           printf("Empate!");                                                                 //Mostra "Empate!"

        } else if(comparacao_area2==1){                  //Se nãoverifica se comparacao_area2 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);        //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                             //Se não
            printf("Carta 2(%s)venceu!",cidade2); }         //Mostra que Carta 2 venceu
        break;                                             //sai do switch

        case 3:                                                  //se escolha2 = 03   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);         // Mostra o nome das cidades  
        printf("2.PIB\n");                                     //Mostra  a palavra PIB
        printf("3.PIB de %s:%.2f\n",cidade1,PIB1);            //Mostra o PIB de cidade1
        printf("4.PIB de %s:%.2f\n",cidade2,PIB2);           //Mostra o PIB da cidade2
        comparacao_PIB2= PIB1>PIB2 ? 1:0  ;                                                   //Operador que compara se PIB 1 for maior que PIB 2 e armazena na variável comparação_PIB2 e retonar 1 se sim
        comparacao_igual_P2= PIB1==PIB2? 1:0 ;                                                 //Operador que verfifica se os PIBsforem iguais e armazena na variável comparacao_igual_P2
        if(comparacao_igual_ptu2==1) {                                                        //Função   que determina se comparacao_igual_P2 for igual a 1
           printf("Empate!");                                                                 //Mostra "Empate!"

        }  else if(comparacao_PIB2==1){                   //Se não que verifica se comparcao_PIB2 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);        //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                           //Se não
            printf("Carta 2(%s)venceu!",cidade2); }                                               //Mostra que Carta 2 venceu
        break;                                                                                   //sai do switch
        
        case 4:                                                                                 //se escolha2 = 04    
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);                                        // Mostra o nome das cidades  
        printf("2.Número de pontos turísticos\n");                                            //Mostra  a palavra número de pontos turísticos
        printf("3.Número de pontos turísticos de %s:%d\n",cidade1,pontos_turisticos1 ) ;     //Mostra o número de pontos turísticos da cidade1
        printf("4.Número de pontos turísticos de %s:%d\n",cidade2,pontos_turisticos2);      //Mostra o número de pontos turísticos da cidade2
         comparacao_pontos2= pontos_turisticos1>pontos_turisticos2 ? 1:0  ;                //Operador que compara se pontos_turísticos1 for maior que pontos_turísticos2 e armazena na variável comparacao_pontos2 e retonar 1 se sim
         comparacao_igual_ptu2= pontos_turisticos1==pontos_turisticos2? 1:0 ;                 //Operador que verfifica se os pontos turísticos forem iguais e armazena na variável comparacao_igual_ptu2
        if(comparacao_igual_ptu2==1) {                                                        //Função   que determina se comparacao_igual_ptu2 for igual a 1
           printf("Empate!");                                                                 //Mostra "Empate!"

        } else if(comparacao_pontos2==1){                                                  // Se não verifica se comparacao_pontos2 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);                                       //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                                                             //Se não
            printf("Carta 2(%s)venceu!",cidade2); }                                          //Mostra que Carta 2 venceu
        break;                                                                              //sai do switch

        case 5:                                                                                     //se escolha2 = 05   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);                                            // Mostra o nome das cidades  
        printf("2.Densidade Populacional\n");                                                     //Mostra  a palavra Densidade Populacional
        printf("3.Densidade Populacional de %s:%.2f\n",cidade1,densidade_populacional1);         //Mostra a Densidade Populacional de cidade 1
        printf("4.Densidade Populacional de %s:%.2f\n",cidade2,densidade_populacional2);        //Mostra a Densidade Populacional da cidade2
        comparacao_densidade2= (1/densidade_populacional1>1/densidade_populacional2) ? 1:0  ;  //Operador que compara se densidade_ppulacional1 for maior que densidade_populacional2 e armazena na variável comparcao_igual_dp2 e retonar 1 se sim
        comparacao_igual_p2= densidade_populacional1==densidade_populacional2? 1:0 ;          //Operador que verifica se os PIBs forem iguais e armazena na variável comparacao_igual_dp2
        if(comparacao_igual_p2==1) {                                                         //Função   que determina se comparacao_igual6 for igual a 1
           printf("Empate!");                                                               //Mostra "Empate!"

        } else if(comparacao_densidade2==1){                                  //Se não verifica se comparacao_PIB_per2 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);                           //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                                          //Se não
            printf("Carta 2(%s)venceu!",cidade2); }                      // Mostra que Carta 2 venceu
        break;                                                          //sai do switch  
        case 6:                                                        //se escolha_atributo = 06   
        printf("1.Cidades:%s e %s:\n",cidade1,cidade2);               // Mostra o nome das cidades  
        printf("2.PIB Per Capita\n");                                //Mostra  a palavra PIB Per Capita
        printf("3.PIB Per Capita de %s:%.2f\n",cidade1,PIB_per1);   //Mostra o PIB Per Capita de cidade1
        printf("4.PIB Per Capita de %s:%.2f\n",cidade2,PIB_per2);  //Mostra o PIB Per Capita de cidade2
        comparacao_PIB_per2= PIB_per1>PIB_per2 ? 1:0  ;           //Operador que compara se PIB_per1 for maior que PIB_per2 e armazena na variável comparacao_PIB_per2 e retonar 1 se sim
        comparacao_igual_p2= PIB_per1==PIB_per2? 1:0 ;            //Operador que verfifica se os PIBs Per Capita forem iguais e armazena na variável comparacao_igual_P2
        if(comparacao_igual_p2==1) {                             //Função   que determina se comparacao_igual_p2 for igual a 1
           printf("Empate!");                                   //Mostra "Empate!"

        } else if(comparacao_PIB_per2==1){                      //Se não verifica se comparacao_PIB_per2 for igual a 1
            printf("Carta 1(%s) venceu!",cidade1);             //Mostra que Carta 1 (nome da cidade)venceu

        } else {                                               //Se não
            printf("Carta 2(%s)venceu!",cidade2); }           // Mostra que Carta 2 venceu
        break;                                               //sai do switch      
          
          }} if(escolha1==1 && escolha2 ==2|| escolha1==2 && escolha2==1){         //Função que verifica se escolha1 e escolha 2 forem respectivamente 1 e 2 ou 2 e 1  
              soma1= populacao1 +(int)area1;                                      //se sim soma populacao1 a area1 
              soma2= populacao2+(int)area2;                                      // soma populacao2 e area2
              printf("Soma dos atributos da Carta 1:%d",soma1);                 // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma2);               // Mostra a soma dos atributos da carta 2
          } else if(escolha1==1 && escolha2 ==3|| escolha1==3 && escolha2==1){                    //Função que verifica se escolha1 e escolha 2 forem respectivamente 1 e 3 ou 3 e 1  
              soma3= populacao1 +(int)PIB1;                                                      //se sim soma populacao1 a PIB1 convertendo PIB1 para int
              soma4= populacao2+(int)PIB2;                                                      // soma populacao2 e PIB2 convertendo PIB2 para int
              printf("Soma dos atributos da Carta 1:%d",soma3);                                // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma4);                              // Mostra a soma dos atributos da carta 2                                                      
           } else if(escolha1==1 && escolha2 ==4|| escolha1==4 && escolha2==1){              //Função que verifica se escolha1 e escolha 2 forem respectivamente 1 e 4 ou 4 e 1  
              soma5= populacao1 +pontos_turisticos1;                                        //se sim soma populacao1 a pontos_turisticos1 
              soma6= populacao2+pontos_turisticos2;                                        // soma populacao2 e pontos_turisticos2
              printf("Soma dos atributos da Carta 1:%d",soma5);                           // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma6);                         // Mostra a soma dos atributos da carta 2                                                      
          } else if(escolha1==1 && escolha2 ==5|| escolha1==5 && escolha2==1){          //Função que verifica se escolha1 e escolha2 forem respectivamente 1 e 5 ou 5 e 1  
              soma7= populacao1 +(int)pontos_turisticos1;                              //se sim soma populacao1 a densidade_populacional1 convertendo densidade_populaciona1 para int
              soma8= populacao2+(int)pontos_turisticos2;                              // soma populacao2 e densidade_populacional2 convertendo densidade_populacional2
              printf("Soma dos atributos da Carta 1:%d",soma7);                      // Mostra a soma dos atributos da carta 1 
              printf("Soma dos atributos da Carta 2:%d ",soma8);                    // Mostra a soma dos atributos da carta 2                                                     
         } else if(escolha1==1 && escolha2 ==6|| escolha1==6 && escolha2==1){      //Função que verifica se escolha1 e escolha2 forem respectivamente 1 e 6 ou 6 e 1  
              soma9= populacao1 +(int)PIB_per1;                                   //se sim soma populacao1 a PIB_per1 
              soma10= populacao2+(int)PIB_per2;                                  // soma populacao2 e PIB_per2
              printf("Soma dos atributos da Carta 1:%d",soma9);                 // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma10);              // Mostra a soma dos atributos da carta 2                                                      

         } else if(escolha1==2 && escolha2 ==3|| escolha1==3 && escolha2==2){      //Função que verifica se escolha1 e escolha2 forem respectivamente 2 e 3 ou 3 e 2  
              soma11= (int)area1 +(int)PIB1;                                      //se sim soma area1 e PIB1(convertendo PIB para int)
              soma12= (int)area2+(int)PIB2;                                      // soma area2 e PIB2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma1);                 // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma2);               // Mostra a soma dos atributos da carta 2                                                      

         } else if(escolha1==2 && escolha2 ==4|| escolha1==4 && escolha2==2){        //Função que verifica se escolha1 e escolha2 forem respectivamente 2 e 4 ou 4 e 2  
              soma13= (int)area1 +pontos_turisticos1;                               //se sim soma area1 e pontos_turisticos1,convertendo area1 para int
              soma14= (int)area2+pontos_turisticos2;                               // soma area2 e pontos_turisticos2 ,convertendo area2 para int
              printf("Soma dos atributos da Carta 1:%d",soma13);                  // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma14);                // Mostra a soma dos atributos da carta 2                                                      

        
        } else if(escolha1==2 && escolha2==5|| escolha1==5 && escolha2==2){          //Função que verifica se escolha1 e escolha2 forem respectivamente 2 e 5 ou 5 e 2  
              soma15= (int)area1 +(int)densidade_populacional1;                     //se sim soma area1 e densidade_populacional1,convertendo os dois para int
              soma16= (int)area2+(int)densidade_populacional2;                     // soma area2 e densidade_populacional2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma13);                  // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma14);                // Mostra a soma dos atributos da carta 2                                                      

        } else if(escolha1==2 && escolha2 ==6|| escolha1==6 && escolha2==2){              //Função que verifica se escolha1 e escolha2 forem respectivamente 2 e 6 ou 6 e 2  
              soma17= (int)area1 +(int)PIB_per1;                                        //se sim soma area1 e PIb_per1,convertendo os dois para int
              soma18= (int)area2+(int)PIB_per2;                                         // soma area2 e PIB_per2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma17);                       // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma18);                     // Mostra a soma dos atributos da carta 2                                                      
        } else if(escolha1==3 && escolha2==4|| escolha1==4 && escolha2==3){          //Função que verifica se escolha1 e escolha2 forem respectivamente 3 e 4 ou 4 e 3  
              soma19= (int)PIB1 +(int)pontos_turisticos1;                           //se sim soma PIB1 e pontos_turisticos1,convertendo pontos turísticos para int
              soma20= (int)PIB2+(int)pontos_turisticos2;                           // soma PIB2 e pontos_turisticos2,convertendo pontos turisticos para int
              printf("Soma dos atributos da Carta 1:%d",soma19);                  // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma20);                 // Mostra a soma dos atributos da carta 2                                                      

        } else if(escolha1==3 && escolha2==5|| escolha1==5 && escolha2==3){                     //Função que verifica se escolha1 e escolha2 forem respectivamente 3 e 4 ou 4 e 3  
              soma21= (int)PIB1 +(int)densidade_populacional1;                                  //se sim soma PIB1 e densidade_populacional1,convertendo os dois para int
              soma22= (int)PIB2+(int)densidade_populacional2;                                  // soma PIB2 e densidade_populacional2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma21);                              // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma22);                             // Mostra a soma dos atributos da carta 2                                                      
        } else if(escolha1==3 && escolha2==6|| escolha1==6 && escolha2==3){                 //Função que verifica se escolha1 e escolha2 forem respectivamente 3 e 6 ou 6 e 3  
              soma23= (int)PIB1 +(int)PIB_per1;                                            //se sim soma PIB1 e PIB_per1,convertendo os dois para int
              soma24= (int)PIB2+(int)PIB_per2;                                            // soma PIB2 e PIB_per2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma23);                         // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma24);                         // Mostra a soma dos atributos da carta 2                                                      
        } else if(escolha1==4 && escolha2==5|| escolha1==5 && escolha2==4){             //Função que verifica se escolha1 e escolha2 forem respectivamente 4 e 5 ou 4 e 5 
              soma25= pontos_turisticos1+(int)densidade_populacional1;                  //se sim soma PIB1 e densidade_populacional1,convertendo densidadepara int
              soma26= pontos_turisticos2+(int)densidade_populacional2;                 // soma PIB2 e densidade_populacional2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma25);                      // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma26);                      // Mostra a soma dos atributos da carta 2                                                      
        } else if(escolha1==4 && escolha2==6|| escolha1==6 && escolha2==4){           //Função que verifica se escolha1 e escolha2 forem respectivamente 4 e 6 ou 6 e 4 
              soma27= (int)PIB1 +(int)PIB_per1;                                      //se sim soma PIB1 e PIB_per1,convertendo os dois para int
              soma28= (int)PIB2+(int)PIB_per2;                                      // soma PIB2 e PIB_per2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma27);                   // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma28);                  // Mostra a soma dos atributos da carta 2                                                      
         } else if(escolha1==5 && escolha2 ==6|| escolha1==6 && escolha2==5){     //Função que verifica se escolha1 e escolha2 forem respectivamente 5 e 6 ou 6 e 5
              soma29= (int)densidade_populacional1 +(int)PIB_per1;              //se sim soma densidade_populacional e PIB_per1,convertendo os dois para int
              soma30= (int)densidade_populacional2+(int)PIB_per2;              // soma densidade_populacional2 e PIB_per2,convertendo os dois para int
              printf("Soma dos atributos da Carta 1:%d",soma29);              // Mostra a soma dos atributos da carta 1
              printf("Soma dos atributos da Carta 2:%d ",soma30);             // Mostra a soma dos atributos da carta 2                                                      

              } }   





