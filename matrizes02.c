#include <stdio.h>
#define L 3
#define C 3
int main()
{
    int m[L][C], i, j;
    
    printf("Digite os elementos da matriz:\n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("A matriz digitada e:\n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("A diagonal principal e:\n");

    for(i = 0; i < L; i++){

        for(j = 0; j < C; j++){

            if(i + j == L - 1){

                printf("%d ", m[i][j]);
            }

        }
        printf("\n");
    }

    return 0;
    
}
