#include <stdio.h>

int main() {
    int opcao, casas;

    // Menu de seleção de peças
    do {
        printf("\nEscolha uma peça para mover:\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            break;
        }

        printf("Digite o número de casas para mover: ");
        scanf("%d", &casas);

        // Movimentação baseada na escolha do usuário
        switch (opcao) {
            case 1: // Movimentação do Bispo
                printf("Movendo o Bispo:\n");
                for (int i = 1; i <= casas; i++) {
                    printf("Movimento %d: Diagonal - +%d casas.\n", i, i);
                }
                break;
            case 2: // Movimentação da Torre
                printf("Movendo a Torre:\n");
                for (int i = 1; i <= casas; i++) {
                    printf("Movimento %d: Direita - +%d casas.\n", i, i);
                }
                break;
            case 3: // Movimentação da Rainha
                printf("Movendo a Rainha:\n");
                for (int i = 1; i <= casas; i++) {
                    printf("Movimento %d: Esquerda - -%d casas.\n", i, i);
                }
                break;
            case 4: // Movimentação do Cavalo
                printf("Movendo o Cavalo (movimentos em L):\n");
                int movimentos[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1},
                                         {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
                for (int i = 0; i < 8; i++) {
                    printf("Movimento %d: +%d casas no eixo X e +%d casas no eixo Y.\n", i + 1, movimentos[i][0], movimentos[i][1]);
                }
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    printf("Saindo do jogo de xadrez...\n");
    return 0;
}
