#include <stdio.h>
#include <stdlib.h>

int main()

{
//  Marcelo comprou 5 tomates.
//  Cada um custou 2.3 reais.
//  Quanto ele gastou.

    printf("Marcelo comprou 5 tomates. Cada um custou 2.3 reais. Quanto ele gastou? \n");

int Tomate = 5 ;
float Preco = 2.3 ;

    printf("Marcelo comprou %d tomates ", Tomate);
    printf("com o preco de %1.1f cada, ", Preco);
    printf("logo ele gastou %1.1f reais. \n", Tomate * Preco);

    return 0;
};
