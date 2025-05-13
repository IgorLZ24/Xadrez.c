#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita.\n");
        moverTorre(casas - 1);
    }
    
}

void moverBispo(int casas){
    if (casas > 0)
    {
        printf("Cima, Direita.\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda.\n");
        moverRainha(casas - 1);
    }
}


int main() {

    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 1;

    //Torre

    printf("Movimento da Torre:\n");
    moverTorre(torre);
    printf("\n");


    //Bispo

    printf("Movimento do Bispo:\n");
    moverBispo(bispo);
    printf("\n");
    
    //Rainha

    printf("Movimento da Rainha:\n");
    moverRainha(rainha);
    printf("\n");
    
    //Cavalo

    printf("Movimento do cavalo:\n");
    while (cavalo--) //se cavalo for maior que 0, executa o código de baixo, e depois decrementa ele.
    {
        for (int i = 0; i < 2; i++) { //quantas vezes ira imprimir na tela o str Cima.
            printf("Cima.\n");

        }
        
        printf("Direita.\n"); //depois de 2 vezes para cima, ele vai 1 para a direita.
    }
    printf("\n");


    return 0;
};