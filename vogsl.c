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
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            cont++;
        }
    }
   
    printf("A string tem %d vogais.\n", cont);
    return 0;
}