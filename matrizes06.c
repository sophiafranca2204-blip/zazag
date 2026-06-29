#include <stdio.h>
#include <string.h>
#define TAM 5
#define L 5
#define C 50
int main()
{
    char titulo[L][C];
    char autor[L][C];

    int numPaginas[TAM];
    float valor[TAM];

    float mediaPag = 0;
    float mediaValor = 0;

    int somaPag = 0;
    float somaValor = 0;

    int maiscaro = 0;
    int maisPag = 0;

    int i;

    for(i = 0; i < TAM; i++){
        printf("Digite o titulo do livro %d: ", i + 1);
        gets(titulo[i]);
        fflush(stdin);

        printf("Digite o nome do autor %d: ", i + 1);
        gets(autor[i]);
        fflush(stdin);

        printf("Digite o numero de paginas do livro %d: ", i + 1);
        scanf("%d", &numPaginas[i]);
        while(getchar() != '\n');

        while(numPaginas[i] <= 0){
            printf("Um livro nao pode ter menos que/ou 0 paginas, digite outro valor: ");
            scanf("%d", &numPaginas[i]);
            while(getchar() != '\n');
        }
        somaPag += numPaginas[i];

        printf("Digite o valor do livro %d: ", i + 1);
        scanf("%f", &valor[i]);
        while(getchar() != '\n');

        while(valor[i] <= 0){
            printf("Valor invalido. Digite outro: ");
            scanf("%f", &valor[i]);
            while(getchar() != '\n');
        }
        somaValor += valor[i];
    }

    mediaPag = somaPag / (float)TAM;
    mediaValor = somaValor / (float)TAM;

    for(i = 1; i < TAM; i++){
        if (valor[i] > valor[maiscaro]){
            maiscaro = i;
        }
        if(numPaginas[i] > numPaginas[maisPag]){
            maisPag = i;
        }
    }

    printf("Resultados:\n");

    printf("Livros cadastrados:\n");

    for(i = 0; i < TAM; i++){
        printf("\nLivro %d\n", i + 1);
        printf("Titulo: %s\n", titulo[i]);
        printf("Autor: %s\n", autor[i]);
        printf("Numero de paginas: %d\n", numPaginas[i]);
        printf("Valor: R$ %.2f\n", valor[i]);
    }

    printf("\nA media de paginas foi de: %.2f\n", mediaPag);
    printf("O valor medio dos livros foi de: %.2f\n", mediaValor);
    printf("O livro mais caro foi o livro: %s\n", titulo[maiscaro]);
    printf("O livro com mais paginas foi o livro: %s\n", titulo[maisPag]);

    return 0;
}