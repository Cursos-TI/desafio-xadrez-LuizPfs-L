#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    printf("***Desafio de Xadrez - MateCheck***\n");
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     
    printf("*Movimentação do Bispo*\n");//Bispo: 5 casas na diagonal superior direita
    for (int i = 0; i < 5; i++){ // Como a movimentação diagonal é uma combinação, usamos printf para cada "passo"
    printf("Cima e Direita\n");// que representa uma combinação de "Cima" e "Direita
     }  
    printf("\n");//Só pra dá um espaço no terminal  
   // Implementação de Movimentação da Torre
   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.                                
    printf("*Movimentação da Torre*\n");
    int torre = 1;
    while (torre <= 5){// A torre se move 5 casas para a direita.
    printf("Direita\n");
    torre++;}
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("*Movimentação da Rainha*\n");// A rainha se move 8 casas para a esquerda.
    int rainha = 1;
    do
    {
      printf("Esqueda\n");
      rainha++;
    } while (rainha <= 8);
    printf("\n");
    //NIvel Novato concluido

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
