#include <stdio.h>
#define TAM 70
int main()
{
    char palavra[TAM];
    int i, palindromo = 1, tam = 0;

    printf("Digite uma palavra: ");
    gets(palavra);
    fflush(stdin);

    while(palavra[tam] != '\0'){
        tam++;
    }

    for(i = 0; i < tam / 2; i++){

        if(palavra[i] != palavra[tam - 1 - i]){
            palindromo = 0;
            break;
        }
    }

    if(palindromo == 1){
        printf("A palavra eh um palindromo.\n");
    } else {
        printf("A palavra nao eh um palindromo.\n");
    }

    return 0;
}