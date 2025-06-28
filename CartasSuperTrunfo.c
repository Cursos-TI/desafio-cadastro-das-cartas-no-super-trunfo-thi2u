#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_cidade[2], nome[15], estado; //Definição das variáveis relacionadas ao codigo e ao nome da cidade, respectivamente, e a variável para o nome do estado.
    int populacao, num_pnt_turisticos; //Definição das variáveis para quant. populacional e total de pontos turísticos, respectivamente.
    float area, pib; //Definição das variáveis de área por km² e PIB, definidas como ponto flutuante por se referirem tanto a inteiros quanto racionais.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Inicializando o jogo:\nSuper Trunfo de Países\n\nSessão: Cadastro de cartas\n\n");
    printf("Bem-vindo. Nesta sessão do jogo se cadastram as cartas que serão utilizadas no jogo Super Trunfo Países.\n\n");
    printf("Conto com sua participação para responder as seguintes perguntas a fim de cadastrar 2 novas cartas.\nVamos lá!\n\n"); //Trecho de carater simulatório, para gerar tanto entendimento quanto a atenção do usuário para os inputs subsequentes
    printf("Primeiramente vamos ao nome do Estado.\nNeste jogo existem 8 estados, listados de A a H.\n\nPara cadastrar uma nova carta escolha um estado de A a H: ");
    scanf("%c", &estado);
    printf("\nVejo que escolheu o estado %c, então agora quero que escolha a cidade.\n", estado);
    printf("Saiba que os estados se dividem em 4 cidades, listados de 01 a 04, incluindo o zero a esquerda.\n\n");
    printf("Portanto escolha um número de 01 a 04: ");
    scanf("%s", codigo_cidade);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
