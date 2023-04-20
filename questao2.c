#include <stdio.h>

/* 2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos. */

int main()
{

    int A[5], i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nValores lidos: ");

    for (i = 0; i < 6; i++)
    {

        printf("%d ", A[i]);
    }
}