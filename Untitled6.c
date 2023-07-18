#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
//  Crie um projeto declare 4 variáveis para mostrar na tela s seguinte informação:
//  Nome, idade, sexo e altura.
//  Lembrando que o tipo de variável deve corresponder as informações que serão mostradas
//  Essas informações devem ser mostradas de forma organizada pulando uma linha para cada uma.


// VARIÁVEIS
    char Nome[20];
    int Idade;
    char Sexo[10];
    float Altura;

// Atribuição de valores
    strcpy(Nome,"Bernardo");
    Idade = 21;
    strcpy(Sexo,"masculino");
    Altura = 1.85;

 // Impressão
    printf("%s ", Nome);
    printf("tem %d anos,", Idade);
    printf("eh do sexo %s ", Sexo);
    printf("e possui %.2f de altura. \n", Altura);

    return 0;
}
