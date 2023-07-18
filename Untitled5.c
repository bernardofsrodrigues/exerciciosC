#include <stdio.h>
#include <stdlib.h>

int main()

{
//  Joana comprou 23 caixas de leite
//  Ela gastou no total 57.5 reais
//  Quanto custou cada caixa?

 int caixas = 23 ;
 float total = 57.5 ;
 float cada = 57.5 / 23 ;

    printf("Joana comprou %d caixas e gastou %1.2f reais no total \n", caixas, total);
    printf("Logo cada caixa custou %1.2f", cada);

    return 0;
};
