#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exemplo com tipo de dado caractere
    // Definir e inicializar a vari�vel
    char nome_aluno[] = "Jack Daniel's";
    // Acessando um caractere espec�fico atrav�s do �ndice
    int i;
    for (i = 0; i < sizeof(nome_aluno); i++) {
        printf("Valor no indice %d: %c \r\n", i, nome_aluno[i]);
    }

    return 0;
}
