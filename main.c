#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Números interos: 1, 0, -1, -50, 45
    //Marcador de Posiçao: %d

    //Números Floats: 2.1, 5.500, -0.92
    //Marcador de posição: %f
    //Usar 1.1%f, 1.2%f, pra saber quantas casas aparecer no console

    printf("O numero %d eh um numero inteiro \n", 2);
    printf("Onumero %1.2f eh um numero float \n", 2.4);

    /*Operadores Aritméticos Básicos

        Soma +
        Subtração -
        Multirplicação *
        Divisão /

    */

    printf("Soma de 5 + 2 : %d \n", 7);
    printf("Subtracao de 5 - 2: %d \n", 3);
    printf("Multiplicacao de 5 * 2: %d \n", 10);
    printf("Divisao de 5 / 2: %1.1f \n", 2.5);


    return 0;
}
