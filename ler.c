#include <stdio.h>
#include <ctype.h>
#define TAM 200
int main()
{
    char nome[TAM];
    int i;

    printf("Digite um nome completo: ");
    gets(nome);
    fflush(stdin);

    printf("Iniciais\n");
    if (nome[0] != ' ')
    {
        printf("%c. ", nome[0]);
    }
    
    for(i = 0; nome[i] != '\0'; i++){
        if (nome[i] == ' ' && nome[i + 1] != '\0' && nome[i + 1] != ' '){
            printf("%c. ", toupper(nome[i + 1]));
        }
    }

    return 0;
}