#include <stdio.h> 

int main() {

    // Declaração de variáveis primeira carta:
    char estado[2], carta[3], cidade[30]; 
    int populacao, turismo; 
    float kilometragem, pib; 

    // Pede para a pessoa inserir o estado e armazena a entrada na variável (estado)
    printf("Insira as siglas do estado (2 letras): ");
    scanf("%2s", estado); // Lê até 2 caracteres para o estado

    // Pede para a pessoa inserir o número da carta e armazena na variável (carta)
    printf("Insira o número da carta (A01): ");
    scanf("%s", carta); // Lê a entrada como uma string

    // Pede para a pessoa inserir o nome da cidade e armazena na variável (cidade)
    printf("Insira a cidade: ");
    scanf("%s", cidade); // Lê a entrada como uma string

    // Pede para a pessoa inserir a população e armazena na variável (populacao)
    printf("Insira a população: ");
    scanf("%d", &populacao); // Lê um número inteiro

    // Pede para a pessoa colocar a quantidade de pontos turisticos e armazena na variável (turismo)
    printf("Quantidade de pontos de turismo: ");
    scanf("%d", &turismo); // Lê um número inteiro

    // Pede para a pessoa inserir a distância em quilômetros da cidade e armazena na variavél (kilometragem)
    printf("Insira a distância em quilômetros da cidade: ");
    scanf("%f", &kilometragem); // basicamente ele lê o valor de um ponto flutuante

    // Essa parte do código pede para a pessoa o PIB, e armazena na variável 'pib'
    printf("Insira o PIB: ");
    scanf("%f", &pib); // basicamente ele lê o valor de um ponto flutuante

    //Acima coleta e armazena as informações e abaixo elas são reunidas e ficam a amostra para uma leitura melhor

    printf("As siglas do estado são: %s\n", estado);

    printf("O número da carta é: %s\n", carta);

    printf("A cidade é: %s\n", cidade);

    printf("A população é de aproximadamente: %d\n", populacao);

    printf("A quantidade de pontos de turismo é: %d\n", turismo);

    printf("A distância em quilometros da cidade e de aproximadamente: %.2f\n", kilometragem);

    printf("O PIB da cidade é de: %.2f\n", pib);

    /*--------------------------------------------------------------------------------------------------------*/

    // Declaração de variáveis segunda carta:
    char estado1[2], carta1[3], cidade1[30]; 
    int populacao1, turismo1; 
    float kilometragem1, pib1;

    printf("Insira as siglas do estado (2 letras): ");
    scanf("%2s", estado1);

    printf("Insira o número da carta (A02): ");
    scanf("%s", carta1);

    printf("Insira a cidade: ");
    scanf("%s", cidade1);

    printf("Insira a população: ");
    scanf("%d", &populacao1);

    printf("Quantidade de pontos de turismo: ");
    scanf("%d", &turismo1);

    printf("Insira a distância em quilômetros da cidade: ");
    scanf("%f", &kilometragem1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    //Divisão dos códigos entrada e saída

    printf("As siglas do estado são: %s\n", estado1);

    printf("O número da carta é: %s\n", carta1);

    printf("A cidade é: %s\n", cidade1);

    printf("A população é de aproximadamente: %d\n", populacao1);

    printf("A quantidade de pontos de turismo é: %d\n", turismo1);

    printf("A distância em quilometros da cidade e de aproximadamente: %.2f\n", kilometragem1);

    printf("O PIB da cidade é de: %.2f\n", pib1);

    return 0;

    /*
    Como aluno, minha maior dificuldade ao enfrentar esse desafio foi lidar com os especificadores das variavéis.
    Ao longo desse desafio tive muitas dificuldades, até chegar ao meu objetivo, fiquei frustrado várias vezes,
    sempre que achava que tinha acertado, surgia um erro, geralmente devido a um especificador ou um simples \n.
    No entanto, com esforço e dedicação, consegui conclui-lo.
    Apesar disso, ainda estou tendo dificuldades para entender completamente alguns dos conceitos envolvidos.
    */
}