#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    /*      Definição das variáveis para a carta 1      */
    char codigo_cidade1[2], nome1[15], estado1; //Variáveis relacionadas ao codigo e ao nome da cidade, respectivamente, e a variável para o nome do estado.
    int populacao1, num_pnt_turisticos1; //Variáveis para quant. populacional e total de pontos turísticos, respectivamente.
    float area1, pib1; //Variáveis de área por km² e PIB.
    /*                      --x--                       */

    /*      Definição das variáveis para a carta 2      */
    char codigo_cidade2[2], nome2[15], estado2; 
    int populacao2, num_pnt_turisticos2;
    float area2, pib2; 
    /*                      --x--                       */


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Inicializando o jogo:\nSuper Trunfo de Países\n\nSessão: Cadastro de cartas\n\n");
    printf("Bem-vindo. Nesta sessão do jogo se cadastram as cartas que serão utilizadas no jogo Super Trunfo Países.\n\n");
    printf("Conto com sua participação para responder as seguintes perguntas a fim de cadastrar 2 novas cartas.\nVamos lá!\n\n"); //Trecho de carater simulatório, para gerar tanto entendimento quanto a atenção do usuário para os inputs subsequentes
    printf("Vamos começar com a Carta 1:\n\n");
    printf("Primeiramente vamos ao nome do Estado.\nNeste jogo existem 8 estados, listados de A a H.\n\nPara cadastrar uma nova carta escolha um estado de A a H: ");
    scanf("%c", &estado1);
    printf("\nVejo que escolheu o estado %c, então agora quero que escolha a cidade.\n", estado1);
    printf("Saiba que os estados se dividem em 4 cidades, listados de 01 a 04, incluindo o zero a esquerda.\n\n");
    printf("Portanto escolha um número de 01 a 04: ");
    scanf("%s", codigo_cidade1);
    


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
