#include <stdio.h>

#define n 10 //Tamanho do tabuleiro?
#define agua 0
#define navio 3
#define tam 3  //Tamanho do navio (3partes)

// Nivel novato - posicionamento dos navios.

int main() {
   
    int tabuleiro [n][n];
for (int linha = 0; linha < n; linha++ )
{
    for (int col = 0; col < n; col++)
    {
        tabuleiro[linha][col] = agua;
    }
    
}

// Navio em 1D 3 partes

int navioH[tam] = {navio, navio, navio}; //horizontal
int NavioV[tam] = {navio, navio, navio}; //Vertical



    return 0;
}
