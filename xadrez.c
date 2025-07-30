#include <stdio.h>

int main(){
    int escolha, mov_peca = 0;

    //  Entrada de dados
    printf("Peças de Xadrez\n"
            "Escolha uma peça para simular os movimentos: \n"
            "1. Torre\n"
            "2. Bispo\n"
            "3. Rainha\n"
            "4. Cavalo\n"
            "5. Sair do programa\n");
    scanf("%d", &escolha);

    switch (escolha) {
        //  Torre (cinco casas p/ direita) (for)
        case 1:
            printf("Movimentação - Torre\n");
            for (mov_peca = 0; mov_peca < 5; mov_peca++) {
            printf("Direita\n");
            }
        break;

        //  Bispo (cinco casas na diagonal p/ cima e direita) (while)
        case 2:
            printf("Movimentação - Bispo\n");
            while (mov_peca < 5) {
            printf("Cima, Direita\n");
            mov_peca++;
            }
        break;

        //  Rainha (oito casas p/ esquerda) (do while)
        case 3:
            printf("Movimentação - Rainha\n");
            do {
            printf("Esquerda\n");
            mov_peca++;
            }while (mov_peca < 8);
        break;

        // Cavalo (duas casas p/ baixo e uma p/ esquerda) (for e while)
        case 4:
            printf("Movimentação - Cavalo\n");
            mov_peca = 1;
            while (mov_peca--) {
                
                for (int mov_peca_2 = 0; mov_peca_2 < 2; mov_peca_2++) {
                    printf("Baixo\n");
                }
                
            printf("Esquerda\n");
            }
        break;
        
        //  Sair do programa
        case 5:
            printf("Saindo do programa...\n");
            return 0;
        break;

        default:
            printf("Escolha inválida, saindo do programa\n");
            return 11;
        break;
        }
  
return 0;
}
