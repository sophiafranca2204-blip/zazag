//leia uma palavra e imprima a palavra invertida
#include <stdio.h>
#define TAM 100
int main()
{
    char str[TAM], invert[TAM];

    int i, j = 0;

    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    fflush(stdin);

    for(i = 0; str[i] != '\0'; i++){
        // Apenas para contar o tamanho da string
    }

    for(i = i - 1; i >= 0; i--){ // Inicia o loop a partir do último caractere da string original
        invert[j] = str[i]; // Atribui os caracteres da string original à string invertida em ordem reversa
        j++;
    }

    invert[j] = '\0'; 
    printf("String invertida: %s\n", invert);
    return 0;
}