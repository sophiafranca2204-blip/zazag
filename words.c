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

        if(str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' '){ // Verifica se o caractere atual é um espaço e se o próximo caractere não é um espaço ou o fim da string
            cont++;
        }
    }
    if (i > 0 && str[0] != ' '){ // Verifica se a string não está vazia e se o primeiro caractere não é um espaço
        cont++; // Incrementa o contador para contar a primeira palavra
    }
    printf("A string tem %d palavras.\n", cont);
    return 0;

}