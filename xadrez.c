#include <stdio.h>

void moverBispo(int casas){
 // Loops aninhados para o movimento diagonal
 // O loop externo simula o movimento vertical
if (casas > 0){
    for (int i = 0; i < 1; i++) { 
        printf("Cima\n");
        // O loop interno simula o movimento horizontal
        for (int j = 0; j < 1; j++) { 
            printf("Direita\n");
        }
    }
moverBispo(casas - 1);}}

void moverTorre(int casas){
if (casas > 0){
printf("Direita\n");
moverTorre(casas - 1);}}

void moverRainha(int casas){
if (casas > 0 ){
printf("Esquerda\n");
moverRainha(casas - 1);}}

void moverCavalo() {
    int i, j;
    
    // Loop externo para o movimento vertical (duas casas para cima)
    for (i = 0; i < 2 ; i++) {
        printf("Cima\n");
    }
    // Loop interno para o movimento horizontal (uma casa para a direita)
    // O uso de 'break' garante que o loop execute apenas uma vez
    for (j = 0; j < 5; j++) { // O valor de j < 5 é arbitrário, o break garante a execução única
        printf("Direita\n");
        break; // Sai do loop após a primeira iteração, garantindo apenas um passo para a direita
    }
}

// Desafio de Xadrez - MateCheck
// Este código inicial} serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
int main(){
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    printf("***Desafio de Xadrez - MateCheck***\n");
    printf("*Nivel Novato*\n");
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
      printf("Esquerda\n");
      rainha++;
    } while (rainha <= 8);
    printf("\n");
    //NIvel Novato concluido

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     printf("*Nivel Aventureiro*\n");
     printf("*Movimentação do Cavalo*\n");
     int cavalo = 1;
     while (cavalo --)
     {
        for (int i = 0; i < 2; i++)
        {
           printf("Baixo\n");//imprime Baixo duas vezes
        }
        printf("Esquerda\n");//Imprime Esquerda uma vez
        }
        printf("\n");
        //Nivel Aventureiro Concluido

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    //Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
       printf("*Desafio Nivel Mestre*\n");
       printf("*Movimentação Bispo*\n");
       moverBispo(5);
       printf("*Movimentação Torre*\n");
       moverTorre(5);
       printf("*Movimentação Rainha*\n");
       moverRainha(8);
       printf("*Movimentação Cavalo*\n");
       moverCavalo(1);
       //Nivel Mestre Concluido

    return 0;
}
