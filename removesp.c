#include <stdio.h>
#define TAM 100
int main()
{

    char frase[TAM], semEsp[TAM];
    int i, j = 0;

    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);

    for(i = 0; frase[i] != '\0'; i++){
        if(frase[i] != ' '){
            semEsp[j] = frase[i];
            j++;
        }
    }

    semEsp[j] = '\0';

    printf("Frase sem espacos: %s\n", semEsp);

    return 0;
}