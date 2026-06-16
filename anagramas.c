#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 100
int main()
{
    char palavra1[TAM], palavra2[TAM];
    int letras[26] = {0}; //vetor de contagem com as posicoes zeradas

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digitea a segunda palavra: ");
    scanf("%s", palavra2);

    if(strlen(palavra1) != strlen(palavra2)){ //comparando os tamanhos das palavras
        printf("Nao sao anagramas.\n");
        return 0;
    }

    for(int i = 0; palavra1[i] != '\0'; i++){
        letras[tolower(palavra1[i]) - 'a']++; //conta letras 
        letras[tolower(palavra2[i]) - 'a']--; //desconta letras
    }

    for(int i = 0; i < 26; i++){
        if(letras[i] != 0){
            printf("Nao sao anagramas.\n");
            return 0;
        }
    }

    printf("Sao anagramas.\n");

    return 0;
}