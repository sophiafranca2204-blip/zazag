#include <stdio.h>
#include <string.h>
#define L 5
#define C 100
#define TAM 5
int main()
{
    char nomes[L][C];
    char email[L][C];

    int idade[TAM];
    float altura[TAM];
    float peso[TAM];

    int i;

    int somaIdades = 0;
    float somaAlturas = 0;
    float somaPesos = 0;

    float mediaIdade;
    float mediaAltura;
    float mediaPeso;

    int maisVelho = 0;
    int maisNovo = 0;
    int maisAlto = 0;
    int maisPesado = 0;

    
    for(i = 0; i < TAM; i++){

        printf("Digite o nome do amigo %d: ", i + 1);
        gets(nomes[i]);
        fflush(stdin);

        printf("Digite o email do amigo %d: ", i + 1);
        gets(email[i]);
        fflush(stdin);

        printf("Digite a idade do amigo %d: ", i + 1);
        scanf("%d", &idade[i]);
        while(getchar() != '\n');

        while(idade[i] <= 0){
            printf("Idade invalida, digite outra: ");
            scanf("%d", &idade[i]);
            while(getchar() != '\n');
        }
        somaIdades += idade[i];

        printf("Digite a altura do amigo %d: ", i + 1);
        scanf("%f", &altura[i]);
        while(getchar() != '\n');
        
        while(altura[i] > 2.72 || altura[i] <= 0.0){
            printf("Altura invalida, digite outra: ");
            scanf("%f", &altura[i]);
            while(getchar() != '\n');
        }
        somaAlturas += altura[i];

        printf("Digite o peso do amigo %d: ", i + 1);
        scanf("%f", &peso[i]);
        while(getchar() != '\n');

        while(peso[i] <= 0.0 || peso[i] > 500.0){
            printf("Peso invalido, digite outro: ");
            scanf("%f", &peso[i]);
            while(getchar() != '\n');
        }
        somaPesos += peso[i];
    }

    mediaIdade = somaIdades / (float)TAM;
    mediaAltura = somaAlturas / (float)TAM;
    mediaPeso = somaPesos / (float)TAM;

    for(i = 1; i < TAM; i++){

        if(idade[i] > idade[maisVelho]){
            maisVelho = i;
        }
        if(idade[i] < idade[maisNovo]){
            maisNovo = i;
        }
        if(altura[i] > altura[maisAlto]){
            maisAlto = i;
        }
        if(peso[i] > peso[maisPesado]){
            maisPesado = i;
        }
    } 

    printf("\n====== DADOS CADASTRADOS ======\n");

    for(i = 0; i < TAM; i++){
        printf("\nAmigo %d\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("E-mail: %s\n", email[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Altura: %.2f\n", altura[i]);
        printf("Peso: %.2f\n", peso[i]);
    }

    printf("\n======RESULTADOS======\n");

    printf("A media da idade entre os amigos foi de: %.2f\n", mediaIdade);
    printf("A media de altura entre os amigos foi de: %.2f\n", mediaAltura);
    printf("A media de peso entre os amigos foi de: %.2f\n", mediaPeso);

    printf("O amigo mais velho eh: %s\n", nomes[maisVelho]);
    printf("O amigo mais novo eh: %s\n", nomes[maisNovo]);
    printf("O amigo mais alto eh: %s\n", nomes[maisAlto]);
    printf("O amigo mais pesado eh: %s\n", nomes[maisPesado]);

    return 0;
}