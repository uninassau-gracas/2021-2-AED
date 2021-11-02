#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    // Exemplo com tipo de dado decimal
    // Definir e inicializar a constante
    const float PI = 3.14;
    // Tentativa de redefinir a constante
    // Resultará em erro do compilador:
    // |error: assignment of read-only variable 'PI'|
    PI = 3.1415;

    return 0;
}
