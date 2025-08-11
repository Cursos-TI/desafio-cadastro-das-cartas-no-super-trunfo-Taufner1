    #include <stdio.h> //conteúdo do arquivo de cabeçalho com informações das operações

    int main(){

        char estado1[8], cid1[58];
        char estado2[8];
        char cid2[58];
        /*Variáveis do tipo caracter com suas quantidades na memória para cadastrar duas cartas
        O maior nome de cidade do mundo possui 58 letras e pertence à vila de 
        Llanfairpwllgwyngyllgogerychwyrndrobwllllantysiliogogogoch*/
        
        int cod1, popula1, turist1; //Variáveis do tipo números inteiros para a carta 1
        int cod2, popula2, turist2; //Variáveis do tipo números inteiros para a carta 2

        float pib1, km1; //*Variáveis flutuantes para casas decimais com precisão simples carta 1
        float pib2, km2; //Variáveis flutuantes para casas decimais com precisão simples carta 2

        printf("Para cadastrar as cartas do jogo de forma que não haja erro, é impressindível que os dados digitados na CARTA 2 não sejam os mesmo digitados na CARTA 1 \n\n");
        //comando de exibição na tela com "\n" para pular linha

        printf("Agora vamos cadastrar a CARTA 1: \n\n"); //comando de exibição na tela com "\n" para pular linha

        printf("Digite uma letra entre A à H do alfabeto, representando o estado da primeira carta: \n");
        scanf("%s", &estado1);// Espaço antes de %c para consumir espaços em branco pendentes

        printf("Digite o nome da cidade do estado: \n");
        scanf("%s", &cid1);

        printf("Digite um número de 01 à 04 com o mesmo formato deste título, para o código da carta: \n");
        scanf("%d", &cod1);

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &popula1);

        printf("Digite a área em Km²: \n");
        scanf("%f", &km1);

        printf("Digite o PIB: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &turist1);
    printf(".............................................................\n\n");
    
        //CARTA 2:
        
        printf("Agora vamos cadastrar a CARTA 2: \n"); //comando de exibição na tela com "\n" para pular linha

        printf("Digite uma letra entre A à H do alfabeto, representando o estado da primeira carta: \n");
        scanf(" %s", &estado2); // Espaço antes de %c para consumir espaços em branco pendentes

        printf("Digite o nome da cidade do estado: \n");
        scanf(" %s", &cid2);

        printf("Digite um número de 01 à 04 com o mesmo formato deste título, para o código da carta: \n");
        scanf("%d", &cod2);

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &popula2);

        printf("Digite a área em Km²: \n");
        scanf("%f", &km2);

        printf("Digite o PIB: \n");
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &turist2);

    printf("A CARTA 1 CADASTRADA CONTÉM OS SEGUINTES DADOS: \n\n");
        printf("ESTADO: %s \n", estado1);
        printf("CÓDIGO: %d %s \n", cod1, estado1);
        printf("CIDADE: %s \n", cid1);
        printf("POPULAÇÃO: %d \n", popula1);
        printf("ÁREA: %f \n", km1);
        printf("PIB: %f \n", pib1);
        printf("PONTOS TURÍSTICOS: %d", turist1);
        printf(" ............................................\n\n\n");

    printf("A CARTA 2 CADASTRADA CONTÉM OS SEGUINTES DADOS: \n\n");
        printf("ESTADO: %s \n", estado2);
        printf("CÓDIGO: %d %s \n", cod2, estado2);
        printf("CIDADE: %s \n", cid2);
        printf("POPULAÇÃO: %d \n", popula2);
        printf("ÁREA: %f \n", km2);
        printf("PIB: %f \n", pib2);
        printf("PONTOS TURÍSTICOS: %d", turist2);


        return 0;
    }
