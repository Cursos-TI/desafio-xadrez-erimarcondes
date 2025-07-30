#include <stdio.h>

void movimentoTorre(int casas){ // movimentação p/ direita
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

void movimentoBispo(int casas){ // movimentação na diagonal p/ cima e direita
    if (casas > 0) {
        printf("Cima, Direita\n");
        movimentoBispo(casas - 1);
    }
}

void movimentoRainha(int casas){ // movimentação p/ esquerda
    if (casas > 0){
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

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
        //  Torre (função recursiva)
        case 1:
            printf("Movimentação - Torre\n");
            movimentoTorre(5);
        break;

        //  Bispo (função recursiva)
        case 2:
            printf("Movimentação - Bispo\n");
            movimentoBispo(5);
        break;

        //  Rainha (função recursiva)
        case 3:
            printf("Movimentação - Rainha\n");
            movimentoRainha(8);
        break;

        // Cavalo (duas casas p/ cima e uma p/ direita) (for e while)
        case 4:
            printf("Movimentação - Cavalo\n");
            mov_peca = 1;
            while (mov_peca--) {
                
                for (int mov_peca_2 = 0; mov_peca_2 < 2; mov_peca_2++) {
                    printf("Cima\n");
                }
                
            printf("Direita\n");
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
