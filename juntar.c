#include <stdio.h>
#include <string.h>
#define TAM 100
int main()
{
    char str1[TAM], str2[TAM], str3[TAM*2];
    int t;

    printf("Digite a primeira string: ");
    gets(str1);
    fflush(stdin);

    printf("Digite a segunda string: ");
    gets(str2);
    fflush(stdin);

    strcpy(str3, str1); // Copia a primeira string para str3
    strcat(str3, " "); // Adiciona um espaço entre as duas strings
    strcat(str3, str2); // Concatena a segunda string em str3

    printf("A terceira string eh: %s\n", str3); // Imprime a terceira string

    t = strcmp(str1, str2); // Compara as duas strings

    if (t == 0){
        printf("As strings sao iguais.\n");
    } 
    else if (t > 0){
        printf("A primeira string eh menor que a segunda.\n");
    } 
    else {
        printf("A primeira string eh maior que a segunda.\n");
    }

    return 0;
}