#include <stdio.h>
#include <string.h>
#define C 100
#define L 3
int main()
{
    
    char nomes[L][C];
    int i;

    printf("Digite os nomes:\n");

    for(i = 0; i < L; i++){
        
        gets(nomes[i]);
        fflush(stdin);
    }

    printf("Os nomes digitados foram:\n");

    for(i = 0; i < L; i++){
        printf("%s\n", nomes[i]);
    }

    return 0;
}