#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
//  Crie um projeto declare 4 vari�veis para mostrar na tela s seguinte informa��o:
//  Nome, idade, sexo e altura.
//  Lembrando que o tipo de vari�vel deve corresponder as informa��es que ser�o mostradas
//  Essas informa��es devem ser mostradas de forma organizada pulando uma linha para cada uma.


// VARI�VEIS
    char Nome[20];
    int Idade;
    char Sexo[10];
    float Altura;

// Atribui��o de valores
    strcpy(Nome,"Bernardo");
    Idade = 21;
    strcpy(Sexo,"masculino");
    Altura = 1.85;

 // Impress�o
    printf("%s ", Nome);
    printf("tem %d anos,", Idade);
    printf("eh do sexo %s ", Sexo);
    printf("e possui %.2f de altura. \n", Altura);

    return 0;
}
