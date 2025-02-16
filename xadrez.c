#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


void bispo(int casa){
    if(casa > 5){
     bispo(casa + 1);
     printf("%d casas para diagonal direita");
    }
 }
     void torre(int casa){
         if(casa > 5){
          torre(casa + 1);
          printf("%d casas para diagonal direita");
     }
 }
 
 void rainha(int casa){
     if(casa > 5){
     rainha(casa + 1);
     printf("%d casas para diagonal direita");
          
 }
 
 void cavalo(int casa){
     if(casa > 5){
     cavalo(casa + 1);
     printf("%d casas para diagonal direita");
              
 }
 }
 
 
 
 }
 
 
 
 int main() {
 
 //O for insere os valores da variavel e faz a funcao verdadeira para aparecer
    int casas;
 
 //Titulo do que está acotecendo
     printf("\n --MOVENDO PECAS--\n");
 
 //primeiro for para bispo
 printf("\n** Bispo **\n");
 for(int casas = 1; casas <= 5; casas++)
 {
 printf("\n %d casas para diagonal direita\n", casas);
 }
     
 //Segundo for para torre
     printf("\n** Torre **\n");
     for(int casas = 1; casas <= 5; casas++)
     {
     printf("\n %d casas para direita\n", casas);
     }
 
 //Terceiro for para rainha
 
     printf ("\n** Rainha **\n");
     for (int casas = 1; casas <= 8; casas++)
     {
         printf("\n %d casas para esquerda\n", casas);
     }
  // Quarto for para cavalo, usando loops aninhados
     printf("\n** Cavalo **\n");
 
 //Ele vai andar uma casa pra direita, quando o for interno for completo
     for(int casas = 1; casas <= 1; casas++)
     {
 
 //O for interno vai andar 2x para frente a partir do 1
    for(int casas = 1; casas <= 2; casas++){
     printf("\n %d casas para frente\n", casas);
    }
 //O printf do for externo, precisa ficar depois do interno
 //Para ser exibido depois de ser exibido o for interno 2x
 //Fazendo assim o formato em L
         printf("\n %d casa para direita\n", casas);
     }
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
