#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exemplo com tipo de dado definido pelo programador
    // Definir o tipo de dado booleano
    typedef enum { false, true } bool;
    // Definir e inicializar uma vari�vel do tipo booleano
    bool lampada = false;
    // Acessar a vari�vel imprimindo seu valor em tela
    printf("A lampada esta acessa: %i", lampada);

    return 0;
}
