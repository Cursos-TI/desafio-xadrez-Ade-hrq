#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

//O for insere os valores da variavel e faz a funcao verdadeira para aparecer
    for(int casas = 0; casas <= 5; casas++){
//Aqui ja se entra com um if, para para exibir apenas um numero em especifico
    if(casas == 5){
    printf("\n --MOVENDO PECAS--\n");
    printf("\n** Bispo **\n");
    printf("\nMovendo bispo %d casas para diagonal direita\n", casas);
    printf("\n** Torre **\n");
    printf("\nMovendo torre %d casas para direita\n", casas);
    }
//Como a rainha tinha um valor diferente, foi feito outro for semelhante
//Porem com o valor diferente 
} for (int c = 0; c <=8; c++){
    if (c == 8){
        printf ("\n** Rainha **\n");
        printf("\nMovendo rainha %d casas para esquerda\n", c);
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
