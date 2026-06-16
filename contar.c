#include <stdio.h>
#define TAM 100
int main()
{
    char str[TAM];
    int i, cont = 0;

    printf("Digite uma string: ");
    gets(str);
    fflush(stdin);

    for(i = 0; str[i] != '\0'; i++){
        cont++;
    }

    printf("A string tem %d caracteres.\n", cont);

    return 0;
}