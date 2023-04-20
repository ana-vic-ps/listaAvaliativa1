#include <stdio.h>

/* 4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também 2 valores X e Y quaisquer correspondente a duas posições
no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y. */

int main()
{

    int vet[8], i, x, y, soma;

    for (i = 0; i < 8; i++)
    {

        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nDigite um número correspondende a uma posição do vetor: (0 a 7) ");
    scanf("%i", &x);
    printf("\nDigite um número correspondende a outra posição do vetor: (0 a 7)");
    scanf("%i", &y);

    soma = vet[x] + vet[y];

    printf("\nSoma: %i", soma);
}