#include <stdio.h>
#include <string.h>
#include <conio.h>
#define L 3
#define C 3
#define TAM 100
int main()
{
    char nomes[L][TAM];
    float notas[L][C];
    int i, j;
    
    for(i = 0; i < L; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        gets(nomes[i]);
        fflush(stdin);

        for(j = 0; j < C; j++){
            printf("Digite a nota %d do aluno %s: ", j + 1, nomes[i]);
            scanf("%f", &notas[i][j]);
            fflush(stdin);
        }
        getchar();
    }
    
    printf("Extratos dos alunos, nomes e medias:\n");

    for(i = 0; i < L; i++){
        printf("%s: ", nomes[i]);

        float soma = 0;

        for(j = 0; j < C; j++){
            printf("%.2f ", notas[i][j]);
            soma += notas[i][j];
        }

        printf("Media: %.2f\n", soma / C);
    }

    return 0;
}