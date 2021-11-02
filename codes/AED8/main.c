#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exemplo com tipo de dado caractere
    // Definir e inicializar a variável
    char nome_aluno[] = "Jack Daniel's";
    // Acessando um caractere específico através do índice
    int i;
    for (i = 0; i < sizeof(nome_aluno); i++) {
        printf("Valor no indice %d: %c \r\n", i, nome_aluno[i]);
    }

    return 0;
}
