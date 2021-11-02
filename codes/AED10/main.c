#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definir e inicializar variáveis
    int matriz[2][2], i, j;
    // Atribuir valores
    matriz[0][0] = 2;   matriz[0][1] = 4;
    matriz[1][0] = 3;   matriz[1][1] = 5;
    // Acessar os elementos da matriz
    for (i = 0; i < 2; i++) { for (j = 0; j < 2; j++) {
            printf("Valor na matriz[%i][%i]: %i\r\n", i, j, matriz[i][j]);
        }   }
}
