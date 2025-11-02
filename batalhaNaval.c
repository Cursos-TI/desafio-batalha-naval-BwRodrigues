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

// Cordenadas iniciais. (pode alterar)

int Hlinha = 2; //Navio horizontal na linha 2
int Hcol = 1; // Começando na coluna 1

int Vlinha = 1; //Navio vertical começando na linha 01
int Vcol = 6; //Na coluna 06 ocupa (1,6)(2,6) (3,6)


// Validação de limites

if (Hcol + tam > n)
{
    printf ("ERRO: Navio Horinzontal sairia do tabuleiro. \n");
    return 0;
}

if (Vlinha + tam > n)
{
    printf ("ERRO: navio vertical sairia do tabuleiro. \n");
    return 0;
}



    return 0;
}
