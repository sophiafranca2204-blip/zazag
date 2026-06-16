#include <stdio.h>
#include <string.h>
#define TAM 100
int main()
{
    char frase[TAM];
    int i;

    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);

    for(i = 0; frase[i] != '\0'; i++){
        if(frase[i] >= 'a' && frase[i] <= 'z'){
            frase[i] = frase[i] - 'a' + 'A';
        }
    }

    printf("Frase em letras maiusculas: %s\n", frase);
    return 0;
}