#include <stdio.h>
//Função recursiva para movimento da torre a direita
void MovimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita.\n");
        MovimentoTorre(casas - 1);
    }
}
//Função recursiva para movimento do bispo
void MovimentoBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita.\n");
        MovimentoBispo(casas - 1);
    }
}
//Função recursiva para movimento da Rainha
void MovimentoRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda.\n");
        MovimentoRainha(casas - 1);
    }
}

int main (){
    printf("Movimento da torre.\n");
    MovimentoTorre(5);

    printf("\nMovimento do Bispo:\n");
    MovimentoBispo(5);

    printf("\nMovimento da Rainha:\n");
    MovimentoRainha(8);
    // loops complexos
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <=2; i++){ // Loop para mover duas casas para cima
        printf("Cima.\n");
    }
    for (int j = 1; j <= 1; j++) { // Loop para mover uma casa para a direita
        printf("Direita.\n");
    }

    return 0;
}
