#include <stdio.h>
#include <stdlib.h>

int main()

{
//  Definir variáveis

    char name[20];
    int age;

//  Primeira pergunta (nome) Saída/Entrada:

    printf("Qual seu nome?: \n");
    scanf("%s", &name);

//  Segunda pergunta (idade) Saída e entrada:

    printf("Qual sua idade?: \n");
    scanf("%i", &age);

// Resposta do console:

    printf("Obrigado %s, sua idade, %i anos, foi salva! \n", name, age);



    return 0;


}
