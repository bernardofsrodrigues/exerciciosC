#include <stdio.h>
#include <stdlib.h>

int main()

{
//  Definir vari�veis

    char name[20];
    int age;

//  Primeira pergunta (nome) Sa�da/Entrada:

    printf("Qual seu nome?: \n");
    scanf("%s", &name);

//  Segunda pergunta (idade) Sa�da e entrada:

    printf("Qual sua idade?: \n");
    scanf("%i", &age);

// Resposta do console:

    printf("Obrigado %s, sua idade, %i anos, foi salva! \n", name, age);



    return 0;


}
