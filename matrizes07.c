#include <stdio.h>
#include <string.h>
#define L 10
#define C 50
#define TAM 10
int main()
{
    char nome[L][C];
    char curso[L][C];

    int idade[TAM];

    float nota1[TAM];
    float nota2[TAM];
    float nota3[TAM];

    float mediaNotas;
    float mediaGeral;

    float somaNotas = 0;

    int maisVelho = 0;
    int maisNovo = 0;
    int maiorMedia = 0;
    int menorMedia = 0;

    for(int i = 0; i < TAM; i++){

        printf("Digite o nome da pessoa %d: ", i + 1);
        gets(nome[i]);
        fflush(stdin);

        printf("Digite o curso da pessoa %d: ", i + 1);
        gets(nome[i]);
        fflush(stdin);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", & idade[i]);

        while(idade < 0){
            printf("idade invalida, digite outra: ");
            scanf("%d", &idade[i]);
        }

        printf("Digite a primeira nota da pessoa %d: ", i + 1);
        scanf("%f", &nota1[i]);

        while((nota1[i] < 0.0) || (nota1[i] > 10.0 )){
            printf("Nota invalida, digite outra: ");
            scanf("%f", &nota1[i]);
        }

        printf("Digite a segunda nota da pessoa %d: ", i + 1);
        scanf("%f", &nota2[i]);

        while((nota2[i] < 0.0) || (nota2[i] > 10.0 )){
            printf("Nota invalida, digite outra: ");
            scanf("%f", &nota2[i]);
        }

        printf("Digite a terceira nota da pessoa %d: ", i + 1);
        scanf("%f", &nota3[i]);

        while((nota3[i] < 0.0) || (nota3[i] > 10.0 )){
            printf("Nota invalida, digite outra: ");
            scanf("%f", &nota3[i]);
        }
    }
}