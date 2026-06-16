#include <stdio.h>
#include <string.h>
#define TAM 100
int main()
{
    char antigo, novo, texto[TAM];

    printf("Digite uma frase: ");
    gets(texto);
    fflush(stdin);

    printf("Digite um caractere que deseja substituir: ");
    scanf(" %c", &antigo);

    printf("Digite o novo caractere: ");
    scanf(" %c", &novo);

    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] == antigo){
            texto[i] = novo;
        }
    }
    printf("Frase modificada: %s", texto);

    return 0;
}