#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    // Exemplo com tipo de dado decimal
    // Definir e inicializar variáveis
    float area = 0, raio = 3;
    // Definir e inicializar a constante
    const float PI = 3.14;
    // Acessar a constante utilizando seu valor em um cálculo
    area = ( PI  * pow(raio , 2) );
    // Imprimir o valor calculado em tela
    printf("Imprimindo o valor calculado: %.2f", area);

    return 0;
}
