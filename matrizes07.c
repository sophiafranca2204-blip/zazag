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

    float media[TAM];
    float mediaGeral;

    float somaMedia = 0;

    int maisVelho = 0;
    int maisNovo = 0;
    int maiorMedia = 0;
    int menorMedia = 0;

    for(int i = 0; i < TAM; i++){

        printf("Digite o nome da pessoa %d: ", i + 1);
        gets(nome[i]);
        fflush(stdin);

        printf("Digite o curso da pessoa %d: ", i + 1);
        gets(curso[i]);
        fflush(stdin);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        while(getchar() != '\n');

        while(idade[i] <= 0){
            printf("idade invalida, digite outra: ");
            scanf("%d", &idade[i]);
            while(getchar() != '\n');
        }

        printf("Digite a primeira nota da pessoa %d: ", i + 1);
        scanf("%f", &nota1[i]);
        while(getchar() != '\n');

        while((nota1[i] < 0.0) || (nota1[i] > 10.0 )){
            printf("Nota invalida, digite outra: ");
            scanf("%f", &nota1[i]);
            while(getchar() != '\n');
        }

        printf("Digite a segunda nota da pessoa %d: ", i + 1);
        scanf("%f", &nota2[i]);
        while(getchar() != '\n');

        while((nota2[i] < 0.0) || (nota2[i] > 10.0 )){
            printf("Nota invalida, digite outra: ");
            scanf("%f", &nota2[i]);
            while(getchar() != '\n');
        }

        printf("Digite a terceira nota da pessoa %d: ", i + 1);
        scanf("%f", &nota3[i]);
        while(getchar() != '\n');

        while((nota3[i] < 0.0) || (nota3[i] > 10.0 )){
            printf("Nota invalida, digite outra: ");
            scanf("%f", &nota3[i]);
            while(getchar() != '\n');
        }

        media[i] = (nota1[i] + nota2[i] + nota3[i]) / 3;
        somaMedia += media[i];
    }

    mediaGeral = somaMedia / TAM;

    int aprovados = 0;
    int reprovados = 0;

    for(int i = 0; i < TAM; i++){
        
        if(idade[i] > idade[maisVelho]){
            maisVelho = i;
        }

        if(idade[i] < idade[maisNovo]){
            maisNovo = i;
        }

        if(media[i] > media[maiorMedia]){
            maiorMedia = i;
        }
        if(media[i] < media[menorMedia]){
            menorMedia = i;
        }

        if(media[i] >= 7){
            aprovados++;
        }
        else{
            reprovados++;
        }
    }

    for(int i = 0; i <TAM; i++){
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Curso: %s\n", curso[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Nota 1: %.2f\n", nota1[i]);
        printf("Nota 2: %.2f\n", nota2[i]);
        printf("Nota 3: %.2f\n", nota3[i]);
        printf("Media: %.2f\n", media[i]);
    }

    printf("\n====== RESULTADOS ======\n");
    printf("A media geral foi de: %.2f\n", mediaGeral);
    printf("O aluno mais velho eh: %s\n", nome[maisVelho]);
    printf("O aluno mais novo eh: %s\n", nome[maisNovo]);
    printf("Aluno com maior media: %s\n", nome[maiorMedia]);
    printf("A maior media foi de: %.2f\n", media[maiorMedia]);
    printf("Aluno com menor media: %s\n", nome[menorMedia]);
    printf("A menor media foi de: %.2f\n", media[menorMedia]);
    printf("Numero de alunos aprovados: %d\n", aprovados);
    printf("Numero de alunos reprovados: %d\n", reprovados);

    return 0;
}